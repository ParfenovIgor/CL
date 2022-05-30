void TypeShift              (Type*&, int);
void TypeShift_AutoType     (Type*&, int);
void TypeShift_BoolType     (Type*&, int);
void TypeShift_NatType      (Type*&, int);
void TypeShift_RefType      (Type*&, int);
void TypeShift_VarType      (Type*&, int);
void TypeShift_UniType      (Type*&, int);
void TypeShift_FunType      (Type*&, int);
void TypeShift_TupleType    (Type*&, int);
void TypeShift_RecordType   (Type*&, int);
void TypeShift_VariantType  (Type*&, int);
void TypeShift_ArrayType    (Type*&, int);
void TypeShift_IntType      (Type*&, int);
void TypeShift_RealType     (Type*&, int);

void TypeShift(Type *&expr, int shift) {
    if (dynamic_cast <AutoType*> (expr)) {
        TypeShift_AutoType(expr, shift); return;
    }
    if (dynamic_cast <BoolType*> (expr)) {
        TypeShift_BoolType(expr, shift); return;
    }
    if (dynamic_cast <NatType*> (expr)) {
        TypeShift_NatType(expr, shift); return;
    }
    if (dynamic_cast <RefType*> (expr)) {
        TypeShift_RefType(expr, shift); return;
    }
    if (dynamic_cast <VarType*> (expr)) {
        TypeShift_VarType(expr, shift); return;
    }
    if (dynamic_cast <UniType*> (expr)) {
        TypeShift_UniType(expr, shift); return;
    }
    if (dynamic_cast <FunType*> (expr)) {
        TypeShift_FunType(expr, shift); return;
    }
    if (dynamic_cast <TupleType*> (expr)) {
        TypeShift_TupleType(expr, shift); return;
    }
    if (dynamic_cast <RecordType*> (expr)) {
        TypeShift_RecordType(expr, shift); return;
    }
    if (dynamic_cast <VariantType*> (expr)) {
        TypeShift_VariantType(expr, shift); return;
    }
    if (dynamic_cast <ArrayType*> (expr)) {
        TypeShift_ArrayType(expr, shift); return;
    }
    if (dynamic_cast <IntType*> (expr)) {
        TypeShift_IntType(expr, shift); return;
    }
    if (dynamic_cast <RealType*> (expr)) {
        TypeShift_RealType(expr, shift); return;
    }
}

void TypeShift_AutoType(Type *&expr, int shift) { }
void TypeShift_BoolType(Type *&expr, int shift) { }
void TypeShift_NatType(Type *&expr, int shift) { }
void TypeShift_RefType(Type *&expr, int shift) {
    RefType *ref_type = dynamic_cast <RefType*> (expr);
    TypeShift(ref_type->type_, shift);
}
void TypeShift_VarType(Type *&expr, int shift) {
    VarType *var_type = dynamic_cast <VarType*> (expr);
    if (is_nl(var_type->ident_) && stoi_nl(var_type->ident_) >= shift) {
        var_type->ident_ = itos_nl(stoi_nl(var_type->ident_) + 1);
    }
}
void TypeShift_UniType(Type *&expr, int shift) {
    UniType *uni_type = dynamic_cast <UniType*> (expr);
    TypeShift(uni_type->type_, shift + 1);
}
void TypeShift_FunType(Type *&expr, int shift) {
    FunType *fun_type = dynamic_cast <FunType*> (expr);
    TypeShift(fun_type->type_1, shift);
    TypeShift(fun_type->type_2, shift);
}
void TypeShift_TupleType(Type *&expr, int shift) {
    TupleType *tuple_type = dynamic_cast <TupleType*> (expr);
    for (ListType::iterator i = tuple_type->listtype_->begin(); i != tuple_type->listtype_->end(); i++)
        TypeShift(*i, shift);
}
void TypeShift_RecordType(Type *&expr, int shift) {
    RecordType *record_type = dynamic_cast <RecordType*> (expr);
    for (ListRecordTypeField_::iterator i = record_type->listrecordtypefield__->begin(); i != record_type->listrecordtypefield__->end(); i++) {
        RecordTypeField *record_type_field = dynamic_cast <RecordTypeField*> (*i);
        TypeShift(record_type_field->type_, shift);
    }
}
void TypeShift_VariantType(Type *&expr, int shift) {
    VariantType *variant_type = dynamic_cast <VariantType*> (expr);
    for (ListVariantTypeField_::iterator i = variant_type->listvarianttypefield__->begin(); i != variant_type->listvarianttypefield__->end(); i++) {
        VariantTypeField *variant_type_field = dynamic_cast <VariantTypeField*> (*i);
        TypeShift(variant_type_field->type_, shift);
    }
}
void TypeShift_ArrayType(Type *&expr, int shift) {
    ArrayType *array_type = dynamic_cast <ArrayType*> (expr);
    TypeShift(array_type->type_, shift);
}
void TypeShift_IntType(Type *&expr, int shift) { }
void TypeShift_RealType(Type *&expr, int shift) { }

