/* File generated by the BNF Converter (bnfc 2.9.4). */

#ifndef PRINTER_HEADER
#define PRINTER_HEADER

#include "Absyn.H"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>


/* Certain applications may improve performance by changing the buffer size */
#define BUFFER_INITIAL 2000
/* You may wish to change _L_PAREN or _R_PAREN */
#define _L_PAREN '('
#define _R_PAREN ')'

class PrintAbsyn : public Visitor
{
 protected:
  int _n_, _i_;
  /* The following are simple heuristics for rendering terminals */
  /* You may wish to change them */
  void render(Char c);
  void render(String s);
  void render(const char *s);
  void indent(void);
  void backup(void);
  void onEmptyLine(void);
  void removeTrailingSpaces(void);
  void removeTrailingWhitespace(void);
 public:
  PrintAbsyn(void);
  ~PrintAbsyn(void);
  char *print(Visitable *v);

  void visitProgram(Program *p); /* abstract class */
  void visitProgramRoot(ProgramRoot *p);
  void visitListExpr(ListExpr *p);
  void iterListExpr(ListExpr::const_iterator i, ListExpr::const_iterator j);
  void visitExpr(Expr *p); /* abstract class */
  void visitConstTrue(ConstTrue *p);
  void visitConstFalse(ConstFalse *p);
  void visitConstZero(ConstZero *p);
  void visitVar(Var *p);
  void visitTuple(Tuple *p);
  void visitTupleGet(TupleGet *p);
  void visitRecord(Record *p);
  void visitRecordGet(RecordGet *p);
  void visitVariant(Variant *p);
  void visitVariantCase(VariantCase *p);
  void visitArray(Array *p);
  void visitArrayEmpty(ArrayEmpty *p);
  void visitArrayGet(ArrayGet *p);
  void visitArrayPush(ArrayPush *p);
  void visitArrayPop(ArrayPop *p);
  void visitArrayLen(ArrayLen *p);
  void visitConstInt(ConstInt *p);
  void visitConstReal(ConstReal *p);
  void visitIf(If *p);
  void visitSucc(Succ *p);
  void visitPred(Pred *p);
  void visitIsZero(IsZero *p);
  void visitToInt(ToInt *p);
  void visitToReal(ToReal *p);
  void visitAbstraction(Abstraction *p);
  void visitMultiAbstraction(MultiAbstraction *p);
  void visitTypeAbstraction(TypeAbstraction *p);
  void visitFix(Fix *p);
  void visitReadInt(ReadInt *p);
  void visitReadReal(ReadReal *p);
  void visitWriteInt(WriteInt *p);
  void visitWriteReal(WriteReal *p);
  void visitApplication(Application *p);
  void visitTypeApplication(TypeApplication *p);
  void visitWhere(Where *p);
  void visitMultiWhere(MultiWhere *p);
  void visitReference(Reference *p);
  void visitDereference(Dereference *p);
  void visitAddInt(AddInt *p);
  void visitSubInt(SubInt *p);
  void visitAddReal(AddReal *p);
  void visitSubReal(SubReal *p);
  void visitMulInt(MulInt *p);
  void visitDivInt(DivInt *p);
  void visitMulReal(MulReal *p);
  void visitDivReal(DivReal *p);
  void visitEquInt(EquInt *p);
  void visitLesInt(LesInt *p);
  void visitEquReal(EquReal *p);
  void visitLesReal(LesReal *p);
  void visitListAbstractionField_(ListAbstractionField_ *p);
  void iterListAbstractionField_(ListAbstractionField_::const_iterator i, ListAbstractionField_::const_iterator j);
  void visitAbstractionField_(AbstractionField_ *p); /* abstract class */
  void visitAbstractionField(AbstractionField *p);
  void visitListWhereField_(ListWhereField_ *p);
  void iterListWhereField_(ListWhereField_::const_iterator i, ListWhereField_::const_iterator j);
  void visitWhereField_(WhereField_ *p); /* abstract class */
  void visitWhereField(WhereField *p);
  void visitListRecordField_(ListRecordField_ *p);
  void iterListRecordField_(ListRecordField_::const_iterator i, ListRecordField_::const_iterator j);
  void visitRecordField_(RecordField_ *p); /* abstract class */
  void visitRecordField(RecordField *p);
  void visitListVariantField_(ListVariantField_ *p);
  void iterListVariantField_(ListVariantField_::const_iterator i, ListVariantField_::const_iterator j);
  void visitVariantField_(VariantField_ *p); /* abstract class */
  void visitVariantField(VariantField *p);
  void visitStatement(Statement *p); /* abstract class */
  void visitImport(Import *p);
  void visitDefinition(Definition *p);
  void visitTypeDefinition(TypeDefinition *p);
  void visitAssignment(Assignment *p);
  void visitIfStatement(IfStatement *p);
  void visitIfElseStatement(IfElseStatement *p);
  void visitLoop(Loop *p);
  void visitBreak(Break *p);
  void visitContinue(Continue *p);
  void visitReturn(Return *p);
  void visitEval(Eval *p);
  void visitListStatement(ListStatement *p);
  void iterListStatement(ListStatement::const_iterator i, ListStatement::const_iterator j);
  void visitListType(ListType *p);
  void iterListType(ListType::const_iterator i, ListType::const_iterator j);
  void visitType(Type *p); /* abstract class */
  void visitAutoType(AutoType *p);
  void visitBoolType(BoolType *p);
  void visitNatType(NatType *p);
  void visitRefType(RefType *p);
  void visitVarType(VarType *p);
  void visitUniType(UniType *p);
  void visitFunType(FunType *p);
  void visitTupleType(TupleType *p);
  void visitRecordType(RecordType *p);
  void visitVariantType(VariantType *p);
  void visitArrayType(ArrayType *p);
  void visitIntType(IntType *p);
  void visitRealType(RealType *p);
  void visitListRecordTypeField_(ListRecordTypeField_ *p);
  void iterListRecordTypeField_(ListRecordTypeField_::const_iterator i, ListRecordTypeField_::const_iterator j);
  void visitRecordTypeField_(RecordTypeField_ *p); /* abstract class */
  void visitRecordTypeField(RecordTypeField *p);
  void visitListVariantTypeField_(ListVariantTypeField_ *p);
  void iterListVariantTypeField_(ListVariantTypeField_::const_iterator i, ListVariantTypeField_::const_iterator j);
  void visitVariantTypeField_(VariantTypeField_ *p); /* abstract class */
  void visitVariantTypeField(VariantTypeField *p);

