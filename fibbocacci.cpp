// 9/09/23
#include <iostream>
using namespace std;

int fibonacci(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1; 
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  } 
}

int main() {
  int n = 25;
  int sum = fibonacci(n);
  cout << "The " << n << "th Fibonacci number is " << sum << endl;

  return 0;
}
