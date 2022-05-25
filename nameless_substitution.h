void Substitute(Expr*&, Ident&, Expr*);

void Substitute_ConstTrue       (Expr*&, Ident&, Expr*);
void Substitute_ConstFalse      (Expr*&, Ident&, Expr*);
void Substitute_ConstZero       (Expr*&, Ident&, Expr*);
void Substitute_If              (Expr*&, Ident&, Expr*);
void Substitute_Succ            (Expr*&, Ident&, Expr*);
void Substitute_Pred            (Expr*&, Ident&, Expr*);
void Substitute_IsZero          (Expr*&, Ident&, Expr*);
void Substitute_Var             (Expr*&, Ident&, Expr*);
void Substitute_Abstraction     (Expr*&, Ident&, Expr*);
void Substitute_Application     (Expr*&, Ident&, Expr*);
void Substitute_TypeAbstraction (Expr*&, Ident&, Expr*);
void Substitute_TypeApplication (Expr*&, Ident&, Expr*);
void Substitute_Fix             (Expr*&, Ident&, Expr*);
void Substitute_Where           (Expr*&, Ident&, Expr*);
void Substitute_Reference       (Expr*&, Ident&, Expr*);
void Substitute_Dereference     (Expr*&, Ident&, Expr*);
void Substitute_Tuple           (Expr*&, Ident&, Expr*);
void Substitute_TupleGet        (Expr*&, Ident&, Expr*);
void Substitute_Record          (Expr*&, Ident&, Expr*);
void Substitute_RecordGet       (Expr*&, Ident&, Expr*);
void Substitute_Variant         (Expr*&, Ident&, Expr*);
void Substitute_VariantCase     (Expr*&, Ident&, Expr*);
void Substitute_Array           (Expr*&, Ident&, Expr*);
void Substitute_ArrayGet        (Expr*&, Ident&, Expr*);
void Substitute_ArrayPush       (Expr*&, Ident&, Expr*);
void Substitute_ArrayPop        (Expr*&, Ident&, Expr*);
void Substitute_ArrayLen        (Expr*&, Ident&, Expr*);

void Substitute_ConstInt        (Expr*&, Ident&, Expr*);
void Substitute_ToInt           (Expr*&, Ident&, Expr*);
void Substitute_AddInt          (Expr*&, Ident&, Expr*);
void Substitute_SubInt          (Expr*&, Ident&, Expr*);
void Substitute_MulInt          (Expr*&, Ident&, Expr*);
void Substitute_DivInt          (Expr*&, Ident&, Expr*);
void Substitute_EquInt          (Expr*&, Ident&, Expr*);
void Substitute_LesInt          (Expr*&, Ident&, Expr*);

void Substitute_ConstReal       (Expr*&, Ident&, Expr*);
void Substitute_ToReal          (Expr*&, Ident&, Expr*);
void Substitute_AddReal         (Expr*&, Ident&, Expr*);
void Substitute_SubReal         (Expr*&, Ident&, Expr*);
void Substitute_MulReal         (Expr*&, Ident&, Expr*);
void Substitute_DivReal         (Expr*&, Ident&, Expr*);
void Substitute_EquReal         (Expr*&, Ident&, Expr*);
void Substitute_LesReal         (Expr*&, Ident&, Expr*);

void Substitute_ReadInt         (Expr*&, Ident&, Expr*);
void Substitute_ReadReal        (Expr*&, Ident&, Expr*);
void Substitute_WriteInt        (Expr*&, Ident&, Expr*);
void Substitute_WriteReal       (Expr*&, Ident&, Expr*);

void Substitute                 (Statement*&, Ident&, Expr*);
void Substitute_Definition      (Statement*&, Ident&, Expr*);
void Substitute_MoveAssignment  (Statement*&, Ident&, Expr*);
void Substitute_CopyAssignment  (Statement*&, Ident&, Expr*);
void Substitute_IfStatement     (Statement*&, Ident&, Expr*);
void Substitute_IfElseStatement (Statement*&, Ident&, Expr*);
void Substitute_Loop            (Statement*&, Ident&, Expr*);
void Substitute_Break           (Statement*&, Ident&, Expr*);
void Substitute_Continue        (Statement*&, Ident&, Expr*);
void Substitute_Return          (Statement*&, Ident&, Expr*);
void Substitute_Eval            (Statement*&, Ident&, Expr*);

