#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

  ll t, sx, sy, ex, ey;
  string s;

  cin >> t >> sx >> sy >> ex >> ey;

  cin >> s;

  for(int i=0; i<s.size(); i++){
    if(ex>sx && s[i]=='E') sx+=1;
    else if(ex<sx && s[i]=='W') sx-=1;
    else if(ey<sy && s[i]=='S') sy-=1;
    else if(ey>sy && s[i]=='N') sy+=1;

    if(sx==ex && sy==ey){
      cout << i+1 << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;
}
