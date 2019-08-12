#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  int n, a=0;

  cin >> n >> s;

  size_t it = s.find("xxx");
  while(it!=string::npos){
    s.erase(it,1);
    it = s.find("xxx");
    a++;
  }

  cout << a << endl;

  return 0;
}
