#include <bits/stdc++.h>

using namespace std;

int main(){
  string s1, s2;

  getline(cin, s1);
  getline(cin, s2);

  for(auto c : s2){
    size_t f = s1.find(c);
    if(c!=' ' && f==string::npos){
      cout << "NO" << endl;
      return 0;
    }
    if(f!=string::npos) s1.erase(f,1);
  }

  cout << "YES" << endl;

  return 0;
}
