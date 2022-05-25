void TypeToNameless             (Type*, std::vector <Ident>&);
void TypeToNameless_AutoType    (Type*, std::vector <Ident>&);
void TypeToNameless_BoolType    (Type*, std::vector <Ident>&);
void TypeToNameless_NatType     (Type*, std::vector <Ident>&);
void TypeToNameless_RefType     (Type*, std::vector <Ident>&);
void TypeToNameless_VarType     (Type*, std::vector <Ident>&);
void TypeToNameless_UniType     (Type*, std::vector <Ident>&);
void TypeToNameless_FunType     (Type*, std::vector <Ident>&);
void TypeToNameless_TupleType   (Type*, std::vector <Ident>&);
void TypeToNameless_RecordType  (Type*, std::vector <Ident>&);
void TypeToNameless_VariantType (Type*, std::vector <Ident>&);
void TypeToNameless_IntType     (Type*, std::vector <Ident>&);
void TypeToNameless_RealType    (Type*, std::vector <Ident>&);

void TypeToNameless(Type *type, std::vector <Ident> &context) {
    if (dynamic_cast <AutoType*> (type)) {
        TypeToNameless_AutoType(type, context); return;
    }
    if (dynamic_cast <BoolType*> (type)) {
        TypeToNameless_BoolType(type, context); return;
    }
    if (dynamic_cast <NatType*> (type)) {
        TypeToNameless_NatType(type, context); return;
    }
    if (dynamic_cast <RefType*> (type)) {
        TypeToNameless_RefType(type, context); return;
    }
    if (dynamic_cast <VarType*> (type)) {
        TypeToNameless_VarType(type, context); return;
    }
    if (dynamic_cast <UniType*> (type)) {
        TypeToNameless_UniType(type, context); return;
    }
    if (dynamic_cast <FunType*> (type)) {
        TypeToNameless_FunType(type, context); return;
    }
    if (dynamic_cast <TupleType*> (type)) {
        TypeToNameless_TupleType(type, context); return;
    }
    if (dynamic_cast <RecordType*> (type)) {
        TypeToNameless_RecordType(type, context); return;
    }
    if (dynamic_cast <VariantType*> (type)) {
        TypeToNameless_VariantType(type, context); return;
    }
    if (dynamic_cast <IntType*> (type)) {
        TypeToNameless_IntType(type, context); return;
    }
    if (dynamic_cast <RealType*> (type)) {
        TypeToNameless_RealType(type, context); return;
    }
}

void TypeToNameless_AutoType(Type *type, std::vector <Ident> &context) { }
void TypeToNameless_BoolType(Type *type, std::vector <Ident> &context) { }
void TypeToNameless_NatType(Type *type, std::vector <Ident> &context) { }
void TypeToNameless_RefType(Type *type, std::vector <Ident> &context) {
    RefType *ref_type = dynamic_cast <RefType*> (type);
    TypeToNameless(ref_type->type_, context);
}
void TypeToNameless_VarType(Type *type, std::vector <Ident> &context) {
    VarType *var_type = dynamic_cast <VarType*> (type);
    int n = find_position_backward(context, var_type->ident_);
    if (n != -1) {
        var_type->ident_ = itos_nl(n);
    }
    else {
        throw "Semantic Error: undefined type variable";
    }
}
void TypeToNameless_UniType(Type *type, std::vector <Ident> &context) {
    UniType *uni_type = dynamic_cast <UniType*> (type);
    context.push_back(uni_type->ident_);
    TypeToNameless(uni_type->type_, context);
    context.pop_back();
}
void TypeToNameless_FunType(Type *type, std::vector <Ident> &context) {
    FunType *fun_type = dynamic_cast <FunType*> (type);
    TypeToNameless(fun_type->type_1, context);
    TypeToNameless(fun_type->type_2, context);
}
void TypeToNameless_TupleType(Type *type, std::vector <Ident> &context) {
    TupleType *tuple_type = dynamic_cast <TupleType*> (type);
    for (ListType::iterator i = tuple_type->listtype_->begin() ; i != tuple_type->listtype_->end(); i++)
        TypeToNameless(*i, context);
}
void TypeToNameless_RecordType(Type *type, std::vector <Ident> &context) {
    RecordType *record_type = dynamic_cast <RecordType*> (type);
    for (ListRecordTypeField_::iterator i = record_type->listrecordtypefield__->begin() ; i != record_type->listrecordtypefield__->end(); i++) {
        RecordTypeField *record_type_field = dynamic_cast <RecordTypeField*> (*i);
        TypeToNameless(record_type_field->type_, context);
    }
}
void TypeToNameless_VariantType(Type *type, std::vector <Ident> &context) {
    VariantType *variant_type = dynamic_cast <VariantType*> (type);
    for (ListVariantTypeField_::iterator i = variant_type->listvarianttypefield__->begin() ; i != variant_type->listvarianttypefield__->end(); i++) {
        VariantTypeField *variant_type_field = dynamic_cast <VariantTypeField*> (*i);
        TypeToNameless(variant_type_field->type_, context);
    }
}
void TypeToNameless_IntType(Type *type, std::vector <Ident> &context) { }
void TypeToNameless_RealType(Type *type, std::vector <Ident> &context) { }

