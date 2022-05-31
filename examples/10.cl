import "../stl/func.cl";

typedef rec = {x : Nat, y : Nat -> Nat};
def _ f = fun (rec r) { ret r.y r.x };

def _ foo = uni X ~> fun (X x) { ret x };
def _ boo = foo [Nat] succ $0;

def _ apply = uni X ~> uni Y ~> fun (X x) { ret fun (X -> Y y) { ret y x }};
def _ goo = apply [Nat] [Bool] succ $0 (fun (_ x) { ret iszero x});

def Ref [Bool] a = func.map [Int] [Bool] (fun (_ x) { ret x i- x i/ 2 i* 2 i= 0 }) (func.range 1 5);
def _ l = len (a);
def _ i = ref 0;
loop {
    if (*i i= l) {
        break;
    };
    if (get (a, *i)) {
        eval writeInt 1;
    }
    else {
        eval writeInt 0;
    };
    i <- *i i+ 1;
};

eval writeInt func.foldl [Int] (fun (_ x, _ y) { ret x i- y }) 0 (func.range 1 5);
eval writeInt func.foldr [Int] (fun (_ x, _ y) { ret x i- y }) 0 (func.range 1 5);
