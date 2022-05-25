using Context = std::vector <Ident>;

void ToNameless                 (Expr*, Context&, Context&);
void ToNameless_ProgramRoot     (ProgramRoot*, Context&, Context&);

void ToNameless_ConstTrue       (Expr*, Context&, Context&);
void ToNameless_ConstFalse      (Expr*, Context&, Context&);
void ToNameless_ConstZero       (Expr*, Context&, Context&);
void ToNameless_If              (Expr*, Context&, Context&);
void ToNameless_Succ            (Expr*, Context&, Context&);
void ToNameless_Pred            (Expr*, Context&, Context&);
void ToNameless_IsZero          (Expr*, Context&, Context&);
void ToNameless_Var             (Expr*, Context&, Context&);
void ToNameless_Abstraction     (Expr*, Context&, Context&);
void ToNameless_Application     (Expr*, Context&, Context&);
void ToNameless_TypeAbstraction (Expr*, Context&, Context&);
void ToNameless_TypeApplication (Expr*, Context&, Context&);
void ToNameless_Fix             (Expr*, Context&, Context&);
void ToNameless_Where           (Expr*, Context&, Context&);
void ToNameless_Reference       (Expr*, Context&, Context&);
void ToNameless_Dereference     (Expr*, Context&, Context&);
void ToNameless_Tuple           (Expr*, Context&, Context&);
void ToNameless_TupleGet        (Expr*, Context&, Context&);
void ToNameless_Record          (Expr*, Context&, Context&);
void ToNameless_RecordGet       (Expr*, Context&, Context&);
void ToNameless_Variant         (Expr*, Context&, Context&);
void ToNameless_VariantCase     (Expr*, Context&, Context&);
void ToNameless_Array           (Expr*, Context&, Context&);
void ToNameless_ArrayGet        (Expr*, Context&, Context&);
void ToNameless_ArrayPush       (Expr*, Context&, Context&);
void ToNameless_ArrayPop        (Expr*, Context&, Context&);
void ToNameless_ArrayLen        (Expr*, Context&, Context&);

void ToNameless_ConstInt        (Expr*, Context&, Context&);
void ToNameless_ToInt           (Expr*, Context&, Context&);
void ToNameless_AddInt          (Expr*, Context&, Context&);
void ToNameless_SubInt          (Expr*, Context&, Context&);
void ToNameless_MulInt          (Expr*, Context&, Context&);
void ToNameless_DivInt          (Expr*, Context&, Context&);
void ToNameless_EquInt          (Expr*, Context&, Context&);
void ToNameless_LesInt          (Expr*, Context&, Context&);

void ToNameless_ConstReal       (Expr*, Context&, Context&);
void ToNameless_ToReal          (Expr*, Context&, Context&);
void ToNameless_AddReal         (Expr*, Context&, Context&);
void ToNameless_SubReal         (Expr*, Context&, Context&);
void ToNameless_MulReal         (Expr*, Context&, Context&);
void ToNameless_DivReal         (Expr*, Context&, Context&);
void ToNameless_EquReal         (Expr*, Context&, Context&);
void ToNameless_LesReal         (Expr*, Context&, Context&);

void ToNameless_ReadInt         (Expr*, Context&, Context&);
void ToNameless_ReadReal        (Expr*, Context&, Context&);
void ToNameless_WriteInt        (Expr*, Context&, Context&);
void ToNameless_WriteReal       (Expr*, Context&, Context&);

void ToNameless                 (Statement*, Context&, Context&);
void ToNameless_Definition      (Statement*, Context&, Context&);
void ToNameless_MoveAssignment  (Statement*, Context&, Context&);
void ToNameless_CopyAssignment  (Statement*, Context&, Context&);
void ToNameless_IfStatement     (Statement*, Context&, Context&);
void ToNameless_IfElseStatement (Statement*, Context&, Context&);
void ToNameless_Loop            (Statement*, Context&, Context&);
void ToNameless_Break           (Statement*, Context&, Context&);
void ToNameless_Continue        (Statement*, Context&, Context&);
void ToNameless_Return          (Statement*, Context&, Context&);
void ToNameless_Eval            (Statement*, Context&, Context&);

void ToNameless                 (ListStatement*, Context&, Context&);

