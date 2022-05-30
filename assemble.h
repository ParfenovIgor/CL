void Assemble                   (Expr*&);
void Assemble                   (ProgramRoot*&);

void Assemble_ConstTrue         (Expr*&);
void Assemble_ConstFalse        (Expr*&);
void Assemble_ConstZero         (Expr*&);
void Assemble_If                (Expr*&);
void Assemble_Succ              (Expr*&);
void Assemble_Pred              (Expr*&);
void Assemble_IsZero            (Expr*&);
void Assemble_Var               (Expr*&);
void Assemble_Abstraction       (Expr*&);
void Assemble_MultiAbstraction  (Expr*&);
void Assemble_Application       (Expr*&);
void Assemble_TypeAbstraction   (Expr*&);
void Assemble_TypeApplication   (Expr*&);
void Assemble_Fix               (Expr*&);
void Assemble_Where             (Expr*&);
void Assemble_MultiWhere        (Expr*&);
void Assemble_Reference         (Expr*&);
void Assemble_Dereference       (Expr*&);
void Assemble_Tuple             (Expr*&);
void Assemble_TupleGet          (Expr*&);
void Assemble_Record            (Expr*&);
void Assemble_RecordGet         (Expr*&);
void Assemble_Variant           (Expr*&);
void Assemble_VariantCase       (Expr*&);
void Assemble_Array             (Expr*&);
void Assemble_ArrayGet          (Expr*&);
void Assemble_ArrayPush         (Expr*&);
void Assemble_ArrayPop          (Expr*&);
void Assemble_ArrayLen          (Expr*&);

void Assemble_ConstInt          (Expr*&);
void Assemble_ToInt             (Expr*&);
void Assemble_AddInt            (Expr*&);
void Assemble_SubInt            (Expr*&);
void Assemble_MulInt            (Expr*&);
void Assemble_DivInt            (Expr*&);
void Assemble_EquInt            (Expr*&);
void Assemble_LesInt            (Expr*&);

void Assemble_ConstReal         (Expr*&);
void Assemble_ToReal            (Expr*&);
void Assemble_AddReal           (Expr*&);
void Assemble_SubReal           (Expr*&);
void Assemble_MulReal           (Expr*&);
void Assemble_DivReal           (Expr*&);
void Assemble_EquReal           (Expr*&);
void Assemble_LesReal           (Expr*&);

void Assemble_ReadInt           (Expr*&);
void Assemble_ReadReal          (Expr*&);
void Assemble_WriteInt          (Expr*&);
void Assemble_WriteReal         (Expr*&);

void Assemble                   (Statement*&);
void Assemble_Import            (Statement*&);
void Assemble_Definition        (Statement*&);
void Assemble_TypeDefinition    (Statement*&);
void Assemble_Assignment        (Statement*&);
void Assemble_IfStatement       (Statement*&);
void Assemble_IfElseStatement   (Statement*&);
void Assemble_Loop              (Statement*&);
void Assemble_Break             (Statement*&);
void Assemble_Continue          (Statement*&);
void Assemble_Return            (Statement*&);
void Assemble_Eval              (Statement*&);

void Assemble(ListStatement*&);

