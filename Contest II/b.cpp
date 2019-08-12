#include <bits/stdc++.h>

using namespace std;

int main(){
  string n1, n2, res;

  cin >> n1 >>  n2;

  for(int i=0; i<n1.length(); i++){
    if(n1[i] == n2[i]) res += "0";
    else res += "1";
  }

  cout << res << endl;

  return 0;
}