void Substitute                 (ListStatement*&, Ident&, Expr*);

void Substitute(Expr *&expr, Ident &ident, Expr *value) {
    if (dynamic_cast <ConstTrue*> (expr)) {
        Substitute_ConstTrue(expr, ident, value); return;
    }
    if (dynamic_cast <ConstFalse*> (expr)) {
        Substitute_ConstFalse(expr, ident, value); return;
    }
    if (dynamic_cast <ConstZero*> (expr)) {
        Substitute_ConstZero(expr, ident, value); return;
    }
    if (dynamic_cast <If*> (expr)) {
        Substitute_If(expr, ident, value); return;
    }
    if (dynamic_cast <Succ*> (expr)) {
        Substitute_Succ(expr, ident, value); return;
    }
    if (dynamic_cast <Pred*> (expr)) {
        Substitute_Pred(expr, ident, value); return;
    }
    if (dynamic_cast <IsZero*> (expr)) {
        Substitute_IsZero(expr, ident, value); return;
    }
    if (dynamic_cast <Var*> (expr)) {
        Substitute_Var(expr, ident, value); return;
    }
    if (dynamic_cast <Abstraction*> (expr)) {
        Substitute_Abstraction(expr, ident, value); return;
    }
    if (dynamic_cast <Application*> (expr)) {
        Substitute_Application(expr, ident, value); return;
    }
    if (dynamic_cast <TypeAbstraction*> (expr)) {
        Substitute_TypeAbstraction(expr, ident, value); return;
    }
    if (dynamic_cast <TypeApplication*> (expr)) {
        Substitute_TypeApplication(expr, ident, value); return;
    }
    if (dynamic_cast <Fix*> (expr)) {
        Substitute_Fix(expr, ident, value); return;
    }
    if (dynamic_cast <Where*> (expr)) {
        Substitute_Where(expr, ident, value); return;
    }
    if (dynamic_cast <Reference*> (expr)) {
        Substitute_Reference(expr, ident, value); return;
    }
    if (dynamic_cast <Dereference*> (expr)) {
        Substitute_Dereference(expr, ident, value); return;
    }
    if (dynamic_cast <Tuple*> (expr)) {
        Substitute_Tuple(expr, ident, value); return;
    }
    if (dynamic_cast <TupleGet*> (expr)) {
        Substitute_TupleGet(expr, ident, value); return;
    }
    if (dynamic_cast <Variant*> (expr)) {
        Substitute_Variant(expr, ident, value); return;
    }
    if (dynamic_cast <VariantCase*> (expr)) {
        Substitute_VariantCase(expr, ident, value); return;
    }
    if (dynamic_cast <Array*> (expr)) {
        Substitute_Array(expr, ident, value); return;
    }
    if (dynamic_cast <ArrayGet*> (expr)) {
        Substitute_ArrayGet(expr, ident, value); return;
    }
    if (dynamic_cast <ArrayPush*> (expr)) {
        Substitute_ArrayPush(expr, ident, value); return;
    }
    if (dynamic_cast <ArrayPop*> (expr)) {
        Substitute_ArrayPop(expr, ident, value); return;
    }
    if (dynamic_cast <ArrayLen*> (expr)) {
        Substitute_ArrayLen(expr, ident, value); return;
    }

    if (dynamic_cast <ConstInt*> (expr)) {
        Substitute_ConstInt(expr, ident, value); return;
    }
    if (dynamic_cast <ToInt*> (expr)) {
        Substitute_ToInt(expr, ident, value); return;
    }
    if (dynamic_cast <AddInt*> (expr)) {
        Substitute_AddInt(expr, ident, value); return;
    }
    if (dynamic_cast <SubInt*> (expr)) {
        Substitute_SubInt(expr, ident, value); return;
    }
    if (dynamic_cast <MulInt*> (expr)) {
        Substitute_MulInt(expr, ident, value); return;
    }
    if (dynamic_cast <DivInt*> (expr)) {
        Substitute_DivInt(expr, ident, value); return;
    }
    if (dynamic_cast <EquInt*> (expr)) {
        Substitute_EquInt(expr, ident, value); return;
    }
    if (dynamic_cast <LesInt*> (expr)) {
        Substitute_LesInt(expr, ident, value); return;
    }

    if (dynamic_cast <ConstReal*> (expr)) {
        Substitute_ConstReal(expr, ident, value); return;
    }
    if (dynamic_cast <ToReal*> (expr)) {
        Substitute_ToReal(expr, ident, value); return;
    }
    if (dynamic_cast <AddReal*> (expr)) {
        Substitute_AddReal(expr, ident, value); return;
    }
    if (dynamic_cast <SubReal*> (expr)) {
        Substitute_SubReal(expr, ident, value); return;
    }
    if (dynamic_cast <MulReal*> (expr)) {
        Substitute_MulReal(expr, ident, value); return;
    }
    if (dynamic_cast <DivReal*> (expr)) {
        Substitute_DivReal(expr, ident, value); return;
    }
    if (dynamic_cast <EquReal*> (expr)) {
        Substitute_EquReal(expr, ident, value); return;
    }
    if (dynamic_cast <LesReal*> (expr)) {
        Substitute_LesReal(expr, ident, value); return;
    }

    if (dynamic_cast <ReadInt*> (expr)) {
        Substitute_ReadInt(expr, ident, value); return;
    }
    if (dynamic_cast <ReadReal*> (expr)) {
        Substitute_ReadReal(expr, ident, value); return;
    }
    if (dynamic_cast <WriteInt*> (expr)) {
        Substitute_WriteInt(expr, ident, value); return;
    }
    if (dynamic_cast <WriteReal*> (expr)) {
        Substitute_WriteReal(expr, ident, value); return;
    }
}