void Assemble(Expr *&expr) {
    if (dynamic_cast <ConstTrue*> (expr)) {
        Assemble_ConstTrue(expr); return;
    }
    if (dynamic_cast <ConstFalse*> (expr)) {
        Assemble_ConstFalse(expr); return;
    }
    if (dynamic_cast <ConstZero*> (expr)) {
        Assemble_ConstZero(expr); return;
    }
    if (dynamic_cast <If*> (expr)) {
        Assemble_If(expr); return;
    }
    if (dynamic_cast <Succ*> (expr)) {
        Assemble_Succ(expr); return;
    }
    if (dynamic_cast <Pred*> (expr)) {
        Assemble_Pred(expr); return;
    }
    if (dynamic_cast <IsZero*> (expr)) {
        Assemble_IsZero(expr); return;
    }
    if (dynamic_cast <Var*> (expr)) {
        Assemble_Var(expr); return;
    }
    if (dynamic_cast <Abstraction*> (expr)) {
        Assemble_Abstraction(expr); return;
    }
    if (dynamic_cast <MultiAbstraction*> (expr)) {
        Assemble_MultiAbstraction(expr); return;
    }
    if (dynamic_cast <Application*> (expr)) {
        Assemble_Application(expr); return;
    }
    if (dynamic_cast <TypeAbstraction*> (expr)) {
        Assemble_TypeAbstraction(expr); return;
    }
    if (dynamic_cast <TypeApplication*> (expr)) {
        Assemble_TypeApplication(expr); return;
    }
    if (dynamic_cast <Fix*> (expr)) {
        Assemble_Fix(expr); return;
    }
    if (dynamic_cast <Where*> (expr)) {
        Assemble_Where(expr); return;
    }
    if (dynamic_cast <MultiWhere*> (expr)) {
        Assemble_MultiWhere(expr); return;
    }
    if (dynamic_cast <Reference*> (expr)) {
        Assemble_Reference(expr); return;
    }
    if (dynamic_cast <Dereference*> (expr)) {
        Assemble_Dereference(expr); return;
    }
    if (dynamic_cast <Tuple*> (expr)) {
        Assemble_Tuple(expr); return;
    }
    if (dynamic_cast <TupleGet*> (expr)) {
        Assemble_TupleGet(expr); return;
    }
    if (dynamic_cast <Record*> (expr)) {
        Assemble_Record(expr); return;
    }
    if (dynamic_cast <RecordGet*> (expr)) {
        Assemble_RecordGet(expr); return;
    }
    if (dynamic_cast <Variant*> (expr)) {
        Assemble_Variant(expr); return;
    }
    if (dynamic_cast <VariantCase*> (expr)) {
        Assemble_VariantCase(expr); return;
    }
    if (dynamic_cast <Array*> (expr)) {
        Assemble_Array(expr); return;
    }
    if (dynamic_cast <ArrayGet*> (expr)) {
        Assemble_ArrayGet(expr); return;
    }
    if (dynamic_cast <ArrayPush*> (expr)) {
        Assemble_ArrayPush(expr); return;
    }
    if (dynamic_cast <ArrayPop*> (expr)) {
        Assemble_ArrayPop(expr); return;
    }
    if (dynamic_cast <ArrayLen*> (expr)) {
        Assemble_ArrayLen(expr); return;
    }

    if (dynamic_cast <ConstInt*> (expr)) {
        Assemble_ConstInt(expr); return;
    }
    if (dynamic_cast <ToInt*> (expr)) {
        Assemble_ToInt(expr); return;
    }
    if (dynamic_cast <AddInt*> (expr)) {
        Assemble_AddInt(expr); return;
    }
    if (dynamic_cast <SubInt*> (expr)) {
        Assemble_SubInt(expr); return;
    }
    if (dynamic_cast <MulInt*> (expr)) {
        Assemble_MulInt(expr); return;
    }
    if (dynamic_cast <DivInt*> (expr)) {
        Assemble_DivInt(expr); return;
    }
    if (dynamic_cast <EquInt*> (expr)) {
        Assemble_EquInt(expr); return;
    }
    if (dynamic_cast <LesInt*> (expr)) {
        Assemble_LesInt(expr); return;
    }

    if (dynamic_cast <ConstReal*> (expr)) {
        Assemble_ConstReal(expr); return;
    }
    if (dynamic_cast <ToReal*> (expr)) {
        Assemble_ToReal(expr); return;
    }
    if (dynamic_cast <AddReal*> (expr)) {
        Assemble_AddReal(expr); return;
    }
    if (dynamic_cast <SubReal*> (expr)) {
        Assemble_SubReal(expr); return;
    }
    if (dynamic_cast <MulReal*> (expr)) {
        Assemble_MulReal(expr); return;
    }
    if (dynamic_cast <DivReal*> (expr)) {
        Assemble_DivReal(expr); return;
    }
    if (dynamic_cast <EquReal*> (expr)) {
        Assemble_EquReal(expr); return;
    }
    if (dynamic_cast <LesReal*> (expr)) {
        Assemble_LesReal(expr); return;
    }

    if (dynamic_cast <ReadInt*> (expr)) {
        Assemble_ReadInt(expr); return;
    }
    if (dynamic_cast <ReadReal*> (expr)) {
        Assemble_ReadReal(expr); return;
    }
    if (dynamic_cast <WriteInt*> (expr)) {
        Assemble_WriteInt(expr); return;
    }
    if (dynamic_cast <WriteReal*> (expr)) {
        Assemble_WriteReal(expr); return;
    }
}

std::map <std::string, int> file_status;