void ToNameless(Expr *expr, Context &context, Context &context_local) {
    if (dynamic_cast <ConstTrue*> (expr)) {
        ToNameless_ConstTrue(expr, context, context_local); return;
    }
    if (dynamic_cast <ConstFalse*> (expr)) {
        ToNameless_ConstFalse(expr, context, context_local); return;
    }
    if (dynamic_cast <ConstZero*> (expr)) {
        ToNameless_ConstZero(expr, context, context_local); return;
    }
    if (dynamic_cast <If*> (expr)) {
        ToNameless_If(expr, context, context_local); return;
    }
    if (dynamic_cast <Succ*> (expr)) {
        ToNameless_Succ(expr, context, context_local); return;
    }
    if (dynamic_cast <Pred*> (expr)) {
        ToNameless_Pred(expr, context, context_local); return;
    }
    if (dynamic_cast <IsZero*> (expr)) {
        ToNameless_IsZero(expr, context, context_local); return;
    }
    if (dynamic_cast <Var*> (expr)) {
        ToNameless_Var(expr, context, context_local); return;
    }
    if (dynamic_cast <Abstraction*> (expr)) {
        ToNameless_Abstraction(expr, context, context_local); return;
    }
    if (dynamic_cast <Application*> (expr)) {
        ToNameless_Application(expr, context, context_local); return;
    }
    if (dynamic_cast <TypeAbstraction*> (expr)) {
        ToNameless_TypeAbstraction(expr, context, context_local); return;
    }
    if (dynamic_cast <TypeApplication*> (expr)) {
        ToNameless_TypeApplication(expr, context, context_local); return;
    }
    if (dynamic_cast <Fix*> (expr)) {
        ToNameless_Fix(expr, context, context_local); return;
    }
    if (dynamic_cast <Where*> (expr)) {
        ToNameless_Where(expr, context, context_local); return;
    }
    if (dynamic_cast <Reference*> (expr)) {
        ToNameless_Reference(expr, context, context_local); return;
    }
    if (dynamic_cast <Dereference*> (expr)) {
        ToNameless_Dereference(expr, context, context_local); return;
    }
    if (dynamic_cast <Tuple*> (expr)) {
        ToNameless_Tuple(expr, context, context_local); return;
    }
    if (dynamic_cast <TupleGet*> (expr)) {
        ToNameless_TupleGet(expr, context, context_local); return;
    }
    if (dynamic_cast <Record*> (expr)) {
        ToNameless_Record(expr, context, context_local); return;
    }
    if (dynamic_cast <RecordGet*> (expr)) {
        ToNameless_RecordGet(expr, context, context_local); return;
    }
    if (dynamic_cast <Variant*> (expr)) {
        ToNameless_Variant(expr, context, context_local); return;
    }
    if (dynamic_cast <VariantCase*> (expr)) {
        ToNameless_VariantCase(expr, context, context_local); return;
    }
    if (dynamic_cast <Array*> (expr)) {
        ToNameless_Array(expr, context, context_local); return;
    }
    if (dynamic_cast <ArrayGet*> (expr)) {
        ToNameless_ArrayGet(expr, context, context_local); return;
    }
    if (dynamic_cast <ArrayPush*> (expr)) {
        ToNameless_ArrayPush(expr, context, context_local); return;
    }
    if (dynamic_cast <ArrayPop*> (expr)) {
        ToNameless_ArrayPop(expr, context, context_local); return;
    }
    if (dynamic_cast <ArrayLen*> (expr)) {
        ToNameless_ArrayLen(expr, context, context_local); return;
    }
    
    if (dynamic_cast <ConstInt*> (expr)) {
        ToNameless_ConstInt(expr, context, context_local); return;
    }
    if (dynamic_cast <ToInt*> (expr)) {
        ToNameless_ToInt(expr, context, context_local); return;
    }
    if (dynamic_cast <AddInt*> (expr)) {
        ToNameless_AddInt(expr, context, context_local); return;
    }
    if (dynamic_cast <SubInt*> (expr)) {
        ToNameless_SubInt(expr, context, context_local); return;
    }
    if (dynamic_cast <MulInt*> (expr)) {
        ToNameless_MulInt(expr, context, context_local); return;
    }
    if (dynamic_cast <DivInt*> (expr)) {
        ToNameless_DivInt(expr, context, context_local); return;
    }
    if (dynamic_cast <EquInt*> (expr)) {
        ToNameless_EquInt(expr, context, context_local); return;
    }
    if (dynamic_cast <LesInt*> (expr)) {
        ToNameless_LesInt(expr, context, context_local); return;
    }
    
    if (dynamic_cast <ConstReal*> (expr)) {
        ToNameless_ConstReal(expr, context, context_local); return;
    }
    if (dynamic_cast <ToReal*> (expr)) {
        ToNameless_ToReal(expr, context, context_local); return;
    }
    if (dynamic_cast <AddReal*> (expr)) {
        ToNameless_AddReal(expr, context, context_local); return;
    }
    if (dynamic_cast <SubReal*> (expr)) {
        ToNameless_SubReal(expr, context, context_local); return;
    }
    if (dynamic_cast <MulReal*> (expr)) {
        ToNameless_MulReal(expr, context, context_local); return;
    }
    if (dynamic_cast <DivReal*> (expr)) {
        ToNameless_DivReal(expr, context, context_local); return;
    }
    if (dynamic_cast <EquReal*> (expr)) {
        ToNameless_EquReal(expr, context, context_local); return;
    }
    if (dynamic_cast <LesReal*> (expr)) {
        ToNameless_LesReal(expr, context, context_local); return;
    }

    if (dynamic_cast <ReadInt*> (expr)) {
        ToNameless_ReadInt(expr, context, context_local); return;
    }
    if (dynamic_cast <ReadReal*> (expr)) {
        ToNameless_ReadReal(expr, context, context_local); return;
    }
    if (dynamic_cast <WriteInt*> (expr)) {
        ToNameless_WriteInt(expr, context, context_local); return;
    }
    if (dynamic_cast <WriteReal*> (expr)) {
        ToNameless_WriteReal(expr, context, context_local); return;
    }
}