void Substitute_ConstTrue(Expr *&expr, Ident &ident, Expr *value) { }
void Substitute_ConstFalse(Expr *&expr, Ident &ident, Expr *value) { }
void Substitute_ConstZero(Expr *&expr, Ident &ident, Expr *value) { }
void Substitute_If(Expr *&expr, Ident &ident, Expr *value) {
    If *if_ = dynamic_cast <If*> (expr);
    Substitute(if_->expr_1, ident, value);
    Substitute(if_->expr_2, ident, value);
    Substitute(if_->expr_3, ident, value);
}
void Substitute_Succ(Expr *&expr, Ident &ident, Expr *value) {
    Succ *succ = dynamic_cast <Succ*> (expr);
    Substitute(succ->expr_, ident, value);
}
void Substitute_Pred(Expr *&expr, Ident &ident, Expr *value) {
    Pred *pred = dynamic_cast <Pred*> (expr);
    Substitute(pred->expr_, ident, value);
}
void Substitute_IsZero(Expr *&expr, Ident &ident, Expr *value) {
    IsZero *is_zero = dynamic_cast <IsZero*> (expr);
    Substitute(is_zero->expr_, ident, value);
}
void Substitute_Var(Expr *&expr, Ident &ident, Expr *value) {
    Var *var_ = dynamic_cast <Var*> (expr);
    if (var_->ident_ == ident) {
        Expr *result = value->clone();
        delete expr;
        expr = result;
    }
}
void Substitute_Abstraction(Expr *&expr, Ident &ident, Expr *value) {
    Abstraction *abstraction = dynamic_cast <Abstraction*> (expr);
    Expr *expr_ = value->clone();
    Shift(expr_, 0);
    ident = itos_nl(stoi_nl(ident) + 1);
    Substitute(abstraction->liststatement_, ident, expr_);
    Substitute(abstraction->expr_, ident, expr_);
    ident = itos_nl(stoi_nl(ident) - 1);
    delete expr_;
}
void Substitute_Application(Expr *&expr, Ident &ident, Expr *value) {
    Application *application = dynamic_cast <Application*> (expr);
    Substitute(application->expr_1, ident, value);
    Substitute(application->expr_2, ident, value);
}
void Substitute_TypeAbstraction(Expr *&expr, Ident &ident, Expr *value) {
    TypeAbstraction *type_abstraction = dynamic_cast <TypeAbstraction*> (expr);
    Substitute(type_abstraction->expr_, ident, value);
}
void Substitute_TypeApplication(Expr *&expr, Ident &ident, Expr *value) {
    TypeApplication *type_application = dynamic_cast <TypeApplication*> (expr);
    Substitute(type_application->expr_, ident, value);
}
void Substitute_Fix(Expr *&expr, Ident &ident, Expr *value) {
    Fix *fix = dynamic_cast <Fix*> (expr);
    Substitute(fix->expr_, ident, value);
}
void Substitute_Where(Expr *&expr, Ident &ident, Expr *value) {
    Where *where = dynamic_cast <Where*> (expr);
    Expr *expr_ = where->expr_1->clone();
    Shift(expr_, 0);
    ident = itos_nl(stoi_nl(ident) + 1);
    Substitute(where->expr_1, ident, expr_);
    ident = itos_nl(stoi_nl(ident) - 1);
    delete expr_;
    Substitute(where->expr_2, ident, value);
}
void Substitute_Reference(Expr *&expr, Ident &ident, Expr *value) {
    Reference *reference = dynamic_cast <Reference*> (expr);
    Substitute(reference->expr_, ident, value);
}
void Substitute_Dereference(Expr *&expr, Ident &ident, Expr *value) {
    Dereference *dereference = dynamic_cast <Dereference*> (expr);
    Substitute(dereference->expr_, ident, value);
}
void Substitute_Tuple(Expr *&expr, Ident &ident, Expr *value) {
    Tuple *tuple = dynamic_cast <Tuple*> (expr);
    for (ListExpr::iterator i = tuple->listexpr_->begin() ; i != tuple->listexpr_->end() ; i++)
        Substitute(*i, ident, value);
}
void Substitute_TupleGet(Expr *&expr, Ident &ident, Expr *value) {
    TupleGet *tuple_get = dynamic_cast <TupleGet*> (expr);
    Substitute(tuple_get->expr_, ident, value);
}
void Substitute_Record(Expr *&expr, Ident &ident, Expr *value) {
    Record *record = dynamic_cast <Record*> (expr);
    for (ListRecordField_::iterator i = record->listrecordfield__->begin() ; i != record->listrecordfield__->end() ; i++) {
        RecordField *record_field = dynamic_cast <RecordField*> (*i);
        Substitute(record_field->expr_, ident, value);
    }
}
void Substitute_RecordGet(Expr *&expr, Ident &ident, Expr *value) {
    RecordGet *record_get = dynamic_cast <RecordGet*> (expr);
    Substitute(record_get->expr_, ident, value);
}
void Substitute_Variant(Expr *&expr, Ident &ident, Expr *value) {
    Variant *variant = dynamic_cast <Variant*> (expr);
    Substitute(variant->expr_, ident, value);
}
void Substitute_VariantCase(Expr *&expr, Ident &ident, Expr *value) {
    VariantCase *variant_case = dynamic_cast <VariantCase*> (expr);
    Substitute(variant_case->expr_, ident, value);
    Expr *expr_ = value->clone();
    Shift(expr_, 0);
    ident = itos_nl(stoi_nl(ident) + 1);
    for (ListVariantField_::iterator i = variant_case->listvariantfield__->begin(); i != variant_case->listvariantfield__->end(); i++) {
        VariantField *variant_field = dynamic_cast <VariantField*> (*i);
        Substitute(variant_field->expr_, ident, expr_);
    }
    ident = itos_nl(stoi_nl(ident) - 1);
    delete expr_;
}
void Substitute_Array(Expr *&expr, Ident &ident, Expr *value) {
    Array *array = dynamic_cast <Array*> (expr);
    for (ListExpr::iterator i = array->listexpr_->begin() ; i != array->listexpr_->end() ; i++) {
        Substitute(*i, ident, value);
    }
}
void Substitute_ArrayGet(Expr *&expr, Ident &ident, Expr *value) {
    ArrayGet *array_get = dynamic_cast <ArrayGet*> (expr);
    Substitute(array_get->expr_1, ident, value);
    Substitute(array_get->expr_2, ident, value);
}
void Substitute_ArrayPush(Expr *&expr, Ident &ident, Expr *value) {
    ArrayPush *array_push = dynamic_cast <ArrayPush*> (expr);
    Substitute(array_push->expr_1, ident, value);
    Substitute(array_push->expr_2, ident, value);
}
void Substitute_ArrayPop(Expr *&expr, Ident &ident, Expr *value) {
    ArrayPop *array_pop = dynamic_cast <ArrayPop*> (expr);
    Substitute(array_pop->expr_, ident, value);
}
void Substitute_ArrayLen(Expr *&expr, Ident &ident, Expr *value) {
    ArrayLen *array_len = dynamic_cast <ArrayLen*> (expr);
    Substitute(array_len->expr_, ident, value);
}

