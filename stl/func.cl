def _ func = {
    map = uni X ~> uni Y ~> fun (X -> Y f, Ref [Ref X] a) {
        def _ l = len (a);
        def _ i = ref 0;
        loop {
            if (*i i= l) {
                break;
            };
            get (a, *i) <- f (*get (a, *i));
            i <- *i i+ 1;
        };
        ret true
    },
    foldl = uni X ~> fun (X -> X -> X f, X z, Ref [Ref X] a) {
        def _ l = len (a);
        def _ i = ref 0;
        def Ref X cur = ref z;
        loop {
            if (*i i= l) {
                break;
            };
            cur <- f (*cur) (*get (a, *i));
            i <- *i i+ 1;
        };
        ret *cur
    },
    foldr = uni X ~> fun (X -> X -> X f, X z, Ref [Ref X] a) {
        def _ l = len (a);
        def _ i = ref (l i- 1);
        def Ref X cur = ref z;
        loop {
            if (*i i< 0) {
                break;
            };
            cur <- f (*get (a, *i)) (*cur);
            i <- *i i- 1;
        };
        ret *cur
    },
    range = fun (_ l, _ r) {
        def _ a = ref [ref l];
        if (r i< l) {
            eval pop (a);
        };
        def _ i = ref (l i+ 1);
        loop {
            if (r i< *i) {
                break;
            };
            def _ j = ref 0;
            j <- *i;
            eval push (a, j);
            i <- *i i+ 1;
        };
        ret a
    },
};
