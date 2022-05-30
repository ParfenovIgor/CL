import "../stl/func.cl";
import "../stl/algo.cl";

typedef rec = {x : Nat, y : Nat -> Nat};
def _ f = fun (rec r) { ret r.y r.x };

def _ foo = uni X ~> fun (X x) { ret x };
def _ boo = foo [Nat] succ $0;

def _ apply = uni X ~> uni Y ~> fun (X x) { ret fun (X -> Y y) { ret y x }};
def _ goo = apply [Nat] [Bool] succ $0 (fun (_ x) { ret iszero x});

def _ a = func.range 1 5;
eval func.map [Int] [Int] (fun (_ x) { ret x i* 2 }) a;
eval algo.print a;

eval writeInt func.foldl [Int] (fun (_ x, _ y) { ret x i- y }) 0 (func.range 1 5);
eval writeInt func.foldr [Int] (fun (_ x, _ y) { ret x i- y }) 0 (func.range 1 5);
