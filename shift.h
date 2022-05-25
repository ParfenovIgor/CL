void Shift                  (Expr*, int);

void Shift_ConstTrue        (Expr*, int);
void Shift_ConstFalse       (Expr*, int);
void Shift_ConstZero        (Expr*, int);
void Shift_If               (Expr*, int);
void Shift_Succ             (Expr*, int);
void Shift_Pred             (Expr*, int);
void Shift_IsZero           (Expr*, int);
void Shift_Var              (Expr*, int);
void Shift_Abstraction      (Expr*, int);
void Shift_Application      (Expr*, int);
void Shift_TypeAbstraction  (Expr*, int);
void Shift_TypeApplication  (Expr*, int);
void Shift_Fix              (Expr*, int);
void Shift_Where            (Expr*, int);
void Shift_Reference        (Expr*, int);
void Shift_Dereference      (Expr*, int);
void Shift_Tuple            (Expr*, int);
void Shift_TupleGet         (Expr*, int);
void Shift_Record           (Expr*, int);
void Shift_RecordGet        (Expr*, int);
void Shift_Variant          (Expr*, int);
void Shift_VariantCase      (Expr*, int);
void Shift_Array            (Expr*, int);
void Shift_ArrayGet         (Expr*, int);
void Shift_ArrayPush        (Expr*, int);
void Shift_ArrayPop         (Expr*, int);
void Shift_ArrayLen         (Expr*, int);

void Shift_ConstInt         (Expr*, int);
void Shift_ToInt            (Expr*, int);
void Shift_AddInt           (Expr*, int);
void Shift_SubInt           (Expr*, int);
void Shift_MulInt           (Expr*, int);
void Shift_DivInt           (Expr*, int);
void Shift_EquInt           (Expr*, int);
void Shift_LesInt           (Expr*, int);

void Shift_ConstReal        (Expr*, int);
void Shift_ToReal           (Expr*, int);
void Shift_AddReal          (Expr*, int);
void Shift_SubReal          (Expr*, int);
void Shift_MulReal          (Expr*, int);
void Shift_DivReal          (Expr*, int);
void Shift_EquReal          (Expr*, int);
void Shift_LesReal          (Expr*, int);

void Shift_ReadInt          (Expr*, int);
void Shift_ReadReal         (Expr*, int);
void Shift_WriteInt         (Expr*, int);
void Shift_WriteReal        (Expr*, int);

void Shift                  (Statement*, int);
void Shift_Definition       (Statement*, int);
void Shift_MoveAssignment   (Statement*, int);
void Shift_CopyAssignment   (Statement*, int);
void Shift_IfStatement      (Statement*, int);
void Shift_IfElseStatement  (Statement*, int);
void Shift_Loop             (Statement*, int);
void Shift_Break            (Statement*, int);
void Shift_Continue         (Statement*, int);
void Shift_Return           (Statement*, int);
void Shift_Eval             (Statement*, int);

void Shift                  (ListStatement*, int);

