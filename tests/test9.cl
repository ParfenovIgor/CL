import "../stl/algo.cl" ;

def _ a = ref [ref 5, ref 1, ref 6, ref 2, ref 3];
eval algo.reverse a;
eval algo.print a;
eval algo.sort a;
eval algo.print a;

def _ n = 200;
def _ b = ref [ref n];
def _ i = ref (n i- 1);

loop {
    def _ j = ref 0;
    j <- *i;
    eval push (b, j);
    i <- *i i- 1;
    if (*i i< 0) {
        break;
    };
};
eval algo.sort b;

eval writeInt (algo.lower_bound a 0);
eval writeInt (algo.lower_bound a 1);
eval writeInt (algo.lower_bound a 2);
eval writeInt (algo.lower_bound a 3);
eval writeInt (algo.lower_bound a 4);
eval writeInt (algo.lower_bound a 5);
eval writeInt (algo.lower_bound a 6);
eval writeInt (algo.lower_bound a 7);

eval writeInt (algo.upper_bound a 0);
eval writeInt (algo.upper_bound a 1);
eval writeInt (algo.upper_bound a 2);
eval writeInt (algo.upper_bound a 3);
eval writeInt (algo.upper_bound a 4);
eval writeInt (algo.upper_bound a 5);
eval writeInt (algo.upper_bound a 6);
eval writeInt (algo.upper_bound a 7);
