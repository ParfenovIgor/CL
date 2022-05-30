def _ r = toReal (4);
eval writeReal r r+ 3.14;

def _ a = ref 1;
loop {
    eval writeInt *a;
    if (*a i= 10) {
        break;
    };
    a <- *a i+ 1;
};

a <- 1;
def _ sum = ref 0;
loop {
    if (*a i= 50000) {
        break;
    };
    sum <- *sum i+ *a;
    a <- *a i+ 1;
};
eval writeInt *sum;
