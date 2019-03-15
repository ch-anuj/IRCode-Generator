int foo(int n){
  int a;
  int b;
  int c;
  if(n==0){
    return 1;
  }
  c = n-1;
  a = foo(c);
  b = n*a;
  return b;
}

int main() {
  int a;
  a = foo(5);
  return 0;
}
