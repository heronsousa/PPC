#include <bits/stdc++.h>

using namespace std;

int main(){
  bool z=false;
  string p;

  cin >> p;

  for(auto x : p){
    if(x=='H' || x=='Q' || x=='9') z=true;
  }

  z ? cout << "YES" << endl : cout << "NO" << endl;

  return 0;
}
