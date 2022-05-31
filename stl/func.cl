def _ func = {
    map = uni X ~> uni Y ~> fun (X -> Y f, Ref [X] a) {
        def _ l = len (a);
        def _ i = ref 0;
        def _ b = ref (\0 [Y]);
        loop {
            if (*i i= l) {
                break;
            };
            eval push (b, f (get (a, *i)));
            i <- *i i+ 1;
        };
        ret b
    },

    foldl = uni X ~> fun (X -> X -> X f, X z, Ref [X] a) {
        def _ l = len (a);
        def _ i = ref 0;
        def Ref X cur = ref z;
        loop {
            if (*i i= l) {
                break;
            };
            cur <- f *cur get (a, *i);
            i <- *i i+ 1;
        };
        ret *cur
    },

    foldr = uni X ~> fun (X -> X -> X f, X z, Ref [X] a) {
        def _ l = len (a);
        def _ i = ref (l i- 1);
        def Ref X cur = ref z;
        loop {
            if (*i i< 0) {
                break;
            };
            cur <- f get (a, *i) *cur;
            i <- *i i- 1;
        };
        ret *cur
    },

    range = fun (_ l, _ r) {
        def _ a = ref (\0 [Int]);
        def _ i = ref l;
        loop {
            if (r i< *i) {
                break;
            };
            eval push (a, *i);
            i <- *i i+ 1;
        };
        ret a
    },
};
