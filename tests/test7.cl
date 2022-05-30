import "../stl/bin.cl";
import "../stl/math.cl";

if (bin.not (1 i< 2)) {
    eval writeInt 1;
}
else {
    eval writeInt 2;
};

if (bin.xor (bin.les_eq 3 4) (bin.gre 3 4)) {
    eval writeInt 3;
}
else {
    eval writeInt 4;
};

eval writeInt (math.mod 8 3);
eval writeInt (math.abs (math.neg 5));
eval writeInt (math.gcd 36 60);
eval writeInt (math.lcm 36 60);
eval writeInt (math.pow 3 5);
eval writeReal math.sqrt 2.0;
eval writeReal math.sin 4.0;
eval writeReal math.cos (math.rneg 4.0);
