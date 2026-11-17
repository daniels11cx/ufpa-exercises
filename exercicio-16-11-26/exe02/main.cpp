#include <iostream>

void TrocaVal(int & a, int & b){
  int aux = a;
  a = b;
  b = aux;
}

void duplica(int & c){
  c = c * 2;
}

int main() {
  return 0;
}
