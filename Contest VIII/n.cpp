#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
  ll n, w, w1=0, w2=0;
  std::vector<ll> v;

  cin >> n;

  while(n--){
    cin >> w;
    v.push_back(w);
  }

  sort(v.begin(), v.end(), greater<ll>());
  w1+=v[0];

  for(int i=1; i<v.size(); i++){
    w2<w1 ? w2+=v[i] : w1+=v[i];
  }

  w1==w2 ? cout << "YES" << endl : cout << "NO" << endl;

  return 0;
}
