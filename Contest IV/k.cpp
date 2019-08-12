#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, k, sum=0, res=0;

  cin >> n >> k;
  int tempo=240-k;

  for(int i=1; i<=n; i++){
    if(tempo-(i*5)>=0){
      res++;
      tempo-=i*5;
    }
    else break;
  }

  cout << res << endl;

  return 0;
}