void Assemble(ProgramRoot *&program_root) {
    Assemble(program_root->liststatement_);
}
void Assemble_ConstTrue(Expr *&expr) { }
void Assemble_ConstFalse(Expr *&expr) { }
void Assemble_ConstZero(Expr *&expr) { }
void Assemble_If(Expr *&expr) {
    If *if_ = dynamic_cast <If*> (expr);
    Assemble(if_->expr_1);
    Assemble(if_->expr_2);
    Assemble(if_->expr_3);
}
void Assemble_Succ(Expr *&expr) {
    Succ *succ = dynamic_cast <Succ*> (expr);
    Assemble(succ->expr_);
}
void Assemble_Pred(Expr *&expr) {
    Pred *pred = dynamic_cast <Pred*> (expr);
    Assemble(pred->expr_);
}
void Assemble_IsZero(Expr *&expr) {
    IsZero *is_zero = dynamic_cast <IsZero*> (expr);
    Assemble(is_zero->expr_);
}
void Assemble_Var(Expr *&expr) { }
void Assemble_Abstraction(Expr *&expr) {
    Abstraction *abstraction = dynamic_cast <Abstraction*> (expr);
    Assemble(abstraction->expr_);
    Assemble(abstraction->liststatement_);
}
void Assemble_MultiAbstraction(Expr *&expr) {
    MultiAbstraction *multi_abstraction = dynamic_cast <MultiAbstraction*> (expr);
    Assemble(multi_abstraction->expr_);
    Assemble(multi_abstraction->liststatement_);
    
    bool first = true;
    Expr *expr_;
    for (ListAbstractionField_::reverse_iterator i = multi_abstraction->listabstractionfield__->rbegin(); i != multi_abstraction->listabstractionfield__->rend(); i++) {
        AbstractionField *abstraction_field = dynamic_cast <AbstractionField*> (*i);
        if (first) {
            expr_ = new Abstraction(abstraction_field->type_->clone(), abstraction_field->ident_, multi_abstraction->liststatement_->clone(), multi_abstraction->expr_->clone());
            first = false;
        }
        else {
            expr_ = new Abstraction(abstraction_field->type_->clone(), abstraction_field->ident_, new ListStatement(), expr_);
        }
    }
    delete expr;
    expr = expr_;
}
void Assemble_Application(Expr *&expr) {
    Application *application = dynamic_cast <Application*> (expr);
    Assemble(application->expr_1);
    Assemble(application->expr_2);
}
void Assemble_TypeAbstraction(Expr *&expr) {
    TypeAbstraction *type_abstraction = dynamic_cast <TypeAbstraction*> (expr);
    Assemble(type_abstraction->expr_);
}
void Assemble_TypeApplication(Expr *&expr) {
    TypeApplication *type_application = dynamic_cast <TypeApplication*> (expr);
    Assemble(type_application->expr_);
}
void Assemble_Fix(Expr *&expr) {
    Fix *fix = dynamic_cast <Fix*> (expr);
    Assemble(fix->expr_);
}
void Assemble_Where(Expr *&expr) {
    Where *where = dynamic_cast <Where*> (expr);
    Assemble(where->expr_1);
    Assemble(where->expr_2);
}
void Assemble_MultiWhere(Expr *&expr) {
    MultiWhere *multi_where = dynamic_cast <MultiWhere*> (expr);
    Assemble(multi_where->expr_);
    
    bool first = true;
    Expr *expr_;
    for (ListWhereField_::iterator i = multi_where->listwherefield__->begin(); i != multi_where->listwherefield__->end(); i++) {
        WhereField *where_field = dynamic_cast <WhereField*> (*i);
        if (first) {
            expr_ = new Where(multi_where->expr_->clone(), where_field->type_->clone(), where_field->ident_, where_field->expr_->clone());
            first = false;
        }
        else {
            expr_ = new Where(expr_, where_field->type_->clone(), where_field->ident_, where_field->expr_->clone());
        }
    }
    delete expr;
    expr = expr_;
}
void Assemble_Reference(Expr *&expr) {
    Reference *reference = dynamic_cast <Reference*> (expr);
    Assemble(reference->expr_);
}
void Assemble_Dereference(Expr *&expr) {
    Dereference *dereference = dynamic_cast <Dereference*> (expr);
    Assemble(dereference->expr_);
}
void Assemble_Tuple(Expr *&expr) {
    Tuple *tuple = dynamic_cast <Tuple*> (expr);
    for (ListExpr::iterator i = tuple->listexpr_->begin(); i != tuple->listexpr_->end(); i++)
        Assemble(*i);
}
void Assemble_TupleGet(Expr *&expr) {
    TupleGet *tuple_get = dynamic_cast <TupleGet*> (expr);
    Assemble(tuple_get->expr_);
}
void Assemble_Record(Expr *&expr) {
    Record *record = dynamic_cast <Record*> (expr);
    for (ListRecordField_::iterator i = record->listrecordfield__->begin(); i != record->listrecordfield__->end(); i++) {
        RecordField *record_field = dynamic_cast <RecordField*> (*i);
        Assemble(record_field->expr_);
    }
}
void Assemble_RecordGet(Expr *&expr) {
    RecordGet *record_get = dynamic_cast <RecordGet*> (expr);
    Assemble(record_get->expr_);
}
void Assemble_Variant(Expr *&expr) {
    Variant *variant = dynamic_cast <Variant*> (expr);
    Assemble(variant->expr_);
}
void Assemble_VariantCase(Expr *&expr) {
    VariantCase *variant_case = dynamic_cast <VariantCase*> (expr);
    Assemble(variant_case->expr_);
    for (ListVariantField_::iterator i = variant_case->listvariantfield__->begin(); i != variant_case->listvariantfield__->end(); i++) {
        VariantField *variant_field = dynamic_cast <VariantField*> (*i);
        Assemble(variant_field->expr_);
    }
}
void Assemble_Array(Expr *&expr) {
    Array *array = dynamic_cast <Array*> (expr);
    for (ListExpr::iterator i = array->listexpr_->begin(); i != array->listexpr_->end(); i++) {
        Assemble(*i);
    }
}
void Assemble_ArrayGet(Expr *&expr) {
    ArrayGet *array_get = dynamic_cast <ArrayGet*> (expr);
    Assemble(array_get->expr_1);
    Assemble(array_get->expr_2);
}
void Assemble_ArrayPush(Expr *&expr) {
    ArrayPush *array_push = dynamic_cast <ArrayPush*> (expr);
    Assemble(array_push->expr_1);
    Assemble(array_push->expr_2);
}
void Assemble_ArrayPop(Expr *&expr) {
    ArrayPop *array_pop = dynamic_cast <ArrayPop*> (expr);
    Assemble(array_pop->expr_);
}
void Assemble_ArrayLen(Expr *&expr) {
    ArrayLen *array_len = dynamic_cast <ArrayLen*> (expr);
    Assemble(array_len->expr_);
}

