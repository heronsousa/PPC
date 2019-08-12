#include <bits/stdc++.h>

using namespace std;

int main(){
  int k, deu_ruim=0;
  string s;
  map<char, int> k_str;

  cin >> k >> s;

  for(auto c : s){
    k_str[c]++;
  }

  for(auto c : k_str){
    if(c.second%k!=0) deu_ruim = 1;
  }

  if(deu_ruim) cout << -1 << endl;
  else{
    for(int i=0; i<k; i++) for(auto c : k_str) for(int j=0; j<c.second/k; j++) cout << c.first;
    cout << endl;
  }

  return 0;
}