  void visitInteger(Integer i);
  void visitDouble(Double d);
  void visitChar(Char c);
  void visitString(String s);
  void visitIdent(String s);
 protected:
  char *buf_;
  size_t cur_, buf_size;

  void inline bufAppend(const char *s)
  {
    size_t end = cur_ + strlen(s);
    if (end >= buf_size) {
      do buf_size *= 2; /* Double the buffer size */
      while (end >= buf_size);
      resizeBuffer();
    }
    strcpy(&buf_[cur_], s);
    cur_ = end;
  }

  void inline bufAppend(const char c)
  {
    if (cur_ + 1 >= buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
      resizeBuffer();
    }
    buf_[cur_] = c;
    buf_[++cur_] = 0;
  }

  void inline bufAppend(String str)
  {
    const char *s = str.c_str();
    bufAppend(s);
  }
  void inline bufReset(void)
  {
    if (buf_) delete[] buf_;
    buf_size = BUFFER_INITIAL;
    buf_ = new char[buf_size];
    memset(buf_, 0, buf_size);
    cur_ = 0;
  }

  void inline resizeBuffer(void)
  {
    char *temp = new char[buf_size];
    if (buf_)
    {
      strcpy(temp, buf_);
      delete[] buf_;
    }
    buf_ = temp;
  }
};



class ShowAbsyn : public Visitor
{
 public:
  ShowAbsyn(void);
  ~ShowAbsyn(void);
  char *show(Visitable *v);

