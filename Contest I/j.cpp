#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, nei=0;
  string s;

  cin >> n >> s;

  for(int i=1; i<n; i++){
    if(s[i] == s[i-1]) nei++;
  }

  cout << nei << endl;

  return 0;
}
