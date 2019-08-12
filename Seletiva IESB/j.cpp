#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  int aux=0;

  cin >> s;

  for(int i=0; i<s.size(); i++){
    if(s[i-1]=='r') {
      if(s[i]=='s') s.erase(s.begin()+i-1);
      else if(s[i]=='.'){
        aux++;
        s[i]='r';
      }
    }
  }

  cout << aux << endl;
  
  return 0;
}
