def _ algo = {
    print = fun (Ref [Ref Int] a) {
        def _ l = len (a);
        def _ i = ref 0;
        loop {
            if (*i i= l) {
                break;
            };
            eval writeInt *get (a, *i);
            i <- *i i+ 1;
        };
        ret true
    },

    reverse = fun (Ref [Ref Int] a) {
        def _ l = len (a);
        def _ i = ref 0;
        loop {
            def _ t = *get (a, *i);
            get (a, *i) <- *get (a, l i- *i i- 1);
            get (a, l i- *i i- 1) <- t;
            i <- *i i+ 1;
            if (*i i= l i/ 2) {
                break;
            };
        };
        ret true
    },

    sort = fun (Ref [Ref Int] a) {
        def _ l = len (a);
        def _ i = ref 0;
        loop {
            def _ j = ref (*i i+ 1);
            loop {
                if (*get (a, *j) i< *get (a, *i)) {
                    def _ t = *get (a, *i);
                    get (a, *i) <- *get (a, *j);
                    get (a, *j) <- t;
                };
                j <- *j i+ 1;
                if (*j i= l) {
                    break;
                };
            };
            i <- *i i+ 1;
            if (*i i+ 1 i= l) {
                break;
            };
        };
        ret true
    },

    lower_bound = fun (Ref [Ref Int] a, Int x) {
        def _ l = len (a);
        def _ lx = ref 0;
        def _ rx = ref (l i- 1);
        loop {
            def _ m = (*lx i+ *rx) i/ 2;
            if (*get (a, m) i< x) {
                lx <- m i+ 1;
            }
            else {
                rx <- m;
            };
            if (*lx i< *rx) {
                continue;
            };
            break;
        };
        ret *lx
    },

    upper_bound = fun (Ref [Ref Int] a, Int x) {
        def _ l = len (a);
        def _ lx = ref 0;
        def _ rx = ref (l i- 1);
        loop {
            def _ m = (*lx i+ *rx) i/ 2;
            if (*get (a, m) i< x i+ 1) {
                lx <- m i+ 1;
            }
            else {
                rx <- m;
            };
            if (*lx i< *rx) {
                continue;
            };
            break;
        };
        ret *lx
    },
};
