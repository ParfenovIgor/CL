void TypeOf                 (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_ProgramRoot     (ProgramRoot*, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);

void TypeOf_ConstTrue       (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_ConstFalse      (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_ConstZero       (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_If              (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_Succ            (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_Pred            (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_IsZero          (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_Var             (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_Abstraction     (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_Application     (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_TypeAbstraction (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_TypeApplication (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_Fix             (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_Where           (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_Reference       (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_Dereference     (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_Tuple           (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_TupleGet        (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_Record          (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_RecordGet       (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_Variant         (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_VariantCase     (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_Array           (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_ArrayGet        (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_ArrayPush       (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_ArrayPop        (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_ArrayLen        (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);

void TypeOf_ConstInt        (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_ToInt           (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_AddInt          (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_SubInt          (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_MulInt          (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_DivInt          (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_EquInt          (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_LesInt          (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);

void TypeOf_ConstReal       (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_ToReal          (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_AddReal         (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_SubReal         (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_MulReal         (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_DivReal         (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_EquReal         (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_LesReal         (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);

void TypeOf_ReadInt         (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_ReadReal        (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_WriteInt        (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_WriteReal       (Expr*, Type *&, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);

void TypeOf                 (Statement*, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_Definition      (Statement*, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_TypeDefinition  (Statement*, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_Assignment      (Statement*, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_IfStatement     (Statement*, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_IfElseStatement (Statement*, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_Loop            (Statement*, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_Break           (Statement*, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_Continue        (Statement*, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_Return          (Statement*, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);
void TypeOf_Eval            (Statement*, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);

void TypeOf                 (ListStatement*, ContextIT&, ContextIT&, ContextIT&, Constraint&, int&);

void TypeOf(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    if (dynamic_cast <ConstTrue*> (expr)) {
        TypeOf_ConstTrue(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <ConstFalse*> (expr)) {
        TypeOf_ConstFalse(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <ConstZero*> (expr)) {
        TypeOf_ConstZero(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <If*> (expr)) {
        TypeOf_If(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <Succ*> (expr)) {
        TypeOf_Succ(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <Pred*> (expr)) {
        TypeOf_Pred(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <IsZero*> (expr)) {
        TypeOf_IsZero(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <Var*> (expr)) {
        TypeOf_Var(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <Abstraction*> (expr)) {
        TypeOf_Abstraction(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <Application*> (expr)) {
        TypeOf_Application(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <TypeAbstraction*> (expr)) {
        TypeOf_TypeAbstraction(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <TypeApplication*> (expr)) {
        TypeOf_TypeApplication(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <Fix*> (expr)) {
        TypeOf_Fix(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <Where*> (expr)) {
        TypeOf_Where(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <Reference*> (expr)) {
        TypeOf_Reference(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <Dereference*> (expr)) {
        TypeOf_Dereference(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <Tuple*> (expr)) {
        TypeOf_Tuple(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <TupleGet*> (expr)) {
        TypeOf_TupleGet(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <Record*> (expr)) {
        TypeOf_Record(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <RecordGet*> (expr)) {
        TypeOf_RecordGet(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <Variant*> (expr)) {
        TypeOf_Variant(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <VariantCase*> (expr)) {
        TypeOf_VariantCase(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <Array*> (expr)) {
        TypeOf_Array(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <ArrayGet*> (expr)) {
        TypeOf_ArrayGet(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <ArrayPush*> (expr)) {
        TypeOf_ArrayPush(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <ArrayPop*> (expr)) {
        TypeOf_ArrayPop(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <ArrayLen*> (expr)) {
        TypeOf_ArrayLen(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }

    if (dynamic_cast <ConstInt*> (expr)) {
        TypeOf_ConstInt(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <ToInt*> (expr)) {
        TypeOf_ToInt(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <AddInt*> (expr)) {
        TypeOf_AddInt(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <SubInt*> (expr)) {
        TypeOf_SubInt(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <MulInt*> (expr)) {
        TypeOf_MulInt(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <DivInt*> (expr)) {
        TypeOf_DivInt(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <EquInt*> (expr)) {
        TypeOf_EquInt(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <LesInt*> (expr)) {
        TypeOf_LesInt(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }

    if (dynamic_cast <ConstReal*> (expr)) {
        TypeOf_ConstReal(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <ToReal*> (expr)) {
        TypeOf_ToReal(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <AddReal*> (expr)) {
        TypeOf_AddReal(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <SubReal*> (expr)) {
        TypeOf_SubReal(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <MulReal*> (expr)) {
        TypeOf_MulReal(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <DivReal*> (expr)) {
        TypeOf_DivReal(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <EquReal*> (expr)) {
        TypeOf_EquReal(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <LesReal*> (expr)) {
        TypeOf_LesReal(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }

    if (dynamic_cast <ReadInt*> (expr)) {
        TypeOf_ReadInt(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <ReadReal*> (expr)) {
        TypeOf_ReadReal(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <WriteInt*> (expr)) {
        TypeOf_WriteInt(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <WriteReal*> (expr)) {
        TypeOf_WriteReal(expr, type, context_expr, context_local, context_type, constraint, var_num); return;
    }
}

void TypeOf_ProgramRoot(ProgramRoot *program_root, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    for (ListStatement::iterator i = program_root->liststatement_->begin(); i != program_root->liststatement_->end(); i++) {
        TypeOf(*i, context_expr, context_local, context_type, constraint, var_num);
    }
}
void TypeOf_ConstTrue(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    type = new BoolType();
}
void TypeOf_ConstFalse(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    type = new BoolType();
}
void TypeOf_If(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    If *if_ = dynamic_cast <If*> (expr);
    Type *t_1, *t_2, *t_3;
    TypeOf(if_->expr_1, t_1, context_expr, context_local, context_type, constraint, var_num);
    TypeOf(if_->expr_2, t_2, context_expr, context_local, context_type, constraint, var_num);
    TypeOf(if_->expr_3, t_3, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({t_1, new BoolType()});
    constraint.push_back({t_2, t_3});
    type = t_2->clone();
}
void TypeOf_ConstZero(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    type = new NatType();
}
void TypeOf_Succ(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    Succ *succ = dynamic_cast <Succ*> (expr);
    Type *t_;
    TypeOf(succ->expr_, t_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({t_, new NatType()});
    type = new NatType();
}
void TypeOf_Pred(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    Pred *pred = dynamic_cast <Pred*> (expr);
    Type *t_;
    TypeOf(pred->expr_, t_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({t_, new NatType()});
    type = new NatType();
}
void TypeOf_IsZero(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    IsZero *is_zero = dynamic_cast <IsZero*> (expr);
    Type *t_;
    TypeOf(is_zero->expr_, t_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({t_, new NatType()});
    type = new BoolType();
}
void TypeOf_Var(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    Var *var_ = dynamic_cast <Var*> (expr);
    if (is_nl(var_->ident_)) {
        int pos = (int)context_expr.size() - stoi_nl(var_->ident_) - 1;
        type = context_expr[pos].second->clone();
    }
    else {
        int pos = find_position_backward(context_local, var_->ident_);
        type = context_local[pos].second->clone();
    }
}
void TypeOf_Abstraction(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    Abstraction *abstraction = dynamic_cast <Abstraction*> (expr);
    size_t context_size = context_local.size();
    size_t context_type_size = context_type.size();
    
    int n;
    if (dynamic_cast <AutoType*> (abstraction->type_)) {
        n = var_num++;
        context_expr.push_back({abstraction->ident_, new VarType (itos_meta(n))});
    }
    else {
        TypeToNameless(abstraction->type_, context_type);
        context_expr.push_back({abstraction->ident_, abstraction->type_->clone()});
    }

    for (ListStatement::iterator i = abstraction->liststatement_->begin(); i != abstraction->liststatement_->end(); i++) {
        TypeOf(*i, context_expr, context_local, context_type, constraint, var_num);
    }

    Type *t_;
    TypeOf(abstraction->expr_, t_, context_expr, context_local, context_type, constraint, var_num);

    if (dynamic_cast <AutoType*> (abstraction->type_)) {
        type = new FunType(new VarType(itos_meta(n)), t_);
    }
    else {
        type = new FunType(abstraction->type_->clone(), t_);
    }
    
    context_expr.pop_back();
    while (context_local.size() > context_size) {
        delete context_local.back().second;
        context_local.pop_back();
    }
    while (context_type.size() > context_type_size) {
        delete context_type.back().second;
        context_local.pop_back();
    }
}
void TypeOf_Application(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    Application *application = dynamic_cast <Application*> (expr);
    Type *t_1, *t_2;
    TypeOf(application->expr_1, t_1, context_expr, context_local, context_type, constraint, var_num);
    TypeOf(application->expr_2, t_2, context_expr, context_local, context_type, constraint, var_num);
    int n = var_num++;

    constraint.push_back({t_1, new FunType(t_2, new VarType(itos_meta(n)))});
    type = new VarType(itos_meta(n));
}
void TypeOf_TypeAbstraction(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    TypeAbstraction *type_abstraction = dynamic_cast <TypeAbstraction*> (expr);
    context_type.push_back({type_abstraction->ident_, nullptr});
    Type *t_;
    TypeOf(type_abstraction->expr_, t_, context_expr, context_local, context_type, constraint, var_num);

    std::vector < std::pair <Ident, Type*> > subst;
    TypeUnify(constraint, subst);
    reverse(subst.begin(), subst.end());

    for (auto s : subst) {
        if (is_nl(s.first)) {
            VarType *var_type = dynamic_cast <VarType*> (s.second);
            if (!var_type || !is_meta(var_type->ident_)) {
                throw "Type Error: Universal Type has Constraints";
            }
            else {
                TypeSubstitute(t_, var_type->ident_, new VarType (s.first));
            }
        }
        else {
            TypeSubstitute(t_, s.first, s.second);
        }
    }
    
    type = new UniType("", t_);
    context_type.pop_back();
}
void TypeOf_TypeApplication(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    TypeApplication *type_application = dynamic_cast <TypeApplication*> (expr);
    Type *t_;
    TypeOf(type_application->expr_, t_, context_expr, context_local, context_type, constraint, var_num);

    if (UniType *uni_type = dynamic_cast <UniType*> (t_)) {
        std::string str = itos_nl(0);
        TypeSubstitute(uni_type->type_, str, type_application->type_);
        type = uni_type->type_;
    }
    else {
        throw "Type Error: Type Application applied to not Type Abstraction";
    }
}
void TypeOf_Fix(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    Fix *fix = dynamic_cast <Fix*> (expr);
    Type *type_;
    TypeOf(fix->expr_, type_, context_expr, context_local, context_type, constraint, var_num);
    if (FunType *fun_type = dynamic_cast <FunType*> (type_)) {
        constraint.push_back({fun_type->type_1, fun_type->type_2});
        type = fun_type->type_1->clone();
    }
    else {
        throw "Type Error: Function Type expected in Fix";
    }
}
void TypeOf_Where(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    Where *where = dynamic_cast <Where*> (expr);
    std::string str = itos_nl(0);
    Substitute(where->expr_1, str, where->expr_2);
    TypeOf(where->expr_1, type, context_expr, context_local, context_type, constraint, var_num);
}
void TypeOf_Reference(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    Reference *reference = dynamic_cast <Reference*> (expr);
    Type *t_;
    TypeOf(reference->expr_, t_, context_expr, context_local, context_type, constraint, var_num);
    type = new RefType(t_);
}
void TypeOf_Dereference(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    Dereference *dereference = dynamic_cast <Dereference*> (expr);
    Type *t_;
    TypeOf(dereference->expr_, t_, context_expr, context_local, context_type, constraint, var_num);
    if (RefType *ref_type = dynamic_cast <RefType*> (t_)) {
        type = ref_type->type_;
    }
    else {
        throw "Type Error: Dereference applied to not Reference";
    }
}
void TypeOf_Tuple(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    Tuple *tuple = dynamic_cast <Tuple*> (expr);
    TupleType *tuple_type = new TupleType(new ListType);
    for (ListExpr::iterator i = tuple->listexpr_->begin(); i != tuple->listexpr_->end(); i++) {
        Type *type_;
        TypeOf(*i, type_, context_expr, context_local, context_type, constraint, var_num);
        tuple_type->listtype_->push_back(type_);
    }
    type = tuple_type;
}
void TypeOf_TupleGet(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    TupleGet *tuple_get = dynamic_cast <TupleGet*> (expr);
    Type *type_;
    TypeOf(tuple_get->expr_, type_, context_expr, context_local, context_type, constraint, var_num);
    if (TupleType *tuple_type = dynamic_cast <TupleType*> (type_)) {
        if (tuple_get->integer_ < 1 or tuple_get->integer_ > tuple_type->listtype_->size()) {
            throw "Type Error: Tuple index out of bound";
        }
        type = (*(tuple_type->listtype_))[tuple_get->integer_ - 1]->clone();
        delete type_;
    }
    else {
        throw "Type Error: Tuple Indexation applied to not Tuple";
    }
}
void TypeOf_Record(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    Record *record = dynamic_cast <Record*> (expr);
    RecordType *record_type = new RecordType(new ListRecordTypeField_);
    for (ListRecordField_::iterator i = record->listrecordfield__->begin(); i != record->listrecordfield__->end(); i++) {
        Type *type_;
        RecordField *record_field = dynamic_cast <RecordField*> (*i);
        TypeOf(record_field->expr_, type_, context_expr, context_local, context_type, constraint, var_num);
        RecordTypeField *record_type_field = new RecordTypeField(record_field->ident_, type_);
        record_type->listrecordtypefield__->push_back(record_type_field);
    }
    type = record_type;
}
void TypeOf_RecordGet(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    RecordGet *record_get = dynamic_cast <RecordGet*> (expr);
    Type *type_;
    TypeOf(record_get->expr_, type_, context_expr, context_local, context_type, constraint, var_num);
    if (RecordType *record_type = dynamic_cast <RecordType*> (type_)) {
        for (ListRecordTypeField_::iterator i = record_type->listrecordtypefield__->begin(); i != record_type->listrecordtypefield__->end(); i++) {
            RecordTypeField *record_type_field = dynamic_cast <RecordTypeField*> (*i);
            if (record_type_field->ident_ == record_get->ident_) {
                type = record_type_field->type_->clone();
                delete type_;
                return;
            }
        }
        throw "Type Error: Record has no such key";
    }
    else {
        throw "Type Error: Record Indexation applied to not Record";
    }
}
void TypeOf_Variant(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    Variant *variant = dynamic_cast <Variant*> (expr);
    if (VariantType *variant_type = dynamic_cast <VariantType*> (variant->type_)) {    
        for (ListVariantTypeField_::iterator i = variant_type->listvarianttypefield__->begin(); i != variant_type->listvarianttypefield__->end(); i++) {
            VariantTypeField *variant_type_field = dynamic_cast <VariantTypeField*> (*i);
            if (variant_type_field->ident_ == variant->ident_) {
                Type *t_;
                TypeOf(variant->expr_, t_, context_expr, context_local, context_type, constraint, var_num);
                constraint.push_back({t_, variant_type_field->type_->clone()});
                type = variant->type_;
                return;
            }
        }
        throw "Type Error: Variant has no such key";
    }
    else {
        throw "Type Error: Variant type annotation is not VariantType";
    }
}
void TypeOf_VariantCase(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    VariantCase *variant_case = dynamic_cast <VariantCase*> (expr);
    Type *t_;
    TypeOf(variant_case->expr_, t_, context_expr, context_local, context_type, constraint, var_num);
    bool first = true;
    if (VariantType *variant_type = dynamic_cast <VariantType*> (t_)) {    
        for (ListVariantField_::iterator i = variant_case->listvariantfield__->begin(); i != variant_case->listvariantfield__->end(); i++) {
            VariantField *variant_field = dynamic_cast <VariantField*> (*i);
            bool found = false;
            for (ListVariantTypeField_::iterator j = variant_type->listvarianttypefield__->begin(); j != variant_type->listvarianttypefield__->end(); j++) {
                VariantTypeField *variant_type_field = dynamic_cast <VariantTypeField*> (*j);
                if (variant_field->ident_1 == variant_type_field->ident_) {
                    context_expr.push_back({variant_field->ident_2, new VarType (itos_meta(var_num))});
                    constraint.push_back({variant_type_field->type_->clone(), new VarType (itos_meta(var_num))});
                    var_num++;
                    TypeOf(variant_field->expr_, t_, context_expr, context_local, context_type, constraint, var_num);
                    context_expr.pop_back();
                    if (!first) {
                        constraint.push_back({type->clone(), t_});
                        first = false;
                    }
                    type = t_;
                    found = true;
                    break;
                }
            }
            if (!found) {
                throw "Type Error: Variant has no such key";
            }
        }
    }
    else {
        throw "Type Error: Variant Case applied to not Variant";
    }
}
void TypeOf_Array(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    Array *array = dynamic_cast <Array*> (expr);
    Type *t_1;
    bool first = true;
    if (array->listexpr_->empty()) {
        throw "Type Error: const Array could not be empty";
    }
    for (ListExpr::iterator i = array->listexpr_->begin(); i != array->listexpr_->end(); i++) {
        if (first) {
            TypeOf(*i, t_1, context_expr, context_local, context_type, constraint, var_num);
            first = false;
        }
        else {
            Type *t_2;
            TypeOf(*i, t_2, context_expr, context_local, context_type, constraint, var_num);
            constraint.push_back({t_1->clone(), t_2});
        }
    }
    type = new ArrayType(t_1);
}
void TypeOf_ArrayGet(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    ArrayGet *array_get = dynamic_cast <ArrayGet*> (expr);
    Type *t_1, *t_2;
    TypeOf(array_get->expr_1, t_1, context_expr, context_local, context_type, constraint, var_num);
    TypeOf(array_get->expr_2, t_2, context_expr, context_local, context_type, constraint, var_num);
    if (RefType *ref_type = dynamic_cast <RefType*> (t_1)) {
        if (ArrayType *array_type = dynamic_cast <ArrayType*> (ref_type->type_)) {
            type = array_type->type_->clone();
            delete t_1;
            constraint.push_back({t_2, new IntType()});
        }
    }
    else {
        throw "Type Error: Array Get is applied to not Reference to Array";
    }
}
void TypeOf_ArrayPush(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    ArrayPush *array_push = dynamic_cast <ArrayPush*> (expr);
    Type *t_1, *t_2;
    TypeOf(array_push->expr_1, t_1, context_expr, context_local, context_type, constraint, var_num);
    TypeOf(array_push->expr_2, t_2, context_expr, context_local, context_type, constraint, var_num);
    if (RefType *ref_type = dynamic_cast <RefType*> (t_1)) {
        if (ArrayType *array_type = dynamic_cast <ArrayType*> (ref_type->type_)) {
            constraint.push_back({array_type->type_->clone(), t_2});
            delete t_1;
            type = new BoolType();
        }
    }
    else {
        throw "Type Error: Array Push is applied to not Reference to Array";
    }
}
void TypeOf_ArrayPop(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    ArrayPop *array_pop = dynamic_cast <ArrayPop*> (expr);
    Type *t_;
    TypeOf(array_pop->expr_, t_, context_expr, context_local, context_type, constraint, var_num);
    if (RefType *ref_type = dynamic_cast <RefType*> (t_)) {
        if (ArrayType *array_type = dynamic_cast <ArrayType*> (ref_type->type_)) {
            delete t_;
            type = new BoolType();
            return;
        }
    }
    throw "Type Error: Array Pop is applied to not Reference to Array";
}
void TypeOf_ArrayLen(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    ArrayLen *array_len = dynamic_cast <ArrayLen*> (expr);
    Type *t_;
    TypeOf(array_len->expr_, t_, context_expr, context_local, context_type, constraint, var_num);
    if (RefType *ref_type = dynamic_cast <RefType*> (t_)) {
        if (ArrayType *array_type = dynamic_cast <ArrayType*> (ref_type->type_)) {
            delete t_;
            type = new IntType();
            return;
        }
    }
    throw "Type Error: Array Len is applied to not Reference to Array";
}

void TypeOf_ConstInt(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    type = new IntType();
}
void TypeOf_ToInt(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    ToInt *to_int = dynamic_cast <ToInt*> (expr);
    Type *type_;
    TypeOf(to_int->expr_, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new RealType()});
    type = new IntType();
}
void TypeOf_AddInt(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    AddInt *add_int = dynamic_cast <AddInt*> (expr);
    Type *type_;
    TypeOf(add_int->expr_1, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new IntType()});
    TypeOf(add_int->expr_2, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new IntType()});
    type = new IntType();
}
void TypeOf_SubInt(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    SubInt *sub_int = dynamic_cast <SubInt*> (expr);
    Type *type_;
    TypeOf(sub_int->expr_1, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new IntType()});
    TypeOf(sub_int->expr_2, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new IntType()});
    type = new IntType();
}
void TypeOf_MulInt(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    MulInt *mul_int = dynamic_cast <MulInt*> (expr);
    Type *type_;
    TypeOf(mul_int->expr_1, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new IntType()});
    TypeOf(mul_int->expr_2, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new IntType()});
    type = new IntType();
}
void TypeOf_DivInt(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    DivInt *div_int = dynamic_cast <DivInt*> (expr);
    Type *type_;
    TypeOf(div_int->expr_1, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new IntType()});
    TypeOf(div_int->expr_2, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new IntType()});
    type = new IntType();
}
void TypeOf_EquInt(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    EquInt *equ_int = dynamic_cast <EquInt*> (expr);
    Type *type_;
    TypeOf(equ_int->expr_1, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new IntType()});
    TypeOf(equ_int->expr_2, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new IntType()});
    type = new BoolType();
}
void TypeOf_LesInt(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    LesInt *les_int = dynamic_cast <LesInt*> (expr);
    Type *type_;
    TypeOf(les_int->expr_1, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new IntType()});
    TypeOf(les_int->expr_2, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new IntType()});
    type = new BoolType();
}

void TypeOf_ConstReal(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    type = new RealType();
}
void TypeOf_ToReal(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    ToReal *to_real = dynamic_cast <ToReal*> (expr);
    Type *type_;
    TypeOf(to_real->expr_, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new IntType()});
    type = new RealType();
}
void TypeOf_AddReal(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    AddReal *add_real = dynamic_cast <AddReal*> (expr);
    Type *type_;
    TypeOf(add_real->expr_1, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new RealType()});
    TypeOf(add_real->expr_2, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new RealType()});
    type = new RealType();
}
void TypeOf_SubReal(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    SubReal *sub_real = dynamic_cast <SubReal*> (expr);
    Type *type_;
    TypeOf(sub_real->expr_1, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new RealType()});
    TypeOf(sub_real->expr_2, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new RealType()});
    type = new RealType();
}
void TypeOf_MulReal(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    MulReal *mul_real = dynamic_cast <MulReal*> (expr);
    Type *type_;
    TypeOf(mul_real->expr_1, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new RealType()});
    TypeOf(mul_real->expr_2, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new RealType()});
    type = new RealType();
}
void TypeOf_DivReal(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    DivReal *div_real = dynamic_cast <DivReal*> (expr);
    Type *type_;
    TypeOf(div_real->expr_1, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new RealType()});
    TypeOf(div_real->expr_2, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new RealType()});
    type = new RealType();
}
void TypeOf_EquReal(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    EquReal *equ_real = dynamic_cast <EquReal*> (expr);
    Type *type_;
    TypeOf(equ_real->expr_1, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new RealType()});
    TypeOf(equ_real->expr_2, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new RealType()});
    type = new BoolType();
}
void TypeOf_LesReal(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    LesReal *les_real = dynamic_cast <LesReal*> (expr);
    Type *type_;
    TypeOf(les_real->expr_1, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new RealType()});
    TypeOf(les_real->expr_2, type_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({type_, new RealType()});
    type = new BoolType();
}

void TypeOf_ReadInt(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    type = new IntType();
}
void TypeOf_ReadReal(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    type = new RealType();
}
void TypeOf_WriteInt(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    WriteInt *write_int = dynamic_cast <WriteInt*> (expr);
    Type *t_;
    TypeOf(write_int->expr_, t_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({t_, new IntType()});
}
void TypeOf_WriteReal(Expr *expr, Type *&type, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    WriteReal *write_real = dynamic_cast <WriteReal*> (expr);
    Type *t_;
    TypeOf(write_real->expr_, t_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({t_, new RealType()});
}

void TypeOf(Statement *expr, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    if (dynamic_cast <Definition*> (expr)) {
        TypeOf_Definition(expr, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <TypeDefinition*> (expr)) {
        TypeOf_TypeDefinition(expr, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <Assignment*> (expr)) {
        TypeOf_Assignment(expr, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <IfStatement*> (expr)) {
        TypeOf_IfStatement(expr, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <IfElseStatement*> (expr)) {
        TypeOf_IfElseStatement(expr, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <Loop*> (expr)) {
        TypeOf_Loop(expr, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <Break*> (expr)) {
        TypeOf_Break(expr, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <Continue*> (expr)) {
        TypeOf_Continue(expr, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <Return*> (expr)) {
        TypeOf_Return(expr, context_expr, context_local, context_type, constraint, var_num); return;
    }
    if (dynamic_cast <Eval*> (expr)) {
        TypeOf_Eval(expr, context_expr, context_local, context_type, constraint, var_num); return;
    }
}

void TypeOf_Definition(Statement *expr, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    Definition *definition = dynamic_cast <Definition*> (expr);
    Type *t_;
    TypeOf(definition->expr_, t_, context_expr, context_local, context_type, constraint, var_num);
    context_local.push_back({definition->ident_, t_});
    if (!dynamic_cast <AutoType*> (definition->type_)) {
        TypeToNameless(definition->type_, context_type);
        constraint.push_back({t_->clone(), definition->type_->clone()});
    }
}
void TypeOf_TypeDefinition(Statement *expr, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    TypeDefinition *type_definition = dynamic_cast <TypeDefinition*> (expr);
    context_type.push_back({type_definition->ident_, type_definition->type_->clone()});
}
void TypeOf_Assignment(Statement *expr, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    Assignment *assignment = dynamic_cast <Assignment*> (expr);
    Type *t_1;
    TypeOf(assignment->expr_1, t_1, context_expr, context_local, context_type, constraint, var_num);
    if (RefType *ref_type = dynamic_cast <RefType*> (t_1)) {
        Type *t_2;
        TypeOf(assignment->expr_2, t_2, context_expr, context_local, context_type, constraint, var_num);
        constraint.push_back({ref_type->type_->clone(), t_2});
        delete t_1;
    }
    else {
        throw "Type Error: Assignment applied to not Reference";
    }
}
void TypeOf_IfStatement(Statement *expr, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    IfStatement *if_statement = dynamic_cast <IfStatement*> (expr);
    
    Type *t_;
    TypeOf(if_statement->expr_, t_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({t_, new BoolType()});
    
    TypeOf(if_statement->liststatement_, context_expr, context_local, context_type, constraint, var_num);
}
void TypeOf_IfElseStatement(Statement *expr, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    IfElseStatement *if_else_statement = dynamic_cast <IfElseStatement*> (expr);
    
    Type *t_;
    TypeOf(if_else_statement->expr_, t_, context_expr, context_local, context_type, constraint, var_num);
    constraint.push_back({t_, new BoolType()});
    
    TypeOf(if_else_statement->liststatement_1, context_expr, context_local, context_type, constraint, var_num);
    TypeOf(if_else_statement->liststatement_2, context_expr, context_local, context_type, constraint, var_num);
}
void TypeOf_Loop(Statement *expr, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    Loop *loop = dynamic_cast <Loop*> (expr);
    TypeOf(loop->liststatement_, context_expr, context_local, context_type, constraint, var_num);
}
void TypeOf_Break(Statement *expr, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) { }
void TypeOf_Continue(Statement *expr, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) { }
void TypeOf_Return(Statement *expr, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) { }
void TypeOf_Eval(Statement *expr, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    Eval *eval = dynamic_cast <Eval*> (expr);
    Type *t_;
    TypeOf(eval->expr_, t_, context_expr, context_local, context_type, constraint, var_num);
}

void TypeOf(ListStatement *list, ContextIT &context_expr, ContextIT &context_local, ContextIT &context_type, Constraint &constraint, int &var_num) {
    size_t context_size = context_local.size();
    size_t context_type_size = context_type.size();
    for (ListStatement::iterator i = list->begin(); i != list->end(); i++) {
        TypeOf(*i, context_expr, context_local, context_type, constraint, var_num);
    }
    while (context_local.size() > context_size) {
        delete context_local.back().second;
        context_local.pop_back();
    }
    while (context_type.size() > context_type_size) {
        delete context_type.back().second;
        context_local.pop_back();
    }
}
