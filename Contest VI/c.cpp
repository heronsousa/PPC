#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
  ll n, x, y;
  vector<ll> v;

  cin >> n;

  int cont=0;

  while(n--){
    cin >> x >> y;

    if(x<0) cont++;
  }
  cont>1 ? cout << "No" << endl : cout << "Yes" << endl;

  return 0;
}
