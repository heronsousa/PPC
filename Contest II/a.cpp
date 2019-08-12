#include <bits/stdc++.h>

using namespace std;

int main(){
  int x, y, j;

  cin >> x >> y;

  for(j=x+1; j<=y; j++){
    int cont=0;
    for(int i=2; i<=j/2; i++){
      if(j%i==0) cont++;
    }
    if(cont==0) break;
  }

  if(j==y) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}
