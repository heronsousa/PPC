#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, x=0;
  string s;

  cin >> n;

  while(n--){
    cin >> s;
    for(int i=0; i<s.length(); i++) {
      if(s[i]=='-'){
        if(s[i+1]=='-') x--;
      }
      else if(s[i]=='+'){
        if(s[i+1]=='+') x++;
      }
    }
  }

  cout << x << endl;

  return 0;
}
