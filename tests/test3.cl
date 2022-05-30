def _ a = ref 3;
a <- (*a) i+ 2 i* 2;
eval writeInt *a;

def _ b = a;
b <- *b i+ 1;
eval writeInt *a;

def _ c = ref 0;
c <- *a;
c <- *c i+ 1;
eval writeInt *a;

def _ foo = fun (Ref Int x) { x <- *x i+ 1; ret true };
eval foo(a);
eval foo(b);
eval writeInt *a;
