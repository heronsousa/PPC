#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  int n, a=0;
  size_t it;

  cin >> n >> s;

  for(char c='a'; c<='z'; c++){
    if(s.find(c) == string::npos && s.find(toupper(c)) == string::npos) a++;
  }

  a==0 ? cout << "YES" << endl : cout << "NO" << endl;

  return 0;
}
