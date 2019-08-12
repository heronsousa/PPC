#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, br=1;
  string s;
  vector <string> v;

  cin >> n;
  cin >> s;
  v.push_back(s);

  for(int i=1; i<n; i++){
    cin >> s;
    if(find(v.begin(), v.end(), s) != v.end() || s[0] != v[i-1].back()) br=0;
    v.push_back(s);
  }

  br ? cout << "YES" << endl : cout << "NO" << endl;

  return 0;
}
