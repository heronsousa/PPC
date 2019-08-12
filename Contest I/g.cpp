#include <bits/stdc++.h>

using namespace std;

int main(){

  int u=0, l=0;
  string s;

  cin >> s;

  for(int i=0; i<s.length(); i++){
    if(isupper(s[i])) u++;
    else if(islower(s[i])) l++;
  }

  for(int i=0; i<s.length(); i++){
    if(u > l) putchar(toupper(s[i]));
    else putchar(tolower(s[i]));
  }
  
  cout << endl;

  return 0;
}
