#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;

  cin >> s;

  s.find("0000000")!=string::npos || s.find("1111111")!=string::npos ? cout << "YES" << endl : cout << "NO" << endl;

  return 0;
}
