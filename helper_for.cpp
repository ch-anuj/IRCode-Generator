#include "iostream"

using namespace std;

int foo(int a){
  return a*a;
}

int main() {
  for(int i = 0; i < 7;i++){
    printf("%d\n", i);
  }
  int c;
  c = foo(4) + foo(3);
  printf("%d\n", c);

  return 0;
}
