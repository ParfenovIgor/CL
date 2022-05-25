using ContextIE = std::vector < std::pair <Ident, Expr*> >;
using ContextE = std::vector <Expr*>;

void Evaluate                   (Expr*&, ContextIE&, ContextE&);
void Evaluate_ProgramRoot       (ProgramRoot*&, ContextIE&, ContextE&);

void Evaluate_ConstTrue         (Expr*&, ContextIE&, ContextE&);
void Evaluate_ConstFalse        (Expr*&, ContextIE&, ContextE&);
void Evaluate_ConstZero         (Expr*&, ContextIE&, ContextE&);
void Evaluate_If                (Expr*&, ContextIE&, ContextE&);
void Evaluate_Succ              (Expr*&, ContextIE&, ContextE&);
void Evaluate_Pred              (Expr*&, ContextIE&, ContextE&);
void Evaluate_IsZero            (Expr*&, ContextIE&, ContextE&);
void Evaluate_Var               (Expr*&, ContextIE&, ContextE&);
void Evaluate_Abstraction       (Expr*&, ContextIE&, ContextE&);
void Evaluate_TypeApplication   (Expr*&, ContextIE&, ContextE&);
void Evaluate_TypeAbstraction   (Expr*&, ContextIE&, ContextE&);
void Evaluate_Application       (Expr*&, ContextIE&, ContextE&);
void Evaluate_Fix               (Expr*&, ContextIE&, ContextE&);
void Evaluate_Where             (Expr*&, ContextIE&, ContextE&);
void Evaluate_Reference         (Expr*&, ContextIE&, ContextE&);
void Evaluate_Dereference       (Expr*&, ContextIE&, ContextE&);
void Evaluate_Tuple             (Expr*&, ContextIE&, ContextE&);
void Evaluate_TupleGet          (Expr*&, ContextIE&, ContextE&);
void Evaluate_Record            (Expr*&, ContextIE&, ContextE&);
void Evaluate_RecordGet         (Expr*&, ContextIE&, ContextE&);
void Evaluate_Variant           (Expr*&, ContextIE&, ContextE&);
void Evaluate_VariantCase       (Expr*&, ContextIE&, ContextE&);
void Evaluate_Array             (Expr*&, ContextIE&, ContextE&);
void Evaluate_ArrayGet          (Expr*&, ContextIE&, ContextE&);
void Evaluate_ArrayPush         (Expr*&, ContextIE&, ContextE&);
void Evaluate_ArrayPop          (Expr*&, ContextIE&, ContextE&);
void Evaluate_ArrayLen          (Expr*&, ContextIE&, ContextE&);

void Evaluate_ConstInt          (Expr*&, ContextIE&, ContextE&);
void Evaluate_ToInt             (Expr*&, ContextIE&, ContextE&);
void Evaluate_AddInt            (Expr*&, ContextIE&, ContextE&);
void Evaluate_SubInt            (Expr*&, ContextIE&, ContextE&);
void Evaluate_MulInt            (Expr*&, ContextIE&, ContextE&);
void Evaluate_DivInt            (Expr*&, ContextIE&, ContextE&);
void Evaluate_EquInt            (Expr*&, ContextIE&, ContextE&);
void Evaluate_LesInt            (Expr*&, ContextIE&, ContextE&);

void Evaluate_ConstReal         (Expr*&, ContextIE&, ContextE&);
void Evaluate_ToReal            (Expr*&, ContextIE&, ContextE&);
void Evaluate_AddReal           (Expr*&, ContextIE&, ContextE&);
void Evaluate_SubReal           (Expr*&, ContextIE&, ContextE&);
void Evaluate_MulReal           (Expr*&, ContextIE&, ContextE&);
void Evaluate_DivReal           (Expr*&, ContextIE&, ContextE&);
void Evaluate_EquReal           (Expr*&, ContextIE&, ContextE&);
void Evaluate_LesReal           (Expr*&, ContextIE&, ContextE&);

void Evaluate_ReadInt           (Expr*&, ContextIE&, ContextE&);
void Evaluate_ReadReal          (Expr*&, ContextIE&, ContextE&);
void Evaluate_WriteInt          (Expr*&, ContextIE&, ContextE&);
void Evaluate_WriteReal         (Expr*&, ContextIE&, ContextE&);