void Assemble_ConstInt(Expr *&expr) { }
void Assemble_ToInt(Expr *&expr) {
    ToInt *to_int = dynamic_cast <ToInt*> (expr);
    Assemble(to_int->expr_);
}
void Assemble_AddInt(Expr *&expr) {
    AddInt *add_int = dynamic_cast <AddInt*> (expr);
    Assemble(add_int->expr_1);
    Assemble(add_int->expr_2);
}
void Assemble_SubInt(Expr *&expr) {
    SubInt *sub_int = dynamic_cast <SubInt*> (expr);
    Assemble(sub_int->expr_1);
    Assemble(sub_int->expr_2);
}
void Assemble_MulInt(Expr *&expr) {
    MulInt *mul_int = dynamic_cast <MulInt*> (expr);
    Assemble(mul_int->expr_1);
    Assemble(mul_int->expr_2);
}
void Assemble_DivInt(Expr *&expr) {
    DivInt *div_int = dynamic_cast <DivInt*> (expr);
    Assemble(div_int->expr_1);
    Assemble(div_int->expr_2);
}
void Assemble_EquInt(Expr *&expr) {
    EquInt *equ_int = dynamic_cast <EquInt*> (expr);
    Assemble(equ_int->expr_1);
    Assemble(equ_int->expr_2);
}
void Assemble_LesInt(Expr *&expr) {
    LesInt *les_int = dynamic_cast <LesInt*> (expr);
    Assemble(les_int->expr_1);
    Assemble(les_int->expr_2);
}

void Assemble_ConstReal(Expr *&expr) { }
void Assemble_ToReal(Expr *&expr) {
    ToReal *to_real = dynamic_cast <ToReal*> (expr);
    Assemble(to_real->expr_);
}
void Assemble_AddReal(Expr *&expr) {
    AddReal *add_real = dynamic_cast <AddReal*> (expr);
    Assemble(add_real->expr_1);
    Assemble(add_real->expr_2);
}
void Assemble_SubReal(Expr *&expr) {
    SubReal *sub_real = dynamic_cast <SubReal*> (expr);
    Assemble(sub_real->expr_1);
    Assemble(sub_real->expr_2);
}
void Assemble_MulReal(Expr *&expr) {
    MulReal *mul_real = dynamic_cast <MulReal*> (expr);
    Assemble(mul_real->expr_1);
    Assemble(mul_real->expr_2);
}
void Assemble_DivReal(Expr *&expr) {
    DivReal *div_real = dynamic_cast <DivReal*> (expr);
    Assemble(div_real->expr_1);
    Assemble(div_real->expr_2);
}
void Assemble_EquReal(Expr *&expr) {
    EquReal *equ_real = dynamic_cast <EquReal*> (expr);
    Assemble(equ_real->expr_1);
    Assemble(equ_real->expr_2);
}
void Assemble_LesReal(Expr *&expr) {
    LesReal *les_real = dynamic_cast <LesReal*> (expr);
    Assemble(les_real->expr_1);
    Assemble(les_real->expr_2);
}