void ToNameless_ProgramRoot(ProgramRoot *program_root, Context &context, Context &context_local) {
    ToNameless(program_root->liststatement_, context, context_local);
}
void ToNameless_ConstTrue(Expr *expr, Context &context, Context &context_local) { }
void ToNameless_ConstFalse(Expr *expr, Context &context, Context &context_local) { }
void ToNameless_ConstZero(Expr *expr, Context &context, Context &context_local) { }
void ToNameless_If(Expr *expr, Context &context, Context &context_local) {
    If *if_ = dynamic_cast <If*> (expr);
    ToNameless(if_->expr_1, context, context_local);
    ToNameless(if_->expr_2, context, context_local);
    ToNameless(if_->expr_3, context, context_local);
}
void ToNameless_Succ(Expr *expr, Context &context, Context &context_local) {
    Succ *succ = dynamic_cast <Succ*> (expr);
    ToNameless(succ->expr_, context, context_local);
}
void ToNameless_Pred(Expr *expr, Context &context, Context &context_local) {
    Pred *pred = dynamic_cast <Pred*> (expr);
    ToNameless(pred->expr_, context, context_local);
}
void ToNameless_IsZero(Expr *expr, Context &context, Context &context_local) {
    IsZero *is_zero = dynamic_cast <IsZero*> (expr);
    ToNameless(is_zero->expr_, context, context_local);
}
void ToNameless_Var(Expr *expr, Context &context, Context &context_local) {
    Var *var_ = dynamic_cast <Var*> (expr);
    int pos = find_position_backward(context_local, var_->ident_);
    if (pos == -1) {
        pos = find_position_backward(context, var_->ident_);
        if (pos != -1) {
            var_->ident_ = itos_nl(pos);
        }
        else {
            throw "Semantic Error: undefined variable";
        }
    }
}
void ToNameless_Abstraction(Expr *expr, Context &context, Context &context_local) {
    Abstraction *abstraction = dynamic_cast <Abstraction*> (expr);
    context.push_back({abstraction->ident_, false});
    Context _context_local;
    for (ListStatement::iterator i = abstraction->liststatement_->begin(); i != abstraction->liststatement_->end(); i++) {
        ToNameless(*i, context, _context_local);
    }
    ToNameless(abstraction->expr_, context, _context_local);
    context.pop_back();
}
void ToNameless_Application(Expr *expr, Context &context, Context &context_local) {
    Application *application = dynamic_cast <Application*> (expr);
    ToNameless(application->expr_1, context, context_local);
    ToNameless(application->expr_2, context, context_local);
}
void ToNameless_TypeAbstraction(Expr *expr, Context &context, Context &context_local) {
    TypeAbstraction *type_abstraction = dynamic_cast <TypeAbstraction*> (expr);
    ToNameless(type_abstraction->expr_, context, context_local);
}
void ToNameless_TypeApplication(Expr *expr, Context &context, Context &context_local) {
    TypeApplication *type_application = dynamic_cast <TypeApplication*> (expr);
    ToNameless(type_application->expr_, context, context_local);
}
void ToNameless_Fix(Expr *expr, Context &context, Context &context_local) {
    Fix *fix = dynamic_cast <Fix*> (expr);
    ToNameless(fix->expr_, context, context_local);
}
void ToNameless_Where(Expr *expr, Context &context, Context &context_local) {
    Where *where = dynamic_cast <Where*> (expr);
    context.push_back({where->ident_, false});
    ToNameless(where->expr_1, context, context_local);
    context.pop_back();
    ToNameless(where->expr_2, context, context_local);
}
void ToNameless_Reference(Expr *expr, Context &context, Context &context_local) {
    Reference *reference = dynamic_cast <Reference*> (expr);
    ToNameless(reference->expr_, context, context_local);
}
void ToNameless_Dereference(Expr *expr, Context &context, Context &context_local) {
    Dereference *dereference = dynamic_cast <Dereference*> (expr);
    ToNameless(dereference->expr_, context, context_local);
}
void ToNameless_Tuple(Expr *expr, Context &context, Context &context_local) {
    Tuple *tuple = dynamic_cast <Tuple*> (expr);
    for (ListExpr::iterator i = tuple->listexpr_->begin(); i != tuple->listexpr_->end(); i++) {
        ToNameless(*i, context, context_local);
    }
}
void ToNameless_TupleGet(Expr *expr, Context &context, Context &context_local) {
    TupleGet *tuple_get = dynamic_cast <TupleGet*> (expr);
    ToNameless(tuple_get->expr_, context, context_local);
}
void ToNameless_Record(Expr *expr, Context &context, Context &context_local) {
    Record *record = dynamic_cast <Record*> (expr);
    for (ListRecordField_::iterator i = record->listrecordfield__->begin(); i != record->listrecordfield__->end(); i++) {
        RecordField *record_field = dynamic_cast <RecordField*> (*i);
        ToNameless(record_field->expr_, context, context_local);
    }
}
void ToNameless_RecordGet(Expr *expr, Context &context, Context &context_local) {
    RecordGet *record_get = dynamic_cast <RecordGet*> (expr);
    ToNameless(record_get->expr_, context, context_local);
}
void ToNameless_Variant(Expr *expr, Context &context, Context &context_local) {
    Variant *variant = dynamic_cast <Variant*> (expr);
    ToNameless(variant->expr_, context, context_local);
}
void ToNameless_VariantCase(Expr *expr, Context &context, Context &context_local) {
    VariantCase *variant_case = dynamic_cast <VariantCase*> (expr);
    ToNameless(variant_case->expr_, context, context_local);
    for (ListVariantField_::iterator i = variant_case->listvariantfield__->begin(); i != variant_case->listvariantfield__->end(); i++) {
        VariantField *variant_field = dynamic_cast <VariantField*> (*i);
        context.push_back(variant_field->ident_2);
        ToNameless(variant_field->expr_, context, context_local);
        context.pop_back();
    }
}
void ToNameless_Array(Expr *expr, Context &context, Context &context_local) {
    Array *array = dynamic_cast <Array*> (expr);
    for (ListExpr::iterator i = array->listexpr_->begin(); i != array->listexpr_->end(); i++) {
        ToNameless(*i, context, context_local);
    }
}
void ToNameless_ArrayGet(Expr *expr, Context &context, Context &context_local) {
    ArrayGet *array_get = dynamic_cast <ArrayGet*> (expr);
    ToNameless(array_get->expr_1, context, context_local);
    ToNameless(array_get->expr_2, context, context_local);
}
void ToNameless_ArrayPush(Expr *expr, Context &context, Context &context_local) {
    ArrayPush *array_push = dynamic_cast <ArrayPush*> (expr);
    ToNameless(array_push->expr_1, context, context_local);
    ToNameless(array_push->expr_2, context, context_local);
}
void ToNameless_ArrayPop(Expr *expr, Context &context, Context &context_local) {
    ArrayPop *array_pop = dynamic_cast <ArrayPop*> (expr);
    ToNameless(array_pop->expr_, context, context_local);
}
void ToNameless_ArrayLen(Expr *expr, Context &context, Context &context_local) {
    ArrayLen *array_len = dynamic_cast <ArrayLen*> (expr);
    ToNameless(array_len->expr_, context, context_local);
}

