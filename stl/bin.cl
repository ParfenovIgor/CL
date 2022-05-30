def _ bin = {
    not = fun (_ x) {
        ret if x then false else true
    },
    and = fun (_ x, _ y) {
        ret if x then if y then true else false else false
    },
    or = fun (_ x, _ y) {
        ret if x then true else if y then true else false
    },
    xor = fun (_ x, _ y) {
        ret if x then if y then false else true else if y then true else false
    },
    les = fun (_ x, _ y) {
        ret x i< y
    },
    les_eq = fun (_ x, _ y) {
        ret if x i= y then true else x i< y
    },
    gre = fun (_ x, _ y) {
        ret if x i= y then false else if x i< y then false else true
    },
    gre_eq = fun (_ x, _ y) {
        ret if x i< y then false else true
    },
    rles = fun (_ x, _ y) {
        ret x r< y
    },
    rles_eq = fun (_ x, _ y) {
        ret if x r= y then true else x r< y
    },
    rgre = fun (_ x, _ y) {
        ret if x r= y then false else if x r< y then false else true
    },
    rgre_eq = fun (_ x, _ y) {
        ret if x r< y then false else true
    },
};
