#include <bits/stdc++.h>

using namespace std;

#define ll long long

void print(vector<ll>& v){
  for(int i=0; i<v.size(); i++){
    cout << v[i] << " ";
  }
  cout << endl;
}

int main(){

  ll n, k, a;
  vector<ll> v;

  cin >> n >> k;

  for(int i=0; i<n; i++){
    cin >> a;
    v.push_back(a);
  }

  int i;

  for(i=0; i<n; i++){
    v.push_back(v[k-1]);
    v.erase(v.begin());
    print(v);
    if(equal(v.begin()+1, v.end(), v.begin())){
      cout << i+1 << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;
}
