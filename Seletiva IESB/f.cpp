#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
  ll n, din;
  string s;
  map<string, vector<ll>> gastos;

  cin >> n;

  while(n--){
    cin >> din >> s;
    gastos[s].push_back(din);
  }

  cout << gastos.size() << " categoria(s)" << endl;

  for(auto c : gastos){
    cout << c.first << " Total: " << accumulate(c.second.begin(), c.second.end(), 0) << endl;
    for(auto it = c.second.begin(); it != c.second.end(); ++it)
      cout << *it << " ";

    cout << endl;
  }

  return 0;
}
