#include <bits/stdc++.h>

using namespace std;

int main(){
  int k, pos;
  float x, y, total=0;
  vector< pair<float, float> > prensas;

  cin >> k;

  for(int i=1; i<=k; i++){
    cin >> x >> y;
    prensas.push_back(make_pair(x, y));
  }

  while (cin >> x >> y) {
    float tempx = abs(x-prensas[0].first);
    float tempy = abs(y-prensas[0].second);
    float aux=sqrt(tempx*tempx+tempy*tempy);
    pos = 0;

    for(int i=1; i<prensas.size(); i++){
      tempx = abs(x-prensas[i].first);
      tempy = abs(y-prensas[i].second);
      float dist = sqrt(tempx*tempx+tempy*tempy);
      if(dist<aux){
        aux = dist;
        pos = i;
      }
    }

    total += aux;

    prensas[pos].first = x;
    prensas[pos].second = y;
  }

  printf("%.2f\n", total);

  return 0;
}
