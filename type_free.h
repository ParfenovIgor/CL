void TypeFree               (Type*&, Ident&, bool&);
void TypeFree_AutoType      (Type*&, Ident&, bool&);
void TypeFree_BoolType      (Type*&, Ident&, bool&);
void TypeFree_NatType       (Type*&, Ident&, bool&);
void TypeFree_RefType       (Type*&, Ident&, bool&);
void TypeFree_VarType       (Type*&, Ident&, bool&);
void TypeFree_UniType       (Type*&, Ident&, bool&);
void TypeFree_FunType       (Type*&, Ident&, bool&);
void TypeFree_TupleType     (Type*&, Ident&, bool&);
void TypeFree_RecordType    (Type*&, Ident&, bool&);
void TypeFree_VariantType   (Type*&, Ident&, bool&);
void TypeFree_IntType       (Type*&, Ident&, bool&);
void TypeFree_RealType      (Type*&, Ident&, bool&);

void TypeFree(Type *&expr, Ident &ident, bool &result) {
    if (dynamic_cast <AutoType*> (expr)) {
        TypeFree_AutoType(expr, ident, result); return;
    }
    if (dynamic_cast <BoolType*> (expr)) {
        TypeFree_BoolType(expr, ident, result); return;
    }
    if (dynamic_cast <NatType*> (expr)) {
        TypeFree_NatType(expr, ident, result); return;
    }
    if (dynamic_cast <RefType*> (expr)) {
        TypeFree_RefType(expr, ident, result); return;
    }
    if (dynamic_cast <VarType*> (expr)) {
        TypeFree_VarType(expr, ident, result); return;
    }
    if (dynamic_cast <UniType*> (expr)) {
        TypeFree_UniType(expr, ident, result); return;
    }
    if (dynamic_cast <FunType*> (expr)) {
        TypeFree_FunType(expr, ident, result); return;
    }
    if (dynamic_cast <TupleType*> (expr)) {
        TypeFree_TupleType(expr, ident, result); return;
    }
    if (dynamic_cast <RecordType*> (expr)) {
        TypeFree_RecordType(expr, ident, result); return;
    }
    if (dynamic_cast <VariantType*> (expr)) {
        TypeFree_VariantType(expr, ident, result); return;
    }
    if (dynamic_cast <IntType*> (expr)) {
        TypeFree_IntType(expr, ident, result); return;
    }
    if (dynamic_cast <RealType*> (expr)) {
        TypeFree_RealType(expr, ident, result); return;
    }
}

void TypeFree_AutoType(Type *&expr, Ident &ident, bool &result) { }
void TypeFree_BoolType(Type *&expr, Ident &ident, bool &result) { }
void TypeFree_NatType(Type *&expr, Ident &ident, bool &result) { }
void TypeFree_RefType(Type *&expr, Ident &ident, bool &result) {
    RefType *ref_type = dynamic_cast <RefType*> (expr);
    TypeFree(ref_type->type_, ident, result);
}
void TypeFree_VarType(Type *&expr, Ident &ident, bool &result) {
    VarType *var_type = dynamic_cast <VarType*> (expr);
    if (var_type->ident_ == ident) {
        result = false;
    }
}
void TypeFree_UniType(Type *&expr, Ident &ident, bool &result) {
    UniType *uni_type = dynamic_cast <UniType*> (expr);
    if (uni_type->ident_ != ident) {
        TypeFree(uni_type->type_, ident, result);
    }
}
void TypeFree_FunType(Type *&expr, Ident &ident, bool &result) {
    FunType *fun_type = dynamic_cast <FunType*> (expr);
    TypeFree(fun_type->type_1, ident, result);
    TypeFree(fun_type->type_2, ident, result);
}
void TypeFree_TupleType(Type *&expr, Ident &ident, bool &result) {
    TupleType *tuple_type = dynamic_cast <TupleType*> (expr);
    for (ListType::iterator i = tuple_type->listtype_->begin() ; i != tuple_type->listtype_->end(); i++)
        TypeFree(*i, ident, result);
}
void TypeFree_RecordType(Type *&expr, Ident &ident, bool &result) {
    RecordType *record_type = dynamic_cast <RecordType*> (expr);
    for (ListRecordTypeField_::iterator i = record_type->listrecordtypefield__->begin() ; i != record_type->listrecordtypefield__->end(); i++) {
        RecordTypeField *record_type_field = dynamic_cast <RecordTypeField*> (*i);
        TypeFree(record_type_field->type_, ident, result);
    }
}
void TypeFree_VariantType(Type *&expr, Ident &ident, bool &result) {
    VariantType *variant_type = dynamic_cast <VariantType*> (expr);
    for (ListVariantTypeField_::iterator i = variant_type->listvarianttypefield__->begin() ; i != variant_type->listvarianttypefield__->end(); i++) {
        VariantTypeField *variant_type_field = dynamic_cast <VariantTypeField*> (*i);
        TypeFree(variant_type_field->type_, ident, result);
    }
}
void TypeFree_IntType(Type *&expr, Ident &ident, bool &result) { }
void TypeFree_RealType(Type *&expr, Ident &ident, bool &result) { }