void Substitute_ConstInt(Expr *&expr, Ident &ident, Expr *value) { }
void Substitute_ToInt(Expr *&expr, Ident &ident, Expr *value) {
    ToInt *to_int = dynamic_cast <ToInt*> (expr);
    Substitute(to_int->expr_, ident, value);
}
void Substitute_AddInt(Expr *&expr, Ident &ident, Expr *value) {
    AddInt *add_int = dynamic_cast <AddInt*> (expr);
    Substitute(add_int->expr_1, ident, value);
    Substitute(add_int->expr_2, ident, value);
}
void Substitute_SubInt(Expr *&expr, Ident &ident, Expr *value) {
    SubInt *sub_int = dynamic_cast <SubInt*> (expr);
    Substitute(sub_int->expr_1, ident, value);
    Substitute(sub_int->expr_2, ident, value);
}
void Substitute_MulInt(Expr *&expr, Ident &ident, Expr *value) {
    MulInt *mul_int = dynamic_cast <MulInt*> (expr);
    Substitute(mul_int->expr_1, ident, value);
    Substitute(mul_int->expr_2, ident, value);
}
void Substitute_DivInt(Expr *&expr, Ident &ident, Expr *value) {
    DivInt *div_int = dynamic_cast <DivInt*> (expr);
    Substitute(div_int->expr_1, ident, value);
    Substitute(div_int->expr_2, ident, value);
}
void Substitute_EquInt(Expr *&expr, Ident &ident, Expr *value) {
    EquInt *equ_int = dynamic_cast <EquInt*> (expr);
    Substitute(equ_int->expr_1, ident, value);
    Substitute(equ_int->expr_2, ident, value);
}
void Substitute_LesInt(Expr *&expr, Ident &ident, Expr *value) {
    LesInt *les_int = dynamic_cast <LesInt*> (expr);
    Substitute(les_int->expr_1, ident, value);
    Substitute(les_int->expr_2, ident, value);
}

