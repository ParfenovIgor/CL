def _ a = <succ $0, fun (_ x) { ret iszero x }>;
def _ b = a.2 a.1;

def _ c = {x = succ $0, y = fun (_x) { ret iszero x }};
def _ d = c.y c.x;

def _ e = <y = fun (_x) { ret iszero x }> as <x : Bool, y : Nat -> Bool>;
def _ f = case e of
        <x = X> => X |
        <y = Y> => Y $0;
