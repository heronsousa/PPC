#include <bits/stdc++.h>

using namespace std;

int main(){
  string i, f, d, x;

  cin >> i >> f >> d;

  string h;
  if(i=="-"){
    for(int i=0; i<f.length(); i++){
      if(f[i] == ':') break;
      else h += f[i];
    }
  }

  cout << h;

  return 0;
}
