#ifndef CAL_H
#define CAL_H
inline int Add(int a, int b) {
    return a + b;
}
inline int Minus(int a, int b) {
    return a - b;
}
inline int Multiplication(int a, int b) {
    return a * b;
}
inline int Division(int a, int b) {
    if (b == 0) {
        std::cout << "0 can not be divisor." << std::endl;
        return -1;
    }
    else
        return a / b;
}
#endif //CAL_H