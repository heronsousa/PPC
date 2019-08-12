#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, k, l, c, d, p, nl, np, ml, tl, ts;

  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  ml = k*l/nl;
  tl = c*d;
  ts = p/np;

  int menor = ml;
  if(tl < menor) menor=tl;
  if(ts < menor) menor=ts;

  cout << menor/n << endl;

  return 0;
}
