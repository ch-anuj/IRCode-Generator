#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int tempCounter = 0;
int labelCounter = 0;

char buffer[1000];

char* newTempGen(){
  char buffer[50];
  char* a = (char*)malloc(10*sizeof(char));
  sprintf(buffer, "t%d", tempCounter);
  tempCounter= tempCounter + 1;
  strcpy(a,buffer);
  return a;
}

char* newLabelGen(){
  char buffer[50];
  char* a = (char*)malloc(10*sizeof(char));
  sprintf(buffer, "L%d", labelCounter);
  labelCounter++;
  strcpy(a,buffer);
  return a;
}


int main(int argc, char const *argv[]) {

  char* l;
  l = newLabelGen();
  char* f;
  f = newLabelGen();
  sprintf(buffer, "%s\n%s", l,f);
  cout << buffer;
  return 0;
}

// char *f, *t;
// t = newLabelGen();
// f = newLabelGen();
//
// sprintf($$.ircode, "%s\n%s\nif (%s neq 1) goto f",$2.ircode, t, $5.val, f);
// sprintf($$.ircode, "%s\n%s\ngoto %s",$$.ircode,$2.ircode);
// sprintf($$.ircode, "%s\ngoto %s\n%s:", $$.ircode,t,f);
// emit($$.ircode);