void Evaluate                   (Statement*&, ContextIE&, ContextE&);
void Evaluate_Definition        (Statement*&, ContextIE&, ContextE&);
void Evaluate_MoveAssignment    (Statement*&, ContextIE&, ContextE&);
void Evaluate_CopyAssignment    (Statement*&, ContextIE&, ContextE&);
void Evaluate_IfStatement       (Statement*&, ContextIE&, ContextE&);
void Evaluate_IfElseStatement   (Statement*&, ContextIE&, ContextE&);
void Evaluate_Loop              (Statement*&, ContextIE&, ContextE&);
void Evaluate_Break             (Statement*&, ContextIE&, ContextE&);
void Evaluate_Continue          (Statement*&, ContextIE&, ContextE&);
void Evaluate_Return            (Statement*&, ContextIE&, ContextE&);
void Evaluate_Eval              (Statement*&, ContextIE&, ContextE&);

void Evaluate                   (ListStatement*&, ContextIE&, ContextE&);

bool BreakFlag      = false;
bool ContinueFlag   = false;
bool ReturnFlag     = false;

void Evaluate(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    if (dynamic_cast <ConstTrue*> (expr)) {
        Evaluate_ConstTrue(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <ConstFalse*> (expr)) {
        Evaluate_ConstFalse(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <If*> (expr)) {
        Evaluate_If(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <ConstZero*> (expr)) {
        Evaluate_ConstZero(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <Succ*> (expr)) {
        Evaluate_Succ(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <Pred*> (expr)) {
        Evaluate_Pred(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <IsZero*> (expr)) {
        Evaluate_IsZero(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <Var*> (expr)) {
        Evaluate_Var(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <Abstraction*> (expr)) {
        Evaluate_Abstraction(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <Application*> (expr)) {
        Evaluate_Application(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <TypeAbstraction*> (expr)) {
        Evaluate_TypeAbstraction(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <TypeApplication*> (expr)) {
        Evaluate_TypeApplication(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <Fix*> (expr)) {
        Evaluate_Fix(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <Where*> (expr)) {
        Evaluate_Where(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <Reference*> (expr)) {
        Evaluate_Reference(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <Dereference*> (expr)) {
        Evaluate_Dereference(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <Tuple*> (expr)) {
        Evaluate_Tuple(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <TupleGet*> (expr)) {
        Evaluate_TupleGet(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <Record*> (expr)) {
        Evaluate_Record(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <RecordGet*> (expr)) {
        Evaluate_RecordGet(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <Variant*> (expr)) {
        Evaluate_Variant(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <VariantCase*> (expr)) {
        Evaluate_VariantCase(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <Array*> (expr)) {
        Evaluate_Array(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <ArrayGet*> (expr)) {
        Evaluate_ArrayGet(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <ArrayPush*> (expr)) {
        Evaluate_ArrayPush(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <ArrayPop*> (expr)) {
        Evaluate_ArrayPop(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <ArrayLen*> (expr)) {
        Evaluate_ArrayLen(expr, context_local, context_ref); return;
    }

    if (dynamic_cast <ConstInt*> (expr)) {
        Evaluate_ConstInt(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <ToInt*> (expr)) {
        Evaluate_ToInt(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <AddInt*> (expr)) {
        Evaluate_AddInt(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <SubInt*> (expr)) {
        Evaluate_SubInt(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <MulInt*> (expr)) {
        Evaluate_MulInt(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <DivInt*> (expr)) {
        Evaluate_DivInt(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <EquInt*> (expr)) {
        Evaluate_EquInt(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <LesInt*> (expr)) {
        Evaluate_LesInt(expr, context_local, context_ref); return;
    }

    if (dynamic_cast <ConstReal*> (expr)) {
        Evaluate_ConstReal(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <ToReal*> (expr)) {
        Evaluate_ToReal(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <AddReal*> (expr)) {
        Evaluate_AddReal(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <SubReal*> (expr)) {
        Evaluate_SubReal(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <MulReal*> (expr)) {
        Evaluate_MulReal(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <DivReal*> (expr)) {
        Evaluate_DivReal(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <EquReal*> (expr)) {
        Evaluate_EquReal(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <LesReal*> (expr)) {
        Evaluate_LesReal(expr, context_local, context_ref); return;
    }

    if (dynamic_cast <ReadInt*> (expr)) {
        Evaluate_ReadInt(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <ReadReal*> (expr)) {
        Evaluate_ReadReal(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <WriteInt*> (expr)) {
        Evaluate_WriteInt(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <WriteReal*> (expr)) {
        Evaluate_WriteReal(expr, context_local, context_ref); return;
    }
}

void Evaluate_ProgramRoot(ProgramRoot *&program_root, ContextIE &context_local, ContextE &context_ref) {
    for (ListStatement::iterator i = program_root->liststatement_->begin(); i != program_root->liststatement_->end(); i++) {
        Evaluate(*i, context_local, context_ref);
    }
}
void Evaluate_ConstTrue(Expr *&expr, ContextIE &context_local, ContextE &context_ref) { }
void Evaluate_ConstFalse(Expr *&expr, ContextIE &context_local, ContextE &context_ref) { }
void Evaluate_ConstZero(Expr *&expr, ContextIE &context_local, ContextE &context_ref) { }
void Evaluate_If(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    If *if_ = dynamic_cast <If*> (expr);
    Evaluate(if_->expr_1, context_local, context_ref);

    if (dynamic_cast <ConstTrue*> (if_->expr_1)) {
        Expr *result = if_->expr_2->clone();
        // delete expr;
        expr = result;
    }
    else if (dynamic_cast <ConstFalse*> (if_->expr_1)) {
        Expr *result = if_->expr_3->clone();
        // delete expr;
        expr = result;
    }

    Evaluate(expr, context_local, context_ref);
}
void Evaluate_Succ(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    Succ *succ = dynamic_cast <Succ*> (expr);
    Evaluate(succ->expr_, context_local, context_ref);
    if (Pred *pred = dynamic_cast <Pred*> (succ->expr_)) {
        Expr *result = pred->expr_->clone();
        // delete expr;
        expr = result;
    }
}
void Evaluate_Pred(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    Pred *pred = dynamic_cast <Pred*> (expr);
    Evaluate(pred->expr_, context_local, context_ref);
    if (dynamic_cast <ConstZero*> (pred->expr_)) {
        Expr *result = new ConstZero();
        // delete expr;
        expr = result;
    }
    else if (Succ *succ = dynamic_cast <Succ*> (pred->expr_)) {
        Expr *result = succ->expr_->clone();
        // delete expr;
        expr = result;
    }
}
void Evaluate_IsZero(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    IsZero *is_zero = dynamic_cast <IsZero*> (expr);
    Evaluate(is_zero->expr_, context_local, context_ref);
    if (dynamic_cast <ConstZero*> (is_zero->expr_)) {
        Expr *result = new ConstTrue();
        // delete expr;
        expr = result;
    }
    else {
        Expr *result = new ConstFalse();
        // delete expr;
        expr = result;
    }
}
void Evaluate_Var(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    Var *var_ = dynamic_cast <Var*> (expr);
    int pos = find_position_backward(context_local, var_->ident_);
    // delete expr;
    expr = context_local[pos].second->clone();
}
void Evaluate_Abstraction(Expr *&expr, ContextIE &context_local, ContextE &context_ref) { }
void Evaluate_Application(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    Application *application = dynamic_cast <Application*> (expr);
    Evaluate(application->expr_1, context_local, context_ref);
    
    if (Abstraction *abstraction = dynamic_cast <Abstraction*> (application->expr_1)) {
        size_t context_size = context_local.size();
        ReturnFlag = false;
        for (ListStatement::iterator i = abstraction->liststatement_->begin(); i != abstraction->liststatement_->end(); i++) {
            std::string str = itos_nl(0);
            Substitute(*i, str, application->expr_2);
            Evaluate(*i, context_local, context_ref);
            if (ReturnFlag)
                break;
        }
        Expr *expr_ = abstraction->expr_->clone();
        std::string str = itos_nl(0);
        Substitute(expr_, str, application->expr_2);
        // delete application;
        expr = expr_;
        Evaluate(expr, context_local, context_ref);
        while (context_local.size() > context_size) {
            // delete context_local.back().second;
            context_local.pop_back();
        }
    }
}
void Evaluate_TypeAbstraction(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    TypeAbstraction *type_abstraction = dynamic_cast <TypeAbstraction*> (expr);
    Evaluate(type_abstraction->expr_, context_local, context_ref);
    Expr *expr_ = type_abstraction->expr_->clone();
    // delete type_abstraction;
    expr = expr_;
}
void Evaluate_TypeApplication(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    TypeApplication *type_application = dynamic_cast <TypeApplication*> (expr);
    Evaluate(type_application->expr_, context_local, context_ref);
    Expr *expr_ = type_application->expr_->clone();
    // delete type_application;
    expr = expr_;
}
void Evaluate_Fix(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    Fix *fix = dynamic_cast <Fix*> (expr);
    Evaluate(fix->expr_, context_local, context_ref);
    if (Abstraction *abstraction = dynamic_cast <Abstraction*> (fix->expr_)) {
        Expr *result = abstraction->expr_->clone();
        std::string str = itos_nl(0);
        Substitute(result, str, expr->clone());
        // delete expr;
        expr = result;
    }
    Evaluate(expr, context_local, context_ref);
}
void Evaluate_Where(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    Where *where = dynamic_cast <Where*> (expr);
    Evaluate(where->expr_1, context_local, context_ref);
    Expr *expr_ = where->expr_1->clone();
    // delete where;
    expr = expr_;
}
void Evaluate_Reference(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    Reference *reference = dynamic_cast <Reference*> (expr);
    Evaluate(reference->expr_, context_local, context_ref);
    int n = (int)context_ref.size();
    context_ref.push_back(reference->expr_);    
    reference->expr_ = new Var(itos_meta(n));
}
void Evaluate_Dereference(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    Dereference *dereference = dynamic_cast <Dereference*> (expr);
    Evaluate(dereference->expr_, context_local, context_ref);
    
    if (Reference *reference = dynamic_cast <Reference*> (dereference->expr_)) {
        if (Var *var_ = dynamic_cast <Var*> (reference->expr_)) {
            if (is_meta(var_->ident_)) {
                Expr *expr_ = context_ref[stoi_meta(var_->ident_)];
                // delete expr;
                expr = expr_;
            }
        }
    }
}
void Evaluate_Tuple(Expr *&expr, ContextIE &context_local, ContextE &context_ref) { }
void Evaluate_TupleGet(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    TupleGet *tuple_get = dynamic_cast <TupleGet*> (expr);
    Evaluate(tuple_get->expr_, context_local, context_ref);
    if (Tuple *tuple = dynamic_cast <Tuple*> (tuple_get->expr_)) {
        expr = (*(tuple->listexpr_))[tuple_get->integer_ - 1];
    }
}
void Evaluate_Record(Expr *&expr, ContextIE &context_local, ContextE &context_ref) { }
void Evaluate_RecordGet(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    RecordGet *record_get = dynamic_cast <RecordGet*> (expr);
    Evaluate(record_get->expr_, context_local, context_ref);
    if (Record *record = dynamic_cast <Record*> (record_get->expr_)) {
        for (ListRecordField_::iterator i = record->listrecordfield__->begin() ; i != record->listrecordfield__->end() ; i++) {
            RecordField *record_field = dynamic_cast <RecordField*> (*i);
            if (record_field->ident_ == record_get->ident_) {
                expr = record_field->expr_;
                break;
            }
        }
    }
}
void Evaluate_Variant(Expr *&expr, ContextIE &context_local, ContextE &context_ref) { }
void Evaluate_VariantCase(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    VariantCase *variant_case = dynamic_cast <VariantCase*> (expr);
    Evaluate(variant_case->expr_, context_local, context_ref);
    if (Variant *variant = dynamic_cast <Variant*> (variant_case->expr_)) {
        for (ListVariantField_::iterator i = variant_case->listvariantfield__->begin(); i != variant_case->listvariantfield__->end(); i++) {
            VariantField *variant_field = dynamic_cast <VariantField*> (*i);
            if (variant->ident_ == variant_field->ident_1) {
                std::string str = itos_nl(0);
                Substitute(variant_field->expr_, str, variant->expr_);
                Expr *expr_ = variant_field->expr_->clone();
                Evaluate(expr_, context_local, context_ref);
                // delete expr;
                expr = expr_;
                return;
            }
        }
    }
}
void Evaluate_Array(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    Array *array = dynamic_cast <Array*> (expr);
    for (ListExpr::iterator i = array->listexpr_->begin() ; i != array->listexpr_->end() ; i++) {
        Evaluate(*i, context_local, context_ref);
    }
}
void Evaluate_ArrayGet(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    ArrayGet *array_get = dynamic_cast <ArrayGet*> (expr);
    Evaluate(array_get->expr_1, context_local, context_ref);
    Evaluate(array_get->expr_2, context_local, context_ref);
    
    Reference *reference = dynamic_cast <Reference*> (array_get->expr_1);
    Var *var_ = dynamic_cast <Var*> (reference->expr_);
    Array *array = dynamic_cast <Array*> (context_ref[stoi_meta(var_->ident_)]);
    ConstInt *const_int = dynamic_cast <ConstInt*> (array_get->expr_2);

    if (array && const_int) {
        if (const_int->integer_ < 0 || const_int->integer_ >= (int)array->listexpr_->size()) {
            throw "Runtime Error: Array Index out of bound";
        }
        expr = (*(array->listexpr_))[const_int->integer_];
    }
}
void Evaluate_ArrayPush(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    ArrayPush *array_push = dynamic_cast <ArrayPush*> (expr);
    Evaluate(array_push->expr_1, context_local, context_ref);
    Evaluate(array_push->expr_2, context_local, context_ref);

    Reference *reference = dynamic_cast <Reference*> (array_push->expr_1);
    Var *var_ = dynamic_cast <Var*> (reference->expr_);
    Array *array = dynamic_cast <Array*> (context_ref[stoi_meta(var_->ident_)]);

    if (array) {
        (*(array->listexpr_)).push_back(array_push->expr_2);
        expr = new ConstTrue();
    }
}
void Evaluate_ArrayPop(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    ArrayPop *array_pop = dynamic_cast <ArrayPop*> (expr);
    Evaluate(array_pop->expr_, context_local, context_ref);

    Reference *reference = dynamic_cast <Reference*> (array_pop->expr_);
    Var *var_ = dynamic_cast <Var*> (reference->expr_);
    Array *array = dynamic_cast <Array*> (context_ref[stoi_meta(var_->ident_)]);

    if (array) {
        if (array->listexpr_->empty()) {
            throw "Runtime Error: trying to Pop from empty Array";
        }
        (*(array->listexpr_)).pop_back();
        expr = new ConstTrue();
    }
}
void Evaluate_ArrayLen(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    ArrayLen *array_len = dynamic_cast <ArrayLen*> (expr);
    Evaluate(array_len->expr_, context_local, context_ref);

    Reference *reference = dynamic_cast <Reference*> (array_len->expr_);
    Var *var_ = dynamic_cast <Var*> (reference->expr_);
    Array *array = dynamic_cast <Array*> (context_ref[stoi_meta(var_->ident_)]);

    if (array) {
        expr = new ConstInt((int)array->listexpr_->size());
    }
}

void Evaluate_ConstInt(Expr *&expr, ContextIE &context_local, ContextE &context_ref) { }
void Evaluate_ToInt(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    ToInt *to_int = dynamic_cast <ToInt*> (expr);
    Evaluate(to_int->expr_, context_local, context_ref);
    if (ConstReal *const_real = dynamic_cast <ConstReal*> (to_int->expr_)) {
        Expr *expr_ = new ConstInt((int)const_real->double_);
        // delete expr;
        expr = expr_;
    }
}
void Evaluate_AddInt(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    AddInt *add_int = dynamic_cast <AddInt*> (expr);
    Evaluate(add_int->expr_1, context_local, context_ref);
    Evaluate(add_int->expr_2, context_local, context_ref);
    ConstInt *const_int_1 = dynamic_cast <ConstInt*> (add_int->expr_1);
    ConstInt *const_int_2 = dynamic_cast <ConstInt*> (add_int->expr_2);
    if (const_int_1 && const_int_2) {
        Expr *expr_ = new ConstInt(const_int_1->integer_ + const_int_2->integer_);
        // delete expr;
        expr = expr_;
    }
}
void Evaluate_SubInt(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    SubInt *sub_int = dynamic_cast <SubInt*> (expr);
    Evaluate(sub_int->expr_1, context_local, context_ref);
    Evaluate(sub_int->expr_2, context_local, context_ref);
    ConstInt *const_int_1 = dynamic_cast <ConstInt*> (sub_int->expr_1);
    ConstInt *const_int_2 = dynamic_cast <ConstInt*> (sub_int->expr_2);
    if (const_int_1 && const_int_2) {
        Expr *expr_ = new ConstInt(const_int_1->integer_ - const_int_2->integer_);
        // delete expr;
        expr = expr_;
    }
}
void Evaluate_MulInt(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    MulInt *mul_int = dynamic_cast <MulInt*> (expr);
    Evaluate(mul_int->expr_1, context_local, context_ref);
    Evaluate(mul_int->expr_2, context_local, context_ref);
    ConstInt *const_int_1 = dynamic_cast <ConstInt*> (mul_int->expr_1);
    ConstInt *const_int_2 = dynamic_cast <ConstInt*> (mul_int->expr_2);
    if (const_int_1 && const_int_2) {
        Expr *expr_ = new ConstInt(const_int_1->integer_ * const_int_2->integer_);
        // delete expr;
        expr = expr_;
    }
}
void Evaluate_DivInt(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    DivInt *div_int = dynamic_cast <DivInt*> (expr);
    Evaluate(div_int->expr_1, context_local, context_ref);
    Evaluate(div_int->expr_2, context_local, context_ref);
    ConstInt *const_int_1 = dynamic_cast <ConstInt*> (div_int->expr_1);
    ConstInt *const_int_2 = dynamic_cast <ConstInt*> (div_int->expr_2);
    if (const_int_1 && const_int_2) {
        Expr *expr_ = new ConstInt(const_int_1->integer_ / const_int_2->integer_);
        // delete expr;
        expr = expr_;
    }
}
void Evaluate_EquInt(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    EquInt *equ_int = dynamic_cast <EquInt*> (expr);
    Evaluate(equ_int->expr_1, context_local, context_ref);
    Evaluate(equ_int->expr_2, context_local, context_ref);
    ConstInt *const_int_1 = dynamic_cast <ConstInt*> (equ_int->expr_1);
    ConstInt *const_int_2 = dynamic_cast <ConstInt*> (equ_int->expr_2);
    if (const_int_1 && const_int_2) {
        Expr *expr_;
        if (const_int_1->integer_ == const_int_2->integer_)
            expr_ = new ConstTrue();
        else
            expr_ = new ConstFalse();
        // delete expr;
        expr = expr_;
    }
}
void Evaluate_LesInt(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    LesInt *les_int = dynamic_cast <LesInt*> (expr);
    Evaluate(les_int->expr_1, context_local, context_ref);
    Evaluate(les_int->expr_2, context_local, context_ref);
    ConstInt *const_int_1 = dynamic_cast <ConstInt*> (les_int->expr_1);
    ConstInt *const_int_2 = dynamic_cast <ConstInt*> (les_int->expr_2);
    if (const_int_1 && const_int_2) {
        Expr *expr_;
        if (const_int_1->integer_ < const_int_2->integer_)
            expr_ = new ConstTrue();
        else
            expr_ = new ConstFalse();
        // delete expr;
        expr = expr_;
    }
}

void Evaluate_ConstReal(Expr *&expr, ContextIE &context_local, ContextE &context_ref) { }
void Evaluate_ToReal(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    ToReal *to_real = dynamic_cast <ToReal*> (expr);
    Evaluate(to_real->expr_, context_local, context_ref);
    if (ConstInt *const_int = dynamic_cast <ConstInt*> (to_real->expr_)) {
        Expr *expr_ = new ConstReal((double)const_int->integer_);
        // delete expr;
        expr = expr_;
    }
}
void Evaluate_AddReal(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    AddReal *add_real = dynamic_cast <AddReal*> (expr);
    Evaluate(add_real->expr_1, context_local, context_ref);
    Evaluate(add_real->expr_2, context_local, context_ref);
    ConstReal *const_real_1 = dynamic_cast <ConstReal*> (add_real->expr_1);
    ConstReal *const_real_2 = dynamic_cast <ConstReal*> (add_real->expr_2);
    if (const_real_1 && const_real_2) {
        Expr *expr_ = new ConstReal(const_real_1->double_ + const_real_2->double_);
        // delete expr;
        expr = expr_;
    }
}
void Evaluate_SubReal(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    SubReal *sub_real = dynamic_cast <SubReal*> (expr);
    Evaluate(sub_real->expr_1, context_local, context_ref);
    Evaluate(sub_real->expr_2, context_local, context_ref);
    ConstReal *const_real_1 = dynamic_cast <ConstReal*> (sub_real->expr_1);
    ConstReal *const_real_2 = dynamic_cast <ConstReal*> (sub_real->expr_2);
    if (const_real_1 && const_real_2) {
        Expr *expr_ = new ConstReal(const_real_1->double_ - const_real_2->double_);
        // delete expr;
        expr = expr_;
    }
}
void Evaluate_MulReal(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    MulReal *mul_real = dynamic_cast <MulReal*> (expr);
    Evaluate(mul_real->expr_1, context_local, context_ref);
    Evaluate(mul_real->expr_2, context_local, context_ref);
    ConstReal *const_real_1 = dynamic_cast <ConstReal*> (mul_real->expr_1);
    ConstReal *const_real_2 = dynamic_cast <ConstReal*> (mul_real->expr_2);
    if (const_real_1 && const_real_2) {
        Expr *expr_ = new ConstReal(const_real_1->double_ * const_real_2->double_);
        // delete expr;
        expr = expr_;
    }
}
void Evaluate_DivReal(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    DivReal *div_real = dynamic_cast <DivReal*> (expr);
    Evaluate(div_real->expr_1, context_local, context_ref);
    Evaluate(div_real->expr_2, context_local, context_ref);
    ConstReal *const_real_1 = dynamic_cast <ConstReal*> (div_real->expr_1);
    ConstReal *const_real_2 = dynamic_cast <ConstReal*> (div_real->expr_2);
    if (const_real_1 && const_real_2) {
        Expr *expr_ = new ConstReal(const_real_1->double_ / const_real_2->double_);
        // delete expr;
        expr = expr_;
    }
}
void Evaluate_EquReal(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    EquReal *equ_real = dynamic_cast <EquReal*> (expr);
    Evaluate(equ_real->expr_1, context_local, context_ref);
    Evaluate(equ_real->expr_2, context_local, context_ref);
    ConstReal *const_real_1 = dynamic_cast <ConstReal*> (equ_real->expr_1);
    ConstReal *const_real_2 = dynamic_cast <ConstReal*> (equ_real->expr_2);
    if (const_real_1 && const_real_2) {
        Expr *expr_;
        if (const_real_1->double_ == const_real_2->double_)
            expr_ = new ConstTrue();
        else
            expr_ = new ConstFalse();
        // delete expr;
        expr = expr_;
    }
}
void Evaluate_LesReal(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    LesReal *les_real = dynamic_cast <LesReal*> (expr);
    Evaluate(les_real->expr_1, context_local, context_ref);
    Evaluate(les_real->expr_2, context_local, context_ref);
    ConstReal *const_real_1 = dynamic_cast <ConstReal*> (les_real->expr_1);
    ConstReal *const_real_2 = dynamic_cast <ConstReal*> (les_real->expr_2);
    if (const_real_1 && const_real_2) {
        Expr *expr_;
        if (const_real_1->double_ < const_real_2->double_)
            expr_ = new ConstTrue();
        else
            expr_ = new ConstFalse();
        // delete expr;
        expr = expr_;
    }
}

void Evaluate_ReadInt(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    int integer_;
    std::cin >> integer_;
    expr = new ConstInt(integer_);
}
void Evaluate_ReadReal(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    int double_;
    std::cin >> double_;
    expr = new ConstReal(double_);
}
void Evaluate_WriteInt(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    WriteInt *write_int = dynamic_cast <WriteInt*> (expr);
    Evaluate(write_int->expr_, context_local, context_ref);
    if (ConstInt *const_int = dynamic_cast <ConstInt*> (write_int->expr_)) {
        std::cout << const_int->integer_ << std::endl;
        expr = new ConstTrue;
    }
}
void Evaluate_WriteReal(Expr *&expr, ContextIE &context_local, ContextE &context_ref) {
    WriteReal *write_real = dynamic_cast <WriteReal*> (expr);
    Evaluate(write_real->expr_, context_local, context_ref);
    if (ConstReal *const_real = dynamic_cast <ConstReal*> (write_real->expr_)) {
        std::cout << const_real->double_ << std::endl;
        expr = new ConstTrue;
    }
}

void Evaluate(Statement *&expr, ContextIE &context_local, ContextE &context_ref) {
    if (dynamic_cast <Definition*> (expr)) {
        Evaluate_Definition(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <MoveAssignment*> (expr)) {
        Evaluate_MoveAssignment(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <CopyAssignment*> (expr)) {
        Evaluate_CopyAssignment(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <IfStatement*> (expr)) {
        Evaluate_IfStatement(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <IfElseStatement*> (expr)) {
        Evaluate_IfElseStatement(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <Loop*> (expr)) {
        Evaluate_Loop(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <Break*> (expr)) {
        Evaluate_Break(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <Continue*> (expr)) {
        Evaluate_Continue(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <Return*> (expr)) {
        Evaluate_Return(expr, context_local, context_ref); return;
    }
    if (dynamic_cast <Eval*> (expr)) {
        Evaluate_Eval(expr, context_local, context_ref); return;
    }
}

void Evaluate_Definition(Statement *&expr, ContextIE &context_local, ContextE &context_ref) {
    Definition *definition = dynamic_cast <Definition*> (expr);
    Evaluate(definition->expr_, context_local, context_ref);
    context_local.push_back({definition->ident_, definition->expr_});
}
void Evaluate_MoveAssignment(Statement *&expr, ContextIE &context_local, ContextE &context_ref) {
    MoveAssignment *move_assignment = dynamic_cast <MoveAssignment*> (expr);
    Evaluate(move_assignment->expr_1, context_local, context_ref);
    Evaluate(move_assignment->expr_2, context_local, context_ref);
    if (Reference *reference = dynamic_cast <Reference*> (move_assignment->expr_1)) {
        if (Var *var_ = dynamic_cast <Var*> (reference->expr_)) {
            context_ref[stoi_meta(var_->ident_)] = move_assignment->expr_2;
        }
    }
}
void Evaluate_CopyAssignment(Statement *&expr, ContextIE &context_local, ContextE &context_ref) {
    CopyAssignment *copy_assignment = dynamic_cast <CopyAssignment*> (expr);
    Evaluate(copy_assignment->expr_1, context_local, context_ref);
    Evaluate(copy_assignment->expr_2, context_local, context_ref);
    if (Reference *reference = dynamic_cast <Reference*> (copy_assignment->expr_1)) {
        if (Var *var_ = dynamic_cast <Var*> (reference->expr_)) {
            int n = (int)context_ref.size();
            context_ref.push_back(copy_assignment->expr_2);
            reference->expr_ = new Var(itos_meta(n));
        }
    }
}
void Evaluate_IfStatement(Statement *&expr, ContextIE &context_local, ContextE &context_ref) {
    IfStatement *if_statement = dynamic_cast <IfStatement*> (expr);
    Evaluate(if_statement->expr_, context_local, context_ref);
    if (dynamic_cast <ConstTrue*> (if_statement->expr_)) {
        Evaluate(if_statement->liststatement_, context_local, context_ref);
    }
}
void Evaluate_IfElseStatement(Statement *&expr, ContextIE &context_local, ContextE &context_ref) {
    IfElseStatement *if_else_statement = dynamic_cast <IfElseStatement*> (expr);
    Evaluate(if_else_statement->expr_, context_local, context_ref);
    if (dynamic_cast <ConstTrue*> (if_else_statement->expr_)) {
        Evaluate(if_else_statement->liststatement_1, context_local, context_ref);
    }
    else if (dynamic_cast <ConstFalse*> (if_else_statement->expr_)) {
        Evaluate(if_else_statement->liststatement_2, context_local, context_ref);
    }
}
void Evaluate_Loop(Statement *&expr, ContextIE &context_local, ContextE &context_ref) {
    Loop *loop = dynamic_cast <Loop*> (expr);
    BreakFlag = false;
    ContinueFlag = false;
    Statement *expr_ = expr->clone();
    
    Evaluate(loop->liststatement_, context_local, context_ref);
    ContinueFlag = false;
    if (!BreakFlag) {
        expr = expr_;
        Evaluate(expr, context_local, context_ref);
    }
}
void Evaluate_Break(Statement *&expr, ContextIE &context_local, ContextE &context_ref) {
    BreakFlag = true;
}
void Evaluate_Continue(Statement *&expr, ContextIE &context_local, ContextE &context_ref) {
    ContinueFlag = true;
}
void Evaluate_Return(Statement *&expr, ContextIE &context_local, ContextE &context_ref) {
    ReturnFlag = true;
}
void Evaluate_Eval(Statement *&expr, ContextIE &context_local, ContextE &context_ref) {
    Eval *eval = dynamic_cast <Eval*> (expr);
    Evaluate(eval->expr_, context_local, context_ref);
}

void Evaluate(ListStatement *&list, ContextIE &context_local, ContextE &context_ref) {
    size_t context_size = context_local.size();
    for (ListStatement::iterator i = list->begin(); i != list->end(); i++) {
        Evaluate(*i, context_local, context_ref);
        if (BreakFlag || ContinueFlag || ReturnFlag)
            break;
    }
    while (context_local.size() > context_size) {
        // delete context_local.back().second;
        context_local.pop_back();
    }
}

