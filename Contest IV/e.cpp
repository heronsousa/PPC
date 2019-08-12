#include <bits/stdc++.h>

using namespace std;

int main(){

  vector<string> v;
  int n;
  string s;

  cin >> n;

  while(n--){
    cin >> s;

    if (find (v.begin(), v.end(), s) != v.end()) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    v.push_back(s);
  }

  return 0;
}
