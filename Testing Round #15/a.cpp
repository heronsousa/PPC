#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  int n;

  for(int i=0; i<10000; i++){
    s += to_string(i);
  }

  cin >> n;

  cout << s[n] << endl;

  return 0;
}
