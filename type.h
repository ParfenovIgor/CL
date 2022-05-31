bool TypeEqual(Type *type_1, Type *type_2) {
    if (dynamic_cast <BoolType*> (type_1) && dynamic_cast <BoolType*> (type_2))
        return true;
    if (dynamic_cast <NatType*> (type_1) && dynamic_cast <NatType*> (type_2))
        return true;

    RefType *ref_type_1 = dynamic_cast <RefType*> (type_1);
    RefType *ref_type_2 = dynamic_cast <RefType*> (type_2);
    if (ref_type_1 && ref_type_2)
        return TypeEqual(ref_type_1->type_, ref_type_2->type_);

    VarType *var_type_1 = dynamic_cast <VarType*> (type_1);
    VarType *var_type_2 = dynamic_cast <VarType*> (type_2);
    if (var_type_1 && var_type_2)
        return var_type_1->ident_ == var_type_2->ident_;

    UniType *uni_type_1 = dynamic_cast <UniType*> (type_1);
    UniType *uni_type_2 = dynamic_cast <UniType*> (type_2);
    if (uni_type_1 && uni_type_2) 
        return TypeEqual(uni_type_1->type_, uni_type_2->type_);

    FunType *fun_type_1 = dynamic_cast <FunType*> (type_1);
    FunType *fun_type_2 = dynamic_cast <FunType*> (type_2);
    if (fun_type_1 && fun_type_2) 
        return TypeEqual(fun_type_1->type_1, fun_type_2->type_1) && TypeEqual(fun_type_1->type_2, fun_type_2->type_2);

    TupleType *tuple_type_1 = dynamic_cast <TupleType*> (type_1);
    TupleType *tuple_type_2 = dynamic_cast <TupleType*> (type_2);
    if (tuple_type_1 && tuple_type_2) {
        if (tuple_type_1->listtype_->size() != tuple_type_2->listtype_->size())
            return false;
        for (size_t i = 0; i < tuple_type_1->listtype_->size(); i++) {
            Type *type_1 = (*(tuple_type_1->listtype_))[i];
            Type *type_2 = (*(tuple_type_2->listtype_))[i];
            if (!TypeEqual(type_1, type_2))
                return false;
        }
        return true;
    }
    
    RecordType *record_type_1 = dynamic_cast <RecordType*> (type_1);
    RecordType *record_type_2 = dynamic_cast <RecordType*> (type_2);
    if (record_type_1 && record_type_2) {
        if (record_type_1->listrecordtypefield__->size() != record_type_2->listrecordtypefield__->size())
            return false;
        for (size_t i = 0; i < record_type_1->listrecordtypefield__->size(); i++) {
            RecordTypeField *field_1 = dynamic_cast <RecordTypeField*> ((*(record_type_1->listrecordtypefield__))[i]);
            RecordTypeField *field_2 = dynamic_cast <RecordTypeField*> ((*(record_type_2->listrecordtypefield__))[i]);
            if (field_1->ident_ != field_2->ident_ ||
                !TypeEqual(field_1->type_, field_2->type_))
                return false;
        }
        return true;
    }
    
    VariantType *variant_type_1 = dynamic_cast <VariantType*> (type_1);
    VariantType *variant_type_2 = dynamic_cast <VariantType*> (type_2);
    if (variant_type_1 && variant_type_2) {
        if (variant_type_1->listvarianttypefield__->size() != variant_type_2->listvarianttypefield__->size())
            return false;
        for (size_t i = 0; i < variant_type_1->listvarianttypefield__->size(); i++) {
            VariantTypeField *field_1 = dynamic_cast <VariantTypeField*> ((*(variant_type_1->listvarianttypefield__))[i]);
            VariantTypeField *field_2 = dynamic_cast <VariantTypeField*> ((*(variant_type_2->listvarianttypefield__))[i]);
            if (field_1->ident_ != field_2->ident_ ||
                !TypeEqual(field_1->type_, field_2->type_))
                return false;
        }
        return true;
    }

    ArrayType *array_type_1 = dynamic_cast <ArrayType*> (type_1);
    ArrayType *array_type_2 = dynamic_cast <ArrayType*> (type_2);
    if (array_type_1 && array_type_2) 
        return TypeEqual(array_type_1->type_, array_type_2->type_);

    if (dynamic_cast <IntType*> (type_1) && dynamic_cast <IntType*> (type_2))
        return true;
    if (dynamic_cast <RealType*> (type_1) && dynamic_cast <RealType*> (type_2))
        return true;

    return false;
}

