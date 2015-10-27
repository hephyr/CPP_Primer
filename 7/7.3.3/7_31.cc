struct X;
struct Y;
struct X {
	Y *p;
};
struct Y {
	X a;
};