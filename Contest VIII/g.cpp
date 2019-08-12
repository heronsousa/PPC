#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
  ll n, a;
  map<ll, ll> v;

  cin >> n;

  while(n--){
    cin >> a;
    v[a]++;
  }

  cout << v.size() << endl;

  for(auto c : v) cout << c.first << " " << c.second << endl;

  return 0;
}
