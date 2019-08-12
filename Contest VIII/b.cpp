#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

  ll n, m, f, min=10000;
  vector<ll> v;

  cin >> n >> m;

  for(int i=0; i<m; i++){
    cin >> f;
    v.push_back(f);
  }

  sort(v.begin(), v.end(), greater<int>());

  for(int i=0; i<=m-n; i++){
    if(v[i]-v[i+n-1] < min) min = v[i]-v[i+n-1];
  }

  cout << min  << endl;

  return 0;
}
