eval id (fun (_ x) { ret iszero (id x) }) succ $0
    where _ id = fun (_ x) { ret x };
