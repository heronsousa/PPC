#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, a=0;
  string s;

  cin >> n >> s;

  for(int i=0; i<n; i++){
    if((s[i]-'0')%2==0) a+=i+1;
  }

  cout << a << endl;

  return 0;
}
