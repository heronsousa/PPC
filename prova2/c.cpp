#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
  ll m, n, v;
  vector<ll> val;

  val.push_back(0);

  cin >> m >> n;

  ll sum=0;

  while(n--){
    cin >> v;
    val.push_back(v);
  }
  ll ans = 0;
  for(ll i=0; i<val.size(); i++){
    if(val[i] > 0) ans+=val[i];
    else if(val[i]<0 && val[i]+ans<0){
      sum+=val[i]+ans;
      ans=0;
      if(sum*-1>m) break;
    }
    else if(val[i]<0 && val[i]+ans>=0) ans+=val[i];
  }

  if(sum*-1<=m) cout << sum*-1 << endl;
  else cout << "-1" << endl;

  return 0;
}