  void visitProgram(Program *p); /* abstract class */
  void visitProgramRoot(ProgramRoot *p);
  void visitListExpr(ListExpr *p);
  void iterListExpr(ListExpr::const_iterator i, ListExpr::const_iterator j);
  void visitExpr(Expr *p); /* abstract class */
  void visitConstTrue(ConstTrue *p);
  void visitConstFalse(ConstFalse *p);
  void visitConstZero(ConstZero *p);
  void visitVar(Var *p);
  void visitTuple(Tuple *p);
  void visitTupleGet(TupleGet *p);
  void visitRecord(Record *p);
  void visitRecordGet(RecordGet *p);
  void visitVariant(Variant *p);
  void visitVariantCase(VariantCase *p);
  void visitArray(Array *p);
  void visitArrayEmpty(ArrayEmpty *p);
  void visitArrayGet(ArrayGet *p);
  void visitArrayPush(ArrayPush *p);
  void visitArrayPop(ArrayPop *p);
  void visitArrayLen(ArrayLen *p);
  void visitConstInt(ConstInt *p);
  void visitConstReal(ConstReal *p);
  void visitIf(If *p);
  void visitSucc(Succ *p);
  void visitPred(Pred *p);
  void visitIsZero(IsZero *p);
  void visitToInt(ToInt *p);
  void visitToReal(ToReal *p);
  void visitAbstraction(Abstraction *p);
  void visitMultiAbstraction(MultiAbstraction *p);
  void visitTypeAbstraction(TypeAbstraction *p);
  void visitFix(Fix *p);
  void visitReadInt(ReadInt *p);
  void visitReadReal(ReadReal *p);
  void visitWriteInt(WriteInt *p);
  void visitWriteReal(WriteReal *p);
  void visitApplication(Application *p);
  void visitTypeApplication(TypeApplication *p);
  void visitWhere(Where *p);
  void visitMultiWhere(MultiWhere *p);
  void visitReference(Reference *p);
  void visitDereference(Dereference *p);
  void visitAddInt(AddInt *p);
  void visitSubInt(SubInt *p);
  void visitAddReal(AddReal *p);
  void visitSubReal(SubReal *p);
  void visitMulInt(MulInt *p);
  void visitDivInt(DivInt *p);
  void visitMulReal(MulReal *p);
  void visitDivReal(DivReal *p);
  void visitEquInt(EquInt *p);
  void visitLesInt(LesInt *p);
  void visitEquReal(EquReal *p);
  void visitLesReal(LesReal *p);
  void visitListAbstractionField_(ListAbstractionField_ *p);
  void iterListAbstractionField_(ListAbstractionField_::const_iterator i, ListAbstractionField_::const_iterator j);
  void visitAbstractionField_(AbstractionField_ *p); /* abstract class */
  void visitAbstractionField(AbstractionField *p);
  void visitListWhereField_(ListWhereField_ *p);
  void iterListWhereField_(ListWhereField_::const_iterator i, ListWhereField_::const_iterator j);
  void visitWhereField_(WhereField_ *p); /* abstract class */
  void visitWhereField(WhereField *p);
  void visitListRecordField_(ListRecordField_ *p);
  void iterListRecordField_(ListRecordField_::const_iterator i, ListRecordField_::const_iterator j);
  void visitRecordField_(RecordField_ *p); /* abstract class */
  void visitRecordField(RecordField *p);
  void visitListVariantField_(ListVariantField_ *p);
  void iterListVariantField_(ListVariantField_::const_iterator i, ListVariantField_::const_iterator j);
  void visitVariantField_(VariantField_ *p); /* abstract class */
  void visitVariantField(VariantField *p);
  void visitStatement(Statement *p); /* abstract class */
  void visitImport(Import *p);
  void visitDefinition(Definition *p);
  void visitTypeDefinition(TypeDefinition *p);
  void visitAssignment(Assignment *p);
  void visitIfStatement(IfStatement *p);
  void visitIfElseStatement(IfElseStatement *p);
  void visitLoop(Loop *p);
  void visitBreak(Break *p);
  void visitContinue(Continue *p);
  void visitReturn(Return *p);
  void visitEval(Eval *p);
  void visitListStatement(ListStatement *p);
  void iterListStatement(ListStatement::const_iterator i, ListStatement::const_iterator j);
  void visitListType(ListType *p);
  void iterListType(ListType::const_iterator i, ListType::const_iterator j);
  void visitType(Type *p); /* abstract class */
  void visitAutoType(AutoType *p);
  void visitBoolType(BoolType *p);
  void visitNatType(NatType *p);
  void visitRefType(RefType *p);
  void visitVarType(VarType *p);
  void visitUniType(UniType *p);
  void visitFunType(FunType *p);
  void visitTupleType(TupleType *p);
  void visitRecordType(RecordType *p);
  void visitVariantType(VariantType *p);
  void visitArrayType(ArrayType *p);
  void visitIntType(IntType *p);
  void visitRealType(RealType *p);
  void visitListRecordTypeField_(ListRecordTypeField_ *p);
  void iterListRecordTypeField_(ListRecordTypeField_::const_iterator i, ListRecordTypeField_::const_iterator j);
  void visitRecordTypeField_(RecordTypeField_ *p); /* abstract class */
  void visitRecordTypeField(RecordTypeField *p);
  void visitListVariantTypeField_(ListVariantTypeField_ *p);
  void iterListVariantTypeField_(ListVariantTypeField_::const_iterator i, ListVariantTypeField_::const_iterator j);
  void visitVariantTypeField_(VariantTypeField_ *p); /* abstract class */
  void visitVariantTypeField(VariantTypeField *p);

  void visitInteger(Integer i);
  void visitDouble(Double d);
  void visitChar(Char c);
  void visitString(String s);
  void visitIdent(String s);
 protected:
  char *buf_;
  size_t cur_, buf_size;

  void inline bufAppend(const char *s)
  {
    size_t end = cur_ + strlen(s);
    if (end >= buf_size) {
      do buf_size *= 2; /* Double the buffer size */
      while (end >= buf_size);
      resizeBuffer();
    }
    strcpy(&buf_[cur_], s);
    cur_ = end;
  }

  void inline bufAppend(const char c)
  {
    if (cur_ + 1 >= buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
      resizeBuffer();
    }
    buf_[cur_] = c;
    buf_[++cur_] = 0;
  }

  void inline bufAppend(String str)
  {
    const char *s = str.c_str();
    bufAppend(s);
  }
  void inline bufReset(void)
  {
    if (buf_) delete[] buf_;
    buf_size = BUFFER_INITIAL;
    buf_ = new char[buf_size];
    memset(buf_, 0, buf_size);
    cur_ = 0;
  }

  void inline resizeBuffer(void)
  {
    char *temp = new char[buf_size];
    if (buf_)
    {
      strcpy(temp, buf_);
      delete[] buf_;
    }
    buf_ = temp;
  }
};




#endif