void ToNameless_ConstInt(Expr *expr, Context &context, Context &context_local) { }
void ToNameless_ToInt(Expr *expr, Context &context, Context &context_local) {
    ToInt *to_int = dynamic_cast <ToInt*> (expr);
    ToNameless(to_int->expr_, context, context_local);
}
void ToNameless_AddInt(Expr *expr, Context &context, Context &context_local) {
    AddInt *add_int = dynamic_cast <AddInt*> (expr);
    ToNameless(add_int->expr_1, context, context_local);
    ToNameless(add_int->expr_2, context, context_local);
}
void ToNameless_SubInt(Expr *expr, Context &context, Context &context_local) {
    SubInt *sub_int = dynamic_cast <SubInt*> (expr);
    ToNameless(sub_int->expr_1, context, context_local);
    ToNameless(sub_int->expr_2, context, context_local);
}
void ToNameless_MulInt(Expr *expr, Context &context, Context &context_local) {
    MulInt *mul_int = dynamic_cast <MulInt*> (expr);
    ToNameless(mul_int->expr_1, context, context_local);
    ToNameless(mul_int->expr_2, context, context_local);
}
void ToNameless_DivInt(Expr *expr, Context &context, Context &context_local) {
    DivInt *div_int = dynamic_cast <DivInt*> (expr);
    ToNameless(div_int->expr_1, context, context_local);
    ToNameless(div_int->expr_2, context, context_local);
}
void ToNameless_EquInt(Expr *expr, Context &context, Context &context_local) {
    EquInt *equ_int = dynamic_cast <EquInt*> (expr);
    ToNameless(equ_int->expr_1, context, context_local);
    ToNameless(equ_int->expr_2, context, context_local);
}
void ToNameless_LesInt(Expr *expr, Context &context, Context &context_local) {
    LesInt *les_int = dynamic_cast <LesInt*> (expr);
    ToNameless(les_int->expr_1, context, context_local);
    ToNameless(les_int->expr_2, context, context_local);
}