void Substitute_ConstReal(Expr *&expr, Ident &ident, Expr *value) { }
void Substitute_ToReal(Expr *&expr, Ident &ident, Expr *value) {
    ToReal *to_real = dynamic_cast <ToReal*> (expr);
    Substitute(to_real->expr_, ident, value);
}
void Substitute_AddReal(Expr *&expr, Ident &ident, Expr *value) {
    AddReal *add_real = dynamic_cast <AddReal*> (expr);
    Substitute(add_real->expr_1, ident, value);
    Substitute(add_real->expr_2, ident, value);
}
void Substitute_SubReal(Expr *&expr, Ident &ident, Expr *value) {
    SubReal *sub_real = dynamic_cast <SubReal*> (expr);
    Substitute(sub_real->expr_1, ident, value);
    Substitute(sub_real->expr_2, ident, value);
}
void Substitute_MulReal(Expr *&expr, Ident &ident, Expr *value) {
    MulReal *mul_real = dynamic_cast <MulReal*> (expr);
    Substitute(mul_real->expr_1, ident, value);
    Substitute(mul_real->expr_2, ident, value);
}
void Substitute_DivReal(Expr *&expr, Ident &ident, Expr *value) {
    DivReal *div_real = dynamic_cast <DivReal*> (expr);
    Substitute(div_real->expr_1, ident, value);
    Substitute(div_real->expr_2, ident, value);
}
void Substitute_EquReal(Expr *&expr, Ident &ident, Expr *value) {
    EquReal *equ_real = dynamic_cast <EquReal*> (expr);
    Substitute(equ_real->expr_1, ident, value);
    Substitute(equ_real->expr_2, ident, value);
}
void Substitute_LesReal(Expr *&expr, Ident &ident, Expr *value) {
    LesReal *les_real = dynamic_cast <LesReal*> (expr);
    Substitute(les_real->expr_1, ident, value);
    Substitute(les_real->expr_2, ident, value);
}

