#include <bits/stdc++.h>

using namespace std;

int main(){
  string a, b;

  while(cin >> a >> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    string res;

    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(res));

    cout << res << endl;
  }

  return 0;
}
