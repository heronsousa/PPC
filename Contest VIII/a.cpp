#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

  ll n, s, x, y;
  vector< pair<ll, ll>> v;

  cin >> s >> n;

  for(int i=0; i<n; i++){
    cin >> x >> y;
    v.push_back(make_pair(x, y));
  }

  sort(v.begin(), v.end());

  for(int i=0; i<n; i++){
    if(s>v[i].first) s+=v[i].second;
    else{
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;

  return 0;
}
