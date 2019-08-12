#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){


  ll t;
  double m;

  cin >> m >> t;

  vector<double> taxa;

  for(int i=0;i<t;i++){
    double aux;
    cin >> aux;
    taxa.push_back(aux/100.0);
  }

  double lo=0,hi=m,mid;

  while(lo <= hi){

    mid = lo+(hi-lo)/2;

    double ans = mid;

    for(int i=0;i<t;i++){
      ans +=  (ans   +  (ans*taxa[i]));
    }

    ll h = ans,y=m;

    //cout << mid  << " " << h  << " "  << endl;


    if(h < y) lo = mid + 0.01;
    else hi = mid - 0.01;

  }

  cout << mid << endl;



  return 0;
}
