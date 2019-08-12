#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

  int n, x, y, sumX=0, sumY=0;
  set<int> sx, sy;

  cin >> n;

  for(ll i=0; i<n; i++){
    cin >> x >> y;
    sx.insert(x);
    sy.insert(y);
  }

  if(sx.size()<2||sy.size()<2) cout << -1 << endl;
  else{
      ll sx0=*sx.cbegin(), sx1=*sx.rbegin();
      ll sy1=*sy.rbegin(), sy0=*sy.cbegin();
      ll area = (sx1-sx0)*(sy1-sy0);
      cout << area << endl;
  }

  return 0;
}
