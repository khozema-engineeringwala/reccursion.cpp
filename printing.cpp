#include <iostream>
using namespace std;
void Print(int n){
  if (n==0){
    return;
  }
  else
  cout<<n<<endl;
  Print(n-1);
}
int main() {
int n=10;
Print(n);
  return 0;
}
