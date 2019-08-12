#include <bits/stdc++.h>

using namespace std;

int main(){
  string a, b;
  int d, res;

  cin >> a >> b >> d;

  if(a == b) cout << d << endl;

  else {
      if(a == "Fogo"){
        if(b == "Ar") res = d*2;
        else if(b == "Agua") res = d/2;
        else res = 0;
      }

      else if(a == "Agua"){
        if(b == "Fogo") res = d*2;
        else if(b == "Terra") res = d/2;
        else res = 0;
      }

      if(a == "Terra") {
        if(b == "Agua") res = d*2;
        else if(b == "Ar") res = d/2;
        else res = 0;
      }

      if(a == "Ar"){
        if(b == "Terra") res = d*2;
        else if(b == "Fogo") res = d/2;
        else res = 0;
      }


    cout << res << endl;
  }

  return 0;
}
