void TypeSubstitute             (Type*&, Ident&, Type*);
void TypeSubstitute_AutoType    (Type*&, Ident&, Type*);
void TypeSubstitute_BoolType    (Type*&, Ident&, Type*);
void TypeSubstitute_NatType     (Type*&, Ident&, Type*);
void TypeSubstitute_RefType     (Type*&, Ident&, Type*);
void TypeSubstitute_VarType     (Type*&, Ident&, Type*);
void TypeSubstitute_UniType     (Type*&, Ident&, Type*);
void TypeSubstitute_FunType     (Type*&, Ident&, Type*);
void TypeSubstitute_TupleType   (Type*&, Ident&, Type*);
void TypeSubstitute_RecordType  (Type*&, Ident&, Type*);
void TypeSubstitute_VariantType (Type*&, Ident&, Type*);
void TypeSubstitute_IntType     (Type*&, Ident&, Type*);
void TypeSubstitute_RealType    (Type*&, Ident&, Type*);

void TypeSubstitute(Type *&expr, Ident &ident, Type *value) {
    if (dynamic_cast <AutoType*> (expr)) {
        TypeSubstitute_AutoType(expr, ident, value); return;
    }
    if (dynamic_cast <BoolType*> (expr)) {
        TypeSubstitute_BoolType(expr, ident, value); return;
    }
    if (dynamic_cast <NatType*> (expr)) {
        TypeSubstitute_NatType(expr, ident, value); return;
    }
    if (dynamic_cast <RefType*> (expr)) {
        TypeSubstitute_RefType(expr, ident, value); return;
    }
    if (dynamic_cast <VarType*> (expr)) {
        TypeSubstitute_VarType(expr, ident, value); return;
    }
    if (dynamic_cast <UniType*> (expr)) {
        TypeSubstitute_UniType(expr, ident, value); return;
    }
    if (dynamic_cast <FunType*> (expr)) {
        TypeSubstitute_FunType(expr, ident, value); return;
    }
    if (dynamic_cast <TupleType*> (expr)) {
        TypeSubstitute_TupleType(expr, ident, value); return;
    }
    if (dynamic_cast <RecordType*> (expr)) {
        TypeSubstitute_RecordType(expr, ident, value); return;
    }
    if (dynamic_cast <VariantType*> (expr)) {
        TypeSubstitute_VariantType(expr, ident, value); return;
    }
    if (dynamic_cast <IntType*> (expr)) {
        TypeSubstitute_IntType(expr, ident, value); return;
    }
    if (dynamic_cast <RealType*> (expr)) {
        TypeSubstitute_RealType(expr, ident, value); return;
    }
}

void TypeSubstitute_AutoType(Type *&expr, Ident &ident, Type *value) { }
void TypeSubstitute_BoolType(Type *&expr, Ident &ident, Type *value) { }
void TypeSubstitute_NatType(Type *&expr, Ident &ident, Type *value) { }
void TypeSubstitute_RefType(Type *&expr, Ident &ident, Type *value) {
    RefType *ref_type = dynamic_cast <RefType*> (expr);
    TypeSubstitute(ref_type->type_, ident, value);
}
void TypeSubstitute_VarType(Type *&expr, Ident &ident, Type *value) {
    VarType *var_type = dynamic_cast <VarType*> (expr);
    if (var_type->ident_ == ident) {
        Type *t_ = value->clone();
        delete expr;
        expr = t_;
    }
}
void TypeSubstitute_UniType(Type *&expr, Ident &ident, Type *value) {
    UniType *uni_type = dynamic_cast <UniType*> (expr);
    Type *t_ = value->clone();
    TypeShift(t_, 0);
    ident = itos_nl(stoi_nl(ident) + 1);
    TypeSubstitute(uni_type->type_, ident, value);
    ident = itos_nl(stoi_nl(ident) - 1);
}
void TypeSubstitute_FunType(Type *&expr, Ident &ident, Type *value) {
    FunType *fun_type = dynamic_cast <FunType*> (expr);
    TypeSubstitute(fun_type->type_1, ident, value);
    TypeSubstitute(fun_type->type_2, ident, value);
}
void TypeSubstitute_TupleType(Type *&expr, Ident &ident, Type *value) {
    TupleType *tuple_type = dynamic_cast <TupleType*> (expr);
    for (ListType::iterator i = tuple_type->listtype_->begin() ; i != tuple_type->listtype_->end(); i++)
        TypeSubstitute(*i, ident, value);
}
void TypeSubstitute_RecordType(Type *&expr, Ident &ident, Type *value) {
    RecordType *record_type = dynamic_cast <RecordType*> (expr);
    for (ListRecordTypeField_::iterator i = record_type->listrecordtypefield__->begin() ; i != record_type->listrecordtypefield__->end(); i++) {
        RecordTypeField *record_type_field = dynamic_cast <RecordTypeField*> (*i);
        TypeSubstitute(record_type_field->type_, ident, value);
    }
}
void TypeSubstitute_VariantType(Type *&expr, Ident &ident, Type *value) {
    VariantType *variant_type = dynamic_cast <VariantType*> (expr);
    for (ListVariantTypeField_::iterator i = variant_type->listvarianttypefield__->begin() ; i != variant_type->listvarianttypefield__->end(); i++) {
        VariantTypeField *variant_type_field = dynamic_cast <VariantTypeField*> (*i);
        TypeSubstitute(variant_type_field->type_, ident, value);
    }
}
void TypeSubstitute_IntType(Type *&expr, Ident &ident, Type *value) { }
void TypeSubstitute_RealType(Type *&expr, Ident &ident, Type *value) { }

