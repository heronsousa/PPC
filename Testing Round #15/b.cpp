#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  int n;
  long long i;

  for(i=0; i<1000000000000; i++){
    s += to_string(i);
  }

  cin >> n;

  cout << s[n] << endl;

  return 0;
}
