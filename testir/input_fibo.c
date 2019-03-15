int fibo(int n){
  int a;
  int b;
  int c;
  int d;
  if(n==0){
    return 0;
  }
  else{
    if (n==1) {
      return 1;
    }
  }
  c = n-1;
  d = n-2;
  c = fibo(c);
  d = fibo(d);
  c = c + d;
  return c;
}

int main() {
  int a;
  a = fibo(5);
  return 0;
}
