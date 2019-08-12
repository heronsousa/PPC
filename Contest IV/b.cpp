#include <bits/stdc++.h>

using namespace std;

int main(){

  string s;
  int n, a=0, d=0;

  cin >> n;
  cin >> s;

  for(auto c : s){
    if(c == 'A') a++;
    else if(c == 'D') d++;
  }

  if(a>d) cout << "Anton" << endl;
  else if(d>a) cout << "Danik" << endl;
  else cout << "Friendship" << endl;
}
