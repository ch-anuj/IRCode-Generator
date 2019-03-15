#include <iostream>
#include <string>
#include "cstring"
using namespace std;

int tempCounter = 0;

string newTempGen(){
  
  string str;
  str = "t"+to_string(tempCounter);
  tempCounter++;
  return str;
}

int main(int argc, char const *argv[]) {

  return 0;
}
