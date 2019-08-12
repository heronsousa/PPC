#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, m;
  string a, b, s;
  vector<string> va, vb;

  cin >> n >> m;

  while(m--){
    cin >> a >> b;
    va.push_back(a);
    vb.push_back(b);
  }

  while(n--){
    cin >> s;

    auto i = find(va.begin(), va.end(), s);
    auto index = distance(va.begin(), i);

    if(va[index].length()<vb[index].length()) cout << va[index] << ' ';
    else if (va[index].length()>vb[index].length()) cout << vb[index] << ' ';
    else cout << va[index] << ' ';
  }

  cout << endl;

  return 0;
}
