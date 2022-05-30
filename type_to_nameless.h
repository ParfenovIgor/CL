void TypeToNameless             (Type*&, ContextIT&);
void TypeToNameless_AutoType    (Type*&, ContextIT&);
void TypeToNameless_BoolType    (Type*&, ContextIT&);
void TypeToNameless_NatType     (Type*&, ContextIT&);
void TypeToNameless_RefType     (Type*&, ContextIT&);
void TypeToNameless_VarType     (Type*&, ContextIT&);
void TypeToNameless_UniType     (Type*&, ContextIT&);
void TypeToNameless_FunType     (Type*&, ContextIT&);
void TypeToNameless_TupleType   (Type*&, ContextIT&);
void TypeToNameless_RecordType  (Type*&, ContextIT&);
void TypeToNameless_VariantType (Type*&, ContextIT&);
void TypeToNameless_ArrayType   (Type*&, ContextIT&);
void TypeToNameless_IntType     (Type*&, ContextIT&);
void TypeToNameless_RealType    (Type*&, ContextIT&);

void TypeToNameless(Type *&type, ContextIT &context) {
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
    if (dynamic_cast <ArrayType*> (type)) {
        TypeToNameless_ArrayType(type, context); return;
    }
    if (dynamic_cast <IntType*> (type)) {
        TypeToNameless_IntType(type, context); return;
    }
    if (dynamic_cast <RealType*> (type)) {
        TypeToNameless_RealType(type, context); return;
    }
}

void TypeToNameless_AutoType(Type *&type, ContextIT &context) { }
void TypeToNameless_BoolType(Type *&type, ContextIT &context) { }
void TypeToNameless_NatType(Type *&type, ContextIT &context) { }
void TypeToNameless_RefType(Type *&type, ContextIT &context) {
    RefType *ref_type = dynamic_cast <RefType*> (type);
    TypeToNameless(ref_type->type_, context);
}
void TypeToNameless_VarType(Type *&type, ContextIT &context) {
    VarType *var_type = dynamic_cast <VarType*> (type);
    int pos = find_position_backward(context, var_type->ident_);
    if (pos != -1) {
        if (context[pos].second) {
            delete type;
            type = context[pos].second->clone();
        }
        else {
            var_type->ident_ = itos_nl(find_position_backward_nl(context, var_type->ident_));
        }
    }
    else {
        throw "Semantic Error: undefined Type Variable";
    }
}
void TypeToNameless_UniType(Type *&type, ContextIT &context) {
    UniType *uni_type = dynamic_cast <UniType*> (type);
    context.push_back({uni_type->ident_, nullptr});
    TypeToNameless(uni_type->type_, context);
    context.pop_back();
}
void TypeToNameless_FunType(Type *&type, ContextIT &context) {
    FunType *fun_type = dynamic_cast <FunType*> (type);
    TypeToNameless(fun_type->type_1, context);
    TypeToNameless(fun_type->type_2, context);
}
void TypeToNameless_TupleType(Type *&type, ContextIT &context) {
    TupleType *tuple_type = dynamic_cast <TupleType*> (type);
    for (ListType::iterator i = tuple_type->listtype_->begin(); i != tuple_type->listtype_->end(); i++)
        TypeToNameless(*i, context);
}
void TypeToNameless_RecordType(Type *&type, ContextIT &context) {
    RecordType *record_type = dynamic_cast <RecordType*> (type);
    for (ListRecordTypeField_::iterator i = record_type->listrecordtypefield__->begin(); i != record_type->listrecordtypefield__->end(); i++) {
        RecordTypeField *record_type_field = dynamic_cast <RecordTypeField*> (*i);
        TypeToNameless(record_type_field->type_, context);
    }
}
void TypeToNameless_VariantType(Type *&type, ContextIT &context) {
    VariantType *variant_type = dynamic_cast <VariantType*> (type);
    for (ListVariantTypeField_::iterator i = variant_type->listvarianttypefield__->begin(); i != variant_type->listvarianttypefield__->end(); i++) {
        VariantTypeField *variant_type_field = dynamic_cast <VariantTypeField*> (*i);
        TypeToNameless(variant_type_field->type_, context);
    }
}
void TypeToNameless_ArrayType(Type *&type, ContextIT &context) {
    ArrayType *array_type = dynamic_cast <ArrayType*> (type);
    TypeToNameless(array_type->type_, context);
}
void TypeToNameless_IntType(Type *&type, ContextIT &context) { }
void TypeToNameless_RealType(Type *&type, ContextIT &context) { }

