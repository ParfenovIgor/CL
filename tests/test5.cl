def _ sqr = fun (_ x) { ret x i* x };
def _ apply_double = fun (_ f, _ x) { ret f (f x) };
eval writeInt (apply_double sqr 3);
def _ apply_fourfold = fun (_ f, _ x) {
    def _ apply_double = fun (_ f, _ x) { ret f (f x) }; 
    ret apply_double (apply_double f) x
};
eval writeInt (apply_fourfold sqr 3);

def _ sum = fix fun (_ f) {
    ret fun (_ x) {
        ret fun (_ y) {
            ret if iszero y
                then x
                else (f (succ x) (pred y))
        }
    }
};
eval sum (succ succ succ $0) (succ succ $0);
