#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){

  int n, pt, cont=0;
  vector<int> cts;
  cin >> n;

  for(int i=0; i<n; i++){
    cin >> pt;
    cts.push_back(pt);
  }

  int menor=cts[0], maior=cts[0];

  for(int i=1; i<n; i++){

    if(cts[i]>maior){
      cont ++;
      maior = cts[i];
    }
    if(cts[i]<menor){
      cont ++;
      menor = cts[i];
    }
    
  }

  cout << cont << endl;

  return 0;
}
