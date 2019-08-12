#include <bits/stdc++.h>

using namespace std;

int main(){

  string s;
  bool acho = true;

  cin >> s;

  for(int i=1; i<s.length(); i++){
    if(islower(s[i])) acho = false;
  }

  if(acho){
    for(auto c : s){
      if(islower(c)) putchar(toupper(c));
      else putchar(tolower(c));
    }
    cout << endl;
  }
  else cout << s << endl;


  return 0;
}