void Shift(Expr *expr, int shift) {
    if (dynamic_cast <ConstTrue*> (expr)) {
        Shift_ConstTrue(expr, shift); return;
    }
    if (dynamic_cast <ConstFalse*> (expr)) {
        Shift_ConstFalse(expr, shift); return;
    }
    if (dynamic_cast <ConstZero*> (expr)) {
        Shift_ConstZero(expr, shift); return;
    }
    if (dynamic_cast <If*> (expr)) {
        Shift_If(expr, shift); return;
    }
    if (dynamic_cast <Succ*> (expr)) {
        Shift_Succ(expr, shift); return;
    }
    if (dynamic_cast <Pred*> (expr)) {
        Shift_Pred(expr, shift); return;
    }
    if (dynamic_cast <IsZero*> (expr)) {
        Shift_IsZero(expr, shift); return;
    }
    if (dynamic_cast <Var*> (expr)) {
        Shift_Var(expr, shift); return;
    }
    if (dynamic_cast <Abstraction*> (expr)) {
        Shift_Abstraction(expr, shift); return;
    }
    if (dynamic_cast <Application*> (expr)) {
        Shift_Application(expr, shift); return;
    }
    if (dynamic_cast <TypeAbstraction*> (expr)) {
        Shift_TypeAbstraction(expr, shift); return;
    }
    if (dynamic_cast <TypeApplication*> (expr)) {
        Shift_TypeApplication(expr, shift); return;
    }
    if (dynamic_cast <Fix*> (expr)) {
        Shift_Fix(expr, shift); return;
    }
    if (dynamic_cast <Where*> (expr)) {
        Shift_Where(expr, shift); return;
    }
    if (dynamic_cast <Reference*> (expr)) {
        Shift_Reference(expr, shift); return;
    }
    if (dynamic_cast <Dereference*> (expr)) {
        Shift_Dereference(expr, shift); return;
    }
    if (dynamic_cast <Tuple*> (expr)) {
        Shift_Tuple(expr, shift); return;
    }
    if (dynamic_cast <Record*> (expr)) {
        Shift_Record(expr, shift); return;
    }
    if (dynamic_cast <Variant*> (expr)) {
        Shift_Variant(expr, shift); return;
    }
    if (dynamic_cast <VariantCase*> (expr)) {
        Shift_VariantCase(expr, shift); return;
    }
    if (dynamic_cast <Array*> (expr)) {
        Shift_Array(expr, shift); return;
    }
    if (dynamic_cast <ArrayGet*> (expr)) {
        Shift_ArrayGet(expr, shift); return;
    }
    if (dynamic_cast <ArrayPush*> (expr)) {
        Shift_ArrayPush(expr, shift); return;
    }
    if (dynamic_cast <ArrayPop*> (expr)) {
        Shift_ArrayPop(expr, shift); return;
    }
    if (dynamic_cast <ArrayLen*> (expr)) {
        Shift_ArrayLen(expr, shift); return;
    }
    
    if (dynamic_cast <ConstInt*> (expr)) {
        Shift_ConstInt(expr, shift); return;
    }
    if (dynamic_cast <ToInt*> (expr)) {
        Shift_ToInt(expr, shift); return;
    }
    if (dynamic_cast <AddInt*> (expr)) {
        Shift_AddInt(expr, shift); return;
    }
    if (dynamic_cast <SubInt*> (expr)) {
        Shift_SubInt(expr, shift); return;
    }
    if (dynamic_cast <MulInt*> (expr)) {
        Shift_MulInt(expr, shift); return;
    }
    if (dynamic_cast <DivInt*> (expr)) {
        Shift_DivInt(expr, shift); return;
    }
    if (dynamic_cast <EquInt*> (expr)) {
        Shift_EquInt(expr, shift); return;
    }
    if (dynamic_cast <LesInt*> (expr)) {
        Shift_LesInt(expr, shift); return;
    }
    
    if (dynamic_cast <ConstReal*> (expr)) {
        Shift_ConstReal(expr, shift); return;
    }
    if (dynamic_cast <ToReal*> (expr)) {
        Shift_ToReal(expr, shift); return;
    }
    if (dynamic_cast <AddReal*> (expr)) {
        Shift_AddReal(expr, shift); return;
    }
    if (dynamic_cast <SubReal*> (expr)) {
        Shift_SubReal(expr, shift); return;
    }
    if (dynamic_cast <MulReal*> (expr)) {
        Shift_MulReal(expr, shift); return;
    }
    if (dynamic_cast <DivReal*> (expr)) {
        Shift_DivReal(expr, shift); return;
    }
    if (dynamic_cast <EquReal*> (expr)) {
        Shift_EquReal(expr, shift); return;
    }
    if (dynamic_cast <LesReal*> (expr)) {
        Shift_LesReal(expr, shift); return;
    }
    
    if (dynamic_cast <ReadInt*> (expr)) {
        Shift_ReadInt(expr, shift); return;
    }
    if (dynamic_cast <ReadReal*> (expr)) {
        Shift_ReadReal(expr, shift); return;
    }
    if (dynamic_cast <WriteInt*> (expr)) {
        Shift_WriteInt(expr, shift); return;
    }
    if (dynamic_cast <WriteReal*> (expr)) {
        Shift_WriteReal(expr, shift); return;
    }
}

