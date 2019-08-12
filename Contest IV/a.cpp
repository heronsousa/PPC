#include <bits/stdc++.h>

using namespace std;

int main(){

  string s;
  int count=0;

  cin >> s;

  for(auto c : s){
    if(c == 'a') count++;
  }

  count<=(s.length()/2 + (s.length()%2==0 ? 0 : 1)) ? cout << s.length()-(s.length()-count*2+1) << endl : cout << s.length() << endl;

  return 0;
}
