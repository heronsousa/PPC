#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, a=0, x, b=0, y, res=0;

  cin >> n;

  int i=n;
  while(i--){
    cin >> x >> y;
    a+=x;
    b+=y;
  }

  a>n/2 ? res+=n-a : res+=a;
  b>n/2 ? res+=n-b : res+=b;

  cout << res << endl;

  return 0;
}
