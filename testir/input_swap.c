void swap(int x, int y){
  int c;
  c = x;
  x = y;
  y = c;
  return;
}

int main() {
  int a;
  int b;
  a = 23;
  b = 43;
  swap(a , b);
  print(a);
  print(b);
  return ;
}
