#include <bits/stdc++.h>

using namespace std;

int main(){
  string s, hello="hello";

  cin >> s;

  int aux=0;

  for(auto c : s){
    if(c==hello[aux]){
      aux++;
    }
  }

  aux==5 ? cout << "YES" << endl : cout << "NO" << endl;

  return 0;
}
