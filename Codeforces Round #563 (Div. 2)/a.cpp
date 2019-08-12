#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
  ll n, val, count=0, foi=1;
  vector<long long> v;

  cin >> n;

  for(ll i=0; i<2*n; i++){
    cin >> val;
    v.push_back(val);
  }

  while(count<=n*2-1){
    long long sum1=0, sum2=0;
    for(ll i=0; i<n; i++){
      sum1 += v[i];
    }
    for(ll i=n; i<n*2; i++){
      sum2 += v[i];
    }

    if(sum1!=sum2){
      for(ll i=0; i<v.size(); i++){
        cout << v[i] << " ";
      }
      cout << endl;
      foi=0;
      break;
    }
    random_shuffle(v.begin(), v.end());
    count++;
  }

  if(foi) cout << -1 << endl;

  return 0;
}
