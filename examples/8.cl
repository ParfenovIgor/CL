def _ print_array = fun (Ref [Int] a) {
    def _ l = len (a);
    def _ i = ref 0;
    loop {
        if (*i i= l) {
            break;
        };
        eval writeInt get (a, *i);
        i <- *i i+ 1;
    };
    ret true
};

def _ x = ref [1, 2, 3];
eval writeInt get (x, 2);

eval print_array x;

eval push (x, 4);
eval print_array x;

eval pop (x);
eval print_array x;

def _ p = ref [ref 1, ref 2, ref 3];
eval writeInt *(get (p, 2));
get (p, 2) <- 4;
eval writeInt *(get (p, 2));
