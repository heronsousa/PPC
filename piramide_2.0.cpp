#include <bits/stdc++.h>

using namespace std;

bool primo(int n){
  int count=0;
  for(int i=2; i<=n/2; i++) if(n%i==0) count++;
  return !count ? true : false;
}

int main(){
  int n, i;
  vector<int> primos;
  primos.push_back(2);

  for(i=3; i<3350; i+=2){
    if(primo(i)) primos.push_back(i);
  }

  while(1){
    cin >> n;
    if(n==0) break;
    bool acho=true;
    for(i=0; i<primos.size()-2; i++){
      if(primos[i] + primos[i+1] + primos[i+2] == n){
        cout << "O numero " << n << " e piramidal" << endl;
        acho = false;
      }
    }
    if(acho) cout << "O numero " << n << " nao e piramidal" << endl;
  }

  return 0;
}
