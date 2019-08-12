#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

  ll x, y, posX=0, posY=0;
  vector< pair<ll, ll>> v;

  for(double i=1; i<=201; i+=0.5){
    int n=(int)(i);
    if(n%2==1){
      if(i>n) posY+=n;
      else posX+=n;
    }
    else{
      if(i>n) posY-=n;
      else posX-=n;
    }
    v.push_back(make_pair(posX, posY));
  }

  cin >> x >> y;

  if(!x&&!y || x==1&&!y) cout << 0 << endl;
  else{
    int i;
    for(i=0; i<v.size(); i++){
      double maiorX = max(v[i].first, v[i+1].first);
      double menorX = min(v[i].first, v[i+1].first);

      double maiorY = max(v[i].second, v[i+1].second);
      double menorY = min(v[i].second, v[i+1].second);

      if((x>=menorX && x<=maiorX) && (y>=menorY && y<=maiorY)) break;
    }
    cout << i+1 << endl;
  }

  return 0;
}