void Substitute_ReadInt(Expr *&expr, Ident &ident, Expr *value) { }
void Substitute_ReadReal(Expr *&expr, Ident &ident, Expr *value) { }
void Substitute_WriteInt(Expr *&expr, Ident &ident, Expr *value) {
    WriteInt *write_int = dynamic_cast <WriteInt*> (expr);
    Substitute(write_int->expr_, ident, value);
}
void Substitute_WriteReal(Expr *&expr, Ident &ident, Expr *value) {
    WriteReal *write_real = dynamic_cast <WriteReal*> (expr);
    Substitute(write_real->expr_, ident, value);
}

void Substitute(Statement *&expr, Ident &ident, Expr *value) {
    if (dynamic_cast <Definition*> (expr)) {
        Substitute_Definition(expr, ident, value); return;
    }
    if (dynamic_cast <MoveAssignment*> (expr)) {
        Substitute_MoveAssignment(expr, ident, value); return;
    }
    if (dynamic_cast <CopyAssignment*> (expr)) {
        Substitute_CopyAssignment(expr, ident, value); return;
    }
    if (dynamic_cast <IfStatement*> (expr)) {
        Substitute_IfStatement(expr, ident, value); return;
    }
    if (dynamic_cast <IfElseStatement*> (expr)) {
        Substitute_IfElseStatement(expr, ident, value); return;
    }
    if (dynamic_cast <Loop*> (expr)) {
        Substitute_Loop(expr, ident, value); return;
    }
    if (dynamic_cast <Break*> (expr)) {
        Substitute_Break(expr, ident, value); return;
    }
    if (dynamic_cast <Continue*> (expr)) {
        Substitute_Continue(expr, ident, value); return;
    }
    if (dynamic_cast <Return*> (expr)) {
        Substitute_Return(expr, ident, value); return;
    }
    if (dynamic_cast <Eval*> (expr)) {
        Substitute_Eval(expr, ident, value); return;
    }
}

void Substitute_Definition(Statement *&expr, Ident &ident, Expr *value) {
    Definition *definition = dynamic_cast <Definition*> (expr);
    Substitute(definition->expr_, ident, value);
}
void Substitute_MoveAssignment(Statement *&expr, Ident &ident, Expr *value) {
    MoveAssignment *move_assignment = dynamic_cast <MoveAssignment*> (expr);
    Substitute(move_assignment->expr_1, ident, value);
    Substitute(move_assignment->expr_2, ident, value);
}
void Substitute_CopyAssignment(Statement *&expr, Ident &ident, Expr *value) {
    CopyAssignment *copy_assignment = dynamic_cast <CopyAssignment*> (expr);
    Substitute(copy_assignment->expr_1, ident, value);
    Substitute(copy_assignment->expr_2, ident, value);
}
void Substitute_IfStatement(Statement *&expr, Ident &ident, Expr *value) {
    IfStatement *if_statement = dynamic_cast <IfStatement*> (expr);
    Substitute(if_statement->expr_, ident, value);
    Substitute(if_statement->liststatement_, ident, value);
}
void Substitute_IfElseStatement(Statement *&expr, Ident &ident, Expr *value) {
    IfElseStatement *if_else_statement = dynamic_cast <IfElseStatement*> (expr);
    Substitute(if_else_statement->expr_, ident, value);
    Substitute(if_else_statement->liststatement_1, ident, value);
    Substitute(if_else_statement->liststatement_2, ident, value);
}
void Substitute_Loop(Statement *&expr, Ident &ident, Expr *value) {
    Loop *loop = dynamic_cast <Loop*> (expr);
    Substitute(loop->liststatement_, ident, value);
}
void Substitute_Break(Statement *&expr, Ident &ident, Expr *value) { }
void Substitute_Continue(Statement *&expr, Ident &ident, Expr *value) { }
void Substitute_Return(Statement *&expr, Ident &ident, Expr *value) { }
void Substitute_Eval(Statement *&expr, Ident &ident, Expr *value) {
    Eval *eval = dynamic_cast <Eval*> (expr);
    Substitute(eval->expr_, ident, value);
}

void Substitute(ListStatement *&list, Ident &ident, Expr *value) {
    for (ListStatement::iterator i = list->begin(); i != list->end(); i++) {
        Substitute(*i, ident, value);
    }
}

