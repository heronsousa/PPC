#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, din, qtd;
  string nome;

  while(1){
    map<string, int> amigos;
    vector<string> migos;

    cin >> n;

    if(n==0) break;

    for(int i=0; i<n; i++){
      cin >> nome;
      amigos[nome] = 0;
      migos.push_back(nome);
    }

    while(n--){
      cin >> nome >> din >> qtd;
      amigos[nome] -= qtd==0 ? 0 : ((din/qtd)*qtd);
      for(int i=0; i<qtd; i++){
        cin >> nome;
        amigos[nome] += din/qtd;
      }
    }

    for(auto c : migos){
      cout << amigos.find(c)->first << " " << amigos.find(c)->second << endl;
    }

    cout << endl;
  }

  return 0;
}
