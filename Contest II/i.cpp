#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, a, b, cont=0, maior=0;

  cin >> n;

  while(n--){
    cin >> a >> b;
    cont = cont - a + b;
    if(cont > maior) maior = cont;
  }

  cout << maior << endl;

  return 0;
}
