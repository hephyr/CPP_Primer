#include <iostream>
int main() {
  int a, b;
  std::cout << "Please input two numbers" << std::endl;
  std::cin >> a >> b;
  int i,tmp;
  i = (a > b) ? b : a;
  while (i <= ((a > b) ? a : b)) {
    std::cout << i << std::endl;
    i++;
  }
  return 0;
}