void ToNameless_ConstReal(Expr *expr, Context &context, Context &context_local) { }
void ToNameless_ToReal(Expr *expr, Context &context, Context &context_local) {
    ToReal *to_real = dynamic_cast <ToReal*> (expr);
    ToNameless(to_real->expr_, context, context_local);
}
void ToNameless_AddReal(Expr *expr, Context &context, Context &context_local) {
    AddReal *add_real = dynamic_cast <AddReal*> (expr);
    ToNameless(add_real->expr_1, context, context_local);
    ToNameless(add_real->expr_2, context, context_local);
}
void ToNameless_SubReal(Expr *expr, Context &context, Context &context_local) {
    SubReal *sub_real = dynamic_cast <SubReal*> (expr);
    ToNameless(sub_real->expr_1, context, context_local);
    ToNameless(sub_real->expr_2, context, context_local);
}
void ToNameless_MulReal(Expr *expr, Context &context, Context &context_local) {
    MulReal *mul_real = dynamic_cast <MulReal*> (expr);
    ToNameless(mul_real->expr_1, context, context_local);
    ToNameless(mul_real->expr_2, context, context_local);
}
void ToNameless_DivReal(Expr *expr, Context &context, Context &context_local) {
    DivReal *div_real = dynamic_cast <DivReal*> (expr);
    ToNameless(div_real->expr_1, context, context_local);
    ToNameless(div_real->expr_2, context, context_local);
}
void ToNameless_EquReal(Expr *expr, Context &context, Context &context_local) {
    EquReal *equ_real = dynamic_cast <EquReal*> (expr);
    ToNameless(equ_real->expr_1, context, context_local);
    ToNameless(equ_real->expr_2, context, context_local);
}
void ToNameless_LesReal(Expr *expr, Context &context, Context &context_local) {
    LesReal *les_real = dynamic_cast <LesReal*> (expr);
    ToNameless(les_real->expr_1, context, context_local);
    ToNameless(les_real->expr_2, context, context_local);
}

