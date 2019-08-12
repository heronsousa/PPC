#include <bits/stdc++.h>

using namespace std;

int main(){
  map<int, int> myMap;
  int n, nc, maior=0;

  cin >> n;

  for(int i=0; i<n; i++){
    cin >> nc;
    myMap[nc]++;
    if(nc>maior) maior=nc;
  }

  for(int i=0; i<=maior; i++){
    if(myMap[i]!=0) cout << myMap[i] << " ";
  }

  cout << endl;

  return 0;
}
