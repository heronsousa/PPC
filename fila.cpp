#include <bits/stdc++.h>

using namespace std;

struct Paciente{
  int idade, ordem;
  string nome;

  bool operator<(const Paciente& b)const{

    if(idade<=6 && b.idade<=6) return idade<b.idade;
    if(idade<=6) return true;
    if(b.idade<=6) return false;

    if(idade>=45 && b.idade>=45) return idade>b.idade;
    if(idade>=45) return true;
    if(b.idade>=45) return false;

    if(idade>b.idade) return true;

    if(idade==b.idade) return ordem<b.ordem;
  }
};

int main(){
  int n, idade;
  string nome;
  Paciente fila[10001];

  cin >> n;

  for(int i=0; i<n; i++){
    cin >> nome >> idade;
    fila[i].nome = nome;
    fila[i].idade = idade;
    fila[i].ordem = i;
  }

  stable_sort(fila, fila+n);

  cout << endl;

  for(int i=0; i<n; i++){
    cout << fila[i].nome << " " << fila[i].idade << endl;
  }

  return 0;
}
