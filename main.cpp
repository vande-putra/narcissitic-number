#include <iostream>

bool narcissistic(int n);
int main() {
  std::cout << narcissistic(371) << std::endl;
  std::cout << narcissistic(122) << std::endl;
  std::cout << narcissistic(4887) << std::endl;
  return 0;
}
bool narcissistic(int n){
  int Num, a, r;
  r = 0;
  Num = n;

  while (Num != 0) {
        a = Num % 10;
        
        r += a * a * a;
        Num = Num / 10;
    }

    if (r == n)
        return true;
    else
        return false;
}
