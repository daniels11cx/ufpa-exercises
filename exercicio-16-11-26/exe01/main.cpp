#include <iostream>

typedef float vetReais[50];

float Media(vetReais v, int n){
  float soma = 0;
  for (int i = 0; i < n; i++){
    soma += v[i];

  }
  return soma / n;
}

void MultiplicaK(vetReais v, int n, float k){
  for (int i = 0; i < n; i++){
    v[i] *= k;

  }
}

void MaiorMenor(vetReais v, int n, float & maior, float & menor){
  maior = v[0];
  menor = v[0];

  for (int i = 1; i < n; i++){
    if (v[i] < menor){
      menor = v[i];

    } else if (v[i] > maior) {
      maior = v[i];
    }
  }
}

int main(){ 
  return 0;
}