void Assemble_ReadInt(Expr *&expr) { }
void Assemble_ReadReal(Expr *&expr) { }
void Assemble_WriteInt(Expr *&expr) {
    WriteInt *write_int = dynamic_cast <WriteInt*> (expr);
    Assemble(write_int->expr_);
}
void Assemble_WriteReal(Expr *&expr) {
    WriteReal *write_real = dynamic_cast <WriteReal*> (expr);
    Assemble(write_real->expr_);
}

void Assemble(Statement *&expr) {
    if (dynamic_cast <Import*> (expr)) {
        Assemble_Import(expr); return;
    }
    if (dynamic_cast <Definition*> (expr)) {
        Assemble_Definition(expr); return;
    }
    if (dynamic_cast <TypeDefinition*> (expr)) {
        Assemble_TypeDefinition(expr); return;
    }
    if (dynamic_cast <Assignment*> (expr)) {
        Assemble_Assignment(expr); return;
    }
    if (dynamic_cast <IfStatement*> (expr)) {
        Assemble_IfStatement(expr); return;
    }
    if (dynamic_cast <IfElseStatement*> (expr)) {
        Assemble_IfElseStatement(expr); return;
    }
    if (dynamic_cast <Loop*> (expr)) {
        Assemble_Loop(expr); return;
    }
    if (dynamic_cast <Break*> (expr)) {
        Assemble_Break(expr); return;
    }
    if (dynamic_cast <Continue*> (expr)) {
        Assemble_Continue(expr); return;
    }
    if (dynamic_cast <Return*> (expr)) {
        Assemble_Return(expr); return;
    }
    if (dynamic_cast <Eval*> (expr)) {
        Assemble_Eval(expr); return;
    }
}

void Assemble_Import(Statement *&expr) { }
void Assemble_Definition(Statement *&expr) {
    Definition *definition = dynamic_cast <Definition*> (expr);
    Assemble(definition->expr_);
}
void Assemble_TypeDefinition(Statement *&expr) { }
void Assemble_Assignment(Statement *&expr) {
    Assignment *assignment = dynamic_cast <Assignment*> (expr);
    Assemble(assignment->expr_1);
    Assemble(assignment->expr_2);
}
void Assemble_IfStatement(Statement *&expr) {
    IfStatement *if_statement = dynamic_cast <IfStatement*> (expr);
    Assemble(if_statement->expr_);
    Assemble(if_statement->liststatement_);
}
void Assemble_IfElseStatement(Statement *&expr) {
    IfElseStatement *if_else_statement = dynamic_cast <IfElseStatement*> (expr);
    Assemble(if_else_statement->expr_);
    Assemble(if_else_statement->liststatement_1);
    Assemble(if_else_statement->liststatement_2);
}
void Assemble_Loop(Statement *&expr) {
    Loop *loop = dynamic_cast <Loop*> (expr);
    Assemble(loop->liststatement_);
}
void Assemble_Break(Statement *&expr) { }
void Assemble_Continue(Statement *&expr) { }
void Assemble_Return(Statement *&expr) { }
void Assemble_Eval(Statement *&expr) {
    Eval *eval = dynamic_cast <Eval*> (expr);
    Assemble(eval->expr_);
}

void Assemble(ListStatement *&list) {
    for (size_t i = 0; i < list->size(); i++) {
        if (Import *import = dynamic_cast <Import*> ((*list)[i])) {
            if (file_status[import->string_]) {
                throw "Assemble Error: Import cyclic dependency detected";
            }
            file_status[import->string_]++;
            ProgramRoot *program_root = ParseFile(import->string_);
            file_status[import->string_]--;
            list->erase(std::next(list->begin(), i));
            list->insert(std::next(list->begin(), i), program_root->liststatement_->begin(), program_root->liststatement_->end());
        }
        Assemble((*list)[i]);
    }
}

