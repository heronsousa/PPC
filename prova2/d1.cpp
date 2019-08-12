#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  double t, m, vp=0;

  cin >> m >> n;


  for (int i=1; i<=n; i++) {
    cin >> t;
    vp+=m/pow((1+t), i);
  }

  cout << vp/2 << endl;

  return 0;
}
