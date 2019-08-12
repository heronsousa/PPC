#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
  ll a, b, n, m, ciclo=0;

  cin >> a >> b >> m >> n;

  while(1){
    a-=m;
    b+=n;

    if(a<b) break;

    ciclo++;
  }

  cout << ciclo << endl;

  return 0;
}
