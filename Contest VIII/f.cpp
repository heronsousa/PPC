#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
  ll n, w, nb, ne;
  vector<ll> v;

  cin >> n;

  for(int i=0; i<n; i++){
    cin >> w;
    v.push_back(w);
  }

  sort(v.begin(), v.end());

  nb = count(v.begin(), v.end(), v[0]);
  ne = count(v.begin(), v.end(), v[v.size()-1]);

  v[0]==v[v.size()-1] ? cout << v[v.size()-1]-v[0] << " " << (n-1)*n/2 << endl : cout << v[v.size()-1]-v[0] << " " << nb*ne << endl;

  return 0;
}
