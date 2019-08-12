#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

  ll x, y, n, aux=0;

  cin >> n;

  while(n--){
    cin >> x >> y;

    aux = max(aux, x+y);
  }

  cout << aux << endl;

  return 0;
}
