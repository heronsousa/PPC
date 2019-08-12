#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
  ll n, val, sla=0;
  std::vector<int> v;

  cin >> n;

  while(n--){
    cin >> val;
    v.push_back(val);
  }

  for(ll i=0; i<v.size()-1; i++){
    for(ll j=1; j<v.size(); j++){
      if((v[i]+v[j])%2==1){
        swap(v[i], v[j]);
        sla=1;
        break;
      }
    }
    if(sla) break;
  }

  for(ll j=0; j<v.size(); j++){
    cout << v[j] << " ";
  }

  cout << endl;

  return 0;
}