void Shift_ConstTrue(Expr *expr, int shift) { }
void Shift_ConstFalse(Expr *expr, int shift) { }
void Shift_ConstZero(Expr *expr, int shift) { }
void Shift_If(Expr *expr, int shift) {
    If *if_ = dynamic_cast <If*> (expr);
    Shift(if_->expr_1, shift);
    Shift(if_->expr_2, shift);
    Shift(if_->expr_3, shift);
}
void Shift_Succ(Expr *expr, int shift) {
    Succ *succ = dynamic_cast <Succ*> (expr);
    Shift(succ->expr_, shift);
}
void Shift_Pred(Expr *expr, int shift) {
    Pred *pred = dynamic_cast <Pred*> (expr);
    Shift(pred->expr_, shift);
}
void Shift_IsZero(Expr *expr, int shift) {
    IsZero *is_zero = dynamic_cast <IsZero*> (expr);
    Shift(is_zero->expr_, shift);
}
void Shift_Var(Expr *expr, int shift) {
    Var *var_ = dynamic_cast <Var*> (expr);
    if (stoi_nl(var_->ident_) >= shift) {
        var_->ident_ = itos_nl(stoi_nl(var_->ident_) + 1);
    }
}
void Shift_Abstraction(Expr *expr, int shift) {
    Abstraction *abstraction = dynamic_cast <Abstraction*> (expr);
    Shift(abstraction->liststatement_, shift + 1);
    Shift(abstraction->expr_, shift + 1);
}
void Shift_Application(Expr *expr, int shift) {
    Application *application = dynamic_cast <Application*> (expr);
    Shift(application->expr_1, shift);
    Shift(application->expr_2, shift);
}
void Shift_TypeAbstraction(Expr *expr, int shift) {
    TypeAbstraction *type_abstraction = dynamic_cast <TypeAbstraction*> (expr);
    Shift(type_abstraction->expr_, shift);
}
void Shift_TypeApplication(Expr *expr, int shift) {
    TypeApplication *type_application = dynamic_cast <TypeApplication*> (expr);
    Shift(type_application->expr_, shift);
}
void Shift_Fix(Expr *expr, int shift) {
    Fix *fix = dynamic_cast <Fix*> (expr);
    Shift(fix->expr_, shift);
}
void Shift_Where(Expr *expr, int shift) {
    Where *where = dynamic_cast <Where*> (expr);
    Shift(where->expr_1, shift + 1);
    Shift(where->expr_2, shift);
}
void Shift_Reference(Expr *expr, int shift) {
    Reference *reference = dynamic_cast <Reference*> (expr);
    Shift(reference->expr_, shift);
}
void Shift_Dereference(Expr *expr, int shift) {
    Dereference *dereference = dynamic_cast <Dereference*> (expr);
    Shift(dereference->expr_, shift);
}
void Shift_Tuple(Expr *expr, int shift) {
    Tuple *tuple = dynamic_cast <Tuple*> (expr);
    for (ListExpr::iterator i = tuple->listexpr_->begin() ; i != tuple->listexpr_->end() ; i++)
        Shift(*i, shift);
}
void Shift_TupleGet(Expr *expr, int shift) {
    TupleGet *tuple_get = dynamic_cast <TupleGet*> (expr);
    Shift(tuple_get->expr_, shift);
}
void Shift_Record(Expr *expr, int shift) {
    Record *record = dynamic_cast <Record*> (expr);
    for (ListRecordField_::iterator i = record->listrecordfield__->begin() ; i != record->listrecordfield__->end() ; i++) {
        RecordField *record_field = dynamic_cast <RecordField*> (*i);
        Shift(record_field->expr_, shift);
    }
}
void Shift_RecordGet(Expr *expr, int shift) {
    RecordGet *record_get = dynamic_cast <RecordGet*> (expr);
    Shift(record_get->expr_, shift);
}
void Shift_Variant(Expr *expr, int shift) {
    Variant *variant = dynamic_cast <Variant*> (expr);
    Shift(variant->expr_, shift);
}
void Shift_VariantCase(Expr *expr, int shift) {
    VariantCase *variant_case = dynamic_cast <VariantCase*> (expr);
    Shift(variant_case->expr_, shift);
    for (ListVariantField_::iterator i = variant_case->listvariantfield__->begin(); i != variant_case->listvariantfield__->end(); i++) {
        VariantField *variant_field = dynamic_cast <VariantField*> (*i);
        Shift(variant_field->expr_, shift + 1);
    }
}
void Shift_Array(Expr *expr, int shift) {
    Array *array = dynamic_cast <Array*> (expr);
    for (ListExpr::iterator i = array->listexpr_->begin(); i != array->listexpr_->end(); i++) {
        Shift(*i, shift);
    }
}
void Shift_ArrayGet(Expr *expr, int shift) {
    ArrayGet *array_get = dynamic_cast <ArrayGet*> (expr);
    Shift(array_get->expr_1, shift);
    Shift(array_get->expr_2, shift);
}
void Shift_ArrayPush(Expr *expr, int shift) {
    ArrayPush *array_push = dynamic_cast <ArrayPush*> (expr);
    Shift(array_push->expr_1, shift);
    Shift(array_push->expr_2, shift);
}
void Shift_ArrayPop(Expr *expr, int shift) {
    ArrayPop *array_pop = dynamic_cast <ArrayPop*> (expr);
    Shift(array_pop->expr_, shift);
}
void Shift_ArrayLen(Expr *expr, int shift) {
    ArrayLen *array_len = dynamic_cast <ArrayLen*> (expr);
    Shift(array_len->expr_, shift);
}

