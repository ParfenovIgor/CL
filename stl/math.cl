def _ math = {
    mod = fun (_ x, _y) {
        ret x i- x i/ y i* y 
    },
    abs = fun (_ x) {
        ret if x i< 0 then 0 i- x else x
    },
    rabs = fun (_ x) {
        ret if x r< 0.0 then 0.0 r- x else x
    },
    neg = fun (_ x) {
        ret 0 i- x
    },
    rneg = fun (_ x) {
        ret 0.0 r- x
    },
    riszero = fun (_ x, _ eps) {
        ret if x r< eps then if 0.0 r- eps r< x then true else false else false
    },
    gcd = fix fun (_ gcd) {
        ret fun (_ a, _ b) {
            ret if a i= 0 then b else gcd (b i- b i/ a i* a) a
        }
    },
    lcm = fun (_ a, _b) {
        ret a i/ ((fix fun (_ gcd) {
            ret fun (_ a, _ b) {
                ret if a i= 0 then b else gcd (b i- b i/ a i* a) a
            }
        }) a b) i* b
    },
    sqr = fun (_ x) {
        ret x i* x
    },
    fsqr = fun (_ x) {
        ret x r* x
    },
    pow = fun (_ a, _ n) {
        def _ mul = ref a;
        def _ deg = ref n;
        def _ res = ref 1;
        loop {
            if (*deg i- *deg i/ 2 i* 2 i= 1) {
                res <- *res i* *mul;
            };
            mul <- *mul i* *mul;
            deg <- *deg i/ 2;
            if (*deg i= 0) {
                break;
            };
        };
        ret *res
    },
    sqrt = fun (_ x) {
        def _ n = ref 1.0;
        def _ i = ref 0;
        loop {
            n <- (*n r+ x r/ *n) r/ 2.0;
            i <- *i i+ 1;
            if (*i i= 10) {
                break;
            };
        };
        ret *n
    },
    pi = 3.141592654,
    sin = fun (_ x) {
        def _ pi = 3.141592654;
        def _ y = x r- (toReal (toInt (x r/ pi))) r* pi;
        ret y r- (y r* y r* y r/ 6.0) r+ (y r* y r* y r* y r* y r/ 120.0)
    },
    cos = fun (_ x) {
        def _ pi = 3.141592654;
        def _ y = x r- (toReal (toInt (x r/ pi))) r* pi;
        ret 1.0 r- (y r* y r/ 2.0) r+ (y r* y r* y r* y r/ 24.0) r- (y r* y r* y r* y r* y r* y r/ 720.0)
    },
};
