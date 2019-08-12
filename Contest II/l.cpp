#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){

  int n;
  string s, res;

  cin >> n;

  while(n--){
    cin >> s;
    if(s.length()>10){
      string len = to_string(s.length()-2);
      res = s[0] + len + s[s.length()-1];
      cout << res << endl;
    }
    else cout << s << endl;
  }

  return 0;
}