void Shift_ConstInt(Expr *expr, int shift) { }
void Shift_ToInt(Expr *expr, int shift) {
    ToInt *to_int = dynamic_cast <ToInt*> (expr);
    Shift(to_int->expr_, shift);
}
void Shift_AddInt(Expr *expr, int shift) {
    AddInt *add_int = dynamic_cast <AddInt*> (expr);
    Shift(add_int->expr_1, shift);
    Shift(add_int->expr_2, shift);
}
void Shift_SubInt(Expr *expr, int shift) {
    SubInt *sub_int = dynamic_cast <SubInt*> (expr);
    Shift(sub_int->expr_1, shift);
    Shift(sub_int->expr_2, shift);
}
void Shift_MulInt(Expr *expr, int shift) {
    MulInt *mul_int = dynamic_cast <MulInt*> (expr);
    Shift(mul_int->expr_1, shift);
    Shift(mul_int->expr_2, shift);
}
void Shift_DivInt(Expr *expr, int shift) {
    DivInt *div_int = dynamic_cast <DivInt*> (expr);
    Shift(div_int->expr_1, shift);
    Shift(div_int->expr_2, shift);
}
void Shift_EquInt(Expr *expr, int shift) {
    EquInt *equ_int = dynamic_cast <EquInt*> (expr);
    Shift(equ_int->expr_1, shift);
    Shift(equ_int->expr_2, shift);
}
void Shift_LesInt(Expr *expr, int shift) {
    LesInt *les_int = dynamic_cast <LesInt*> (expr);
    Shift(les_int->expr_1, shift);
    Shift(les_int->expr_2, shift);
}

void Shift_ConstReal(Expr *expr, int shift) { }
void Shift_ToReal(Expr *expr, int shift) {
    ToReal *to_real = dynamic_cast <ToReal*> (expr);
    Shift(to_real->expr_, shift);
}
void Shift_AddReal(Expr *expr, int shift) {
    AddReal *add_real = dynamic_cast <AddReal*> (expr);
    Shift(add_real->expr_1, shift);
    Shift(add_real->expr_2, shift);
}
void Shift_SubReal(Expr *expr, int shift) {
    SubReal *sub_real = dynamic_cast <SubReal*> (expr);
    Shift(sub_real->expr_1, shift);
    Shift(sub_real->expr_2, shift);
}
void Shift_MulReal(Expr *expr, int shift) {
    MulReal *mul_real = dynamic_cast <MulReal*> (expr);
    Shift(mul_real->expr_1, shift);
    Shift(mul_real->expr_2, shift);
}
void Shift_DivReal(Expr *expr, int shift) {
    DivReal *div_real = dynamic_cast <DivReal*> (expr);
    Shift(div_real->expr_1, shift);
    Shift(div_real->expr_2, shift);
}
void Shift_EquReal(Expr *expr, int shift) {
    EquReal *equ_real = dynamic_cast <EquReal*> (expr);
    Shift(equ_real->expr_1, shift);
    Shift(equ_real->expr_2, shift);
}
void Shift_LesReal(Expr *expr, int shift) {
    LesReal *les_real = dynamic_cast <LesReal*> (expr);
    Shift(les_real->expr_1, shift);
    Shift(les_real->expr_2, shift);
}