void TypeUnify(Constraint &constraint, std::vector < std::pair <Ident, Type*> > &subst) {
    if (constraint.empty()) return;

    Type *t_1 = constraint.back().first->clone();
    Type *t_2 = constraint.back().second->clone();
    constraint.pop_back();
    
    if (TypeEqual(t_1, t_2)) {
        TypeUnify(constraint, subst);
        return;
    }

    VarType *var_type = dynamic_cast <VarType*> (t_1);
    if (var_type && is_meta(var_type->ident_)) {
        bool result = true;
        TypeFree(t_2, var_type->ident_, result);
        if (result) {
            for (auto &c : constraint) {
                TypeSubstitute(c.first, var_type->ident_, t_2);
                TypeSubstitute(c.second, var_type->ident_, t_2);
            }
            TypeUnify(constraint, subst);
            subst.push_back({var_type->ident_, t_2});
            return;
        }
    }

    var_type = dynamic_cast <VarType*> (t_2);
    if (var_type && is_meta(var_type->ident_)) {
        bool result = true;
        TypeFree(t_1, var_type->ident_, result);
        if (result) {
            for (auto &c : constraint) {
                TypeSubstitute(c.first, var_type->ident_, t_1);
                TypeSubstitute(c.second, var_type->ident_, t_1);
            }
            TypeUnify(constraint, subst);
            subst.push_back({var_type->ident_, t_1});
            return;
        }
    }

    RefType *ref_type_1 = dynamic_cast <RefType*> (t_1);
    RefType *ref_type_2 = dynamic_cast <RefType*> (t_2);
    if (ref_type_1 && ref_type_2) {
        constraint.push_back({ref_type_1->type_->clone(), ref_type_2->type_->clone()});
        TypeUnify(constraint, subst);
        return;
    }
    
    FunType *fun_type_1 = dynamic_cast <FunType*> (t_1);
    FunType *fun_type_2 = dynamic_cast <FunType*> (t_2);
    if (fun_type_1 && fun_type_2) {
        constraint.push_back({fun_type_1->type_1->clone(), fun_type_2->type_1->clone()});
        constraint.push_back({fun_type_1->type_2->clone(), fun_type_2->type_2->clone()});
        TypeUnify(constraint, subst);
        return;
    }
    
    TupleType *tuple_type_1 = dynamic_cast <TupleType*> (t_1);
    TupleType *tuple_type_2 = dynamic_cast <TupleType*> (t_2);
    if (tuple_type_1 && tuple_type_2) {
        if (tuple_type_1->listtype_->size() != tuple_type_2->listtype_->size())
            throw "Type Error: could not construct Types";
        for (size_t i = 0; i < tuple_type_1->listtype_->size(); i++) {
            Type *type_1 = (*(tuple_type_1->listtype_))[i];
            Type *type_2 = (*(tuple_type_2->listtype_))[i];
            constraint.push_back(std::make_pair(type_1->clone(), type_2->clone()));
        }
        TypeUnify(constraint, subst);
        return;
    }
    
    RecordType *record_type_1 = dynamic_cast <RecordType*> (t_1);
    RecordType *record_type_2 = dynamic_cast <RecordType*> (t_2);
    if (record_type_1 && record_type_2) {
        if (record_type_1->listrecordtypefield__->size() != record_type_2->listrecordtypefield__->size())
            throw "Type Error: could not construct Types";
        for (size_t i = 0; i < record_type_1->listrecordtypefield__->size(); i++) {
            RecordTypeField *field_1 = dynamic_cast <RecordTypeField*> ((*(record_type_1->listrecordtypefield__))[i]);
            RecordTypeField *field_2 = dynamic_cast <RecordTypeField*> ((*(record_type_2->listrecordtypefield__))[i]);
            if (field_1->ident_ != field_2->ident_)
                throw "Type Error: could not construct Types";
            constraint.push_back(std::make_pair(field_1->type_->clone(), field_2->type_->clone()));
        }
        TypeUnify(constraint, subst);
        return;
    }
    
    VariantType *variant_type_1 = dynamic_cast <VariantType*> (t_1);
    VariantType *variant_type_2 = dynamic_cast <VariantType*> (t_2);
    if (variant_type_1 && variant_type_2) {
        if (variant_type_1->listvarianttypefield__->size() != variant_type_2->listvarianttypefield__->size())
            throw "Type Error: could not construct Types";
        for (size_t i = 0; i < variant_type_1->listvarianttypefield__->size(); i++) {
            VariantTypeField *field_1 = dynamic_cast <VariantTypeField*> ((*(variant_type_1->listvarianttypefield__))[i]);
            VariantTypeField *field_2 = dynamic_cast <VariantTypeField*> ((*(variant_type_2->listvarianttypefield__))[i]);
            if (field_1->ident_ != field_2->ident_)
                throw "Type Error: could not construct Types";
            constraint.push_back(std::make_pair(field_1->type_->clone(), field_2->type_->clone()));
        }
        TypeUnify(constraint, subst);
        return;
    }
    
    ArrayType *array_type_1 = dynamic_cast <ArrayType*> (t_1);
    ArrayType *array_type_2 = dynamic_cast <ArrayType*> (t_2);
    if (array_type_1 && array_type_2) {
        constraint.push_back({array_type_1->type_->clone(), array_type_2->type_->clone()});
        TypeUnify(constraint, subst);
        return;
    }
    
    throw "Type Error: could not construct Types";
}

