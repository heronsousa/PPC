#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

  ll n, a;
  vector<ll> v, ac, it5, it7;

  cin >> n;

  for(int i=0; i<n; i++){
    cin >> a;
    v.push_back(a);
  }

  sort(v.begin(), v.end());

  if(find(v.begin(), v.end(), 5)!=v.end() || find(v.begin(), v.end(), 7)!=v.end()){
    cout << -1 << endl;
    return 0;
  }

  v[0]

  for(int i=0, j=1; i<n; i++, j++){
    cout << v[i];
    i!=1 && j%3==0 ? cout << endl : cout << " ";
  }

  return 0;
}