void Shift_ReadInt(Expr *expr, int shift) { }
void Shift_ReadReal(Expr *expr, int shift) { }
void Shift_WriteInt(Expr *expr, int shift) {
    WriteInt *write_int = dynamic_cast <WriteInt*> (expr);
    Shift(write_int->expr_, shift);
}
void Shift_WriteReal(Expr *expr, int shift) {
    WriteReal *write_real = dynamic_cast <WriteReal*> (expr);
    Shift(write_real->expr_, shift);
}

void Shift(Statement *expr, int shift) {
    if (dynamic_cast <Definition*> (expr)) {
        Shift_Definition(expr, shift); return;
    }
    if (dynamic_cast <MoveAssignment*> (expr)) {
        Shift_MoveAssignment(expr, shift); return;
    }
    if (dynamic_cast <CopyAssignment*> (expr)) {
        Shift_CopyAssignment(expr, shift); return;
    }
    if (dynamic_cast <IfStatement*> (expr)) {
        Shift_IfStatement(expr, shift); return;
    }
    if (dynamic_cast <IfElseStatement*> (expr)) {
        Shift_IfElseStatement(expr, shift); return;
    }
    if (dynamic_cast <Loop*> (expr)) {
        Shift_Loop(expr, shift); return;
    }
    if (dynamic_cast <Break*> (expr)) {
        Shift_Break(expr, shift); return;
    }
    if (dynamic_cast <Continue*> (expr)) {
        Shift_Continue(expr, shift); return;
    }
    if (dynamic_cast <Return*> (expr)) {
        Shift_Return(expr, shift); return;
    }
    if (dynamic_cast <Eval*> (expr)) {
        Shift_Eval(expr, shift); return;
    }
}

void Shift_Definition(Statement *expr, int shift) {
    Definition *definition = dynamic_cast <Definition*> (expr);
    Shift(definition->expr_, shift);
}
void Shift_MoveAssignment(Statement *expr, int shift) {
    MoveAssignment *move_assignment = dynamic_cast <MoveAssignment*> (expr);
    Shift(move_assignment->expr_1, shift);
    Shift(move_assignment->expr_2, shift);
}
void Shift_CopyAssignment(Statement *expr, int shift) {
    CopyAssignment *copy_assignment = dynamic_cast <CopyAssignment*> (expr);
    Shift(copy_assignment->expr_1, shift);
    Shift(copy_assignment->expr_2, shift);
}
void Shift_IfStatement(Statement *expr, int shift) {
    IfStatement *if_statement = dynamic_cast <IfStatement*> (expr);
    Shift(if_statement->expr_, shift);
    Shift(if_statement->liststatement_, shift);
}
void Shift_IfElseStatement(Statement *expr, int shift) {
    IfElseStatement *if_else_statement = dynamic_cast <IfElseStatement*> (expr);
    Shift(if_else_statement->expr_, shift);
    Shift(if_else_statement->liststatement_1, shift);
    Shift(if_else_statement->liststatement_2, shift);
}
void Shift_Loop(Statement *expr, int shift) {
    Loop *loop = dynamic_cast <Loop*> (expr);
    Shift(loop->liststatement_, shift);
}
void Shift_Break(Statement *expr, int shift) { }
void Shift_Continue(Statement *expr, int shift) { }
void Shift_Return(Statement *expr, int shift) { }
void Shift_Eval(Statement *expr, int shift) {
    Eval *eval = dynamic_cast <Eval*> (expr);
    Shift(eval->expr_, shift);
}

void Shift(ListStatement *list, int shift) {
    for (ListStatement::iterator i = list->begin(); i != list->end(); i++) {
        Shift(*i, shift);
    }
}