void ToNameless_ReadInt(Expr *expr, Context &context, Context &context_local) { }
void ToNameless_ReadReal(Expr *expr, Context &context, Context &context_local) { }
void ToNameless_WriteInt(Expr *expr, Context &context, Context &context_local) {
    WriteInt *write_int = dynamic_cast <WriteInt*> (expr);
    ToNameless(write_int->expr_, context, context_local);
}
void ToNameless_WriteReal(Expr *expr, Context &context, Context &context_local) {
    WriteReal *write_real = dynamic_cast <WriteReal*> (expr);
    ToNameless(write_real->expr_, context, context_local);
}

void ToNameless(Statement *expr, Context &context, Context &context_local) {
    if (dynamic_cast <Definition*> (expr)) {
        ToNameless_Definition(expr, context, context_local); return;
    }
    if (dynamic_cast <MoveAssignment*> (expr)) {
        ToNameless_MoveAssignment(expr, context, context_local); return;
    }
    if (dynamic_cast <CopyAssignment*> (expr)) {
        ToNameless_CopyAssignment(expr, context, context_local); return;
    }
    if (dynamic_cast <IfStatement*> (expr)) {
        ToNameless_IfStatement(expr, context, context_local); return;
    }
    if (dynamic_cast <IfElseStatement*> (expr)) {
        ToNameless_IfElseStatement(expr, context, context_local); return;
    }
    if (dynamic_cast <Loop*> (expr)) {
        ToNameless_Loop(expr, context, context_local); return;
    }
    if (dynamic_cast <Break*> (expr)) {
        ToNameless_Break(expr, context, context_local); return;
    }
    if (dynamic_cast <Continue*> (expr)) {
        ToNameless_Continue(expr, context, context_local); return;
    }
    if (dynamic_cast <Return*> (expr)) {
        ToNameless_Return(expr, context, context_local); return;
    }
    if (dynamic_cast <Eval*> (expr)) {
        ToNameless_Eval(expr, context, context_local); return;
    }
}

void ToNameless_Definition(Statement *expr, Context &context, Context &context_local) {
    Definition *definition = dynamic_cast <Definition*> (expr);
    context_local.push_back(definition->ident_);
    ToNameless(definition->expr_, context, context_local);
}
void ToNameless_MoveAssignment(Statement *expr, Context &context, Context &context_local) {
    MoveAssignment *move_assignment = dynamic_cast <MoveAssignment*> (expr);
    ToNameless(move_assignment->expr_1, context, context_local);
    ToNameless(move_assignment->expr_2, context, context_local);
}
void ToNameless_CopyAssignment(Statement *expr, Context &context, Context &context_local) {
    CopyAssignment *copy_assignment = dynamic_cast <CopyAssignment*> (expr);
    ToNameless(copy_assignment->expr_1, context, context_local);
    ToNameless(copy_assignment->expr_2, context, context_local);
}
void ToNameless_IfStatement(Statement *expr, Context &context, Context &context_local) {
    IfStatement *if_statement = dynamic_cast <IfStatement*> (expr);
    ToNameless(if_statement->expr_, context, context_local);
    ToNameless(if_statement->liststatement_, context, context_local);
}
void ToNameless_IfElseStatement(Statement *expr, Context &context, Context &context_local) {
    IfElseStatement *if_else_statement = dynamic_cast <IfElseStatement*> (expr);
    ToNameless(if_else_statement->expr_, context, context_local);
    ToNameless(if_else_statement->liststatement_1, context, context_local);
    ToNameless(if_else_statement->liststatement_2, context, context_local);
}
void ToNameless_Loop(Statement *expr, Context &context, Context &context_local) {
    Loop *loop = dynamic_cast <Loop*> (expr);
    ToNameless(loop->liststatement_, context, context_local);
}
void ToNameless_Break(Statement *expr, Context &context, Context &context_local) { }
void ToNameless_Continue(Statement *expr, Context &context, Context &context_local) { }
void ToNameless_Return(Statement *expr, Context &context, Context &context_local) { }
void ToNameless_Eval(Statement *expr, Context &context, Context &context_local) {
    Eval *eval = dynamic_cast <Eval*> (expr);
    ToNameless(eval->expr_, context, context_local);
}

void ToNameless(ListStatement *list, Context &context, Context &context_local) {
    size_t context_size = context_local.size();
    for (ListStatement::iterator i = list->begin(); i != list->end(); i++) {
        ToNameless(*i, context, context_local);
    }
    while(context_local.size() > context_size)
        context_local.pop_back();
}

