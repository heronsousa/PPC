#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, g, f, c, menor, maior;

  cin >> n >> g >> f >> c;

  menor = min(g, f);

  maior = menor+c<n ? menor+c : n;

  cout << maior << endl;

  return 0;
}
