#include <bits/stdc++.h>

using namespace std;

int main(){
  int x, y, z;

  cin >> x >> y >> z;

  if(x>y+z) cout << "+" << endl;
  else if(y>x+z) cout << "-" << endl;
  else if(x==y && z<x) cout << 0 << endl;
  else cout << "?" << endl;

  return 0;
}
