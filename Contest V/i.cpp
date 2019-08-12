#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;

  cin >> s;

  size_t it = s.find("WUB");
  while(it!=string::npos){
    s.replace(it, 3, " ");
    it = s.find("WUB");
  }

  cout << s << endl;

  return 0;
}
