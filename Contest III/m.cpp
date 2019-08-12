#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, x, min=1000000002, pos=0, count=0;

  cin >> n;

  for(int i=1; i<=n; i++){
    cin >> x;
    if(x<min){
      min = x;
      pos = i;
      count=1;
    }
    else if(x==min) count++;
  }

  count!=1 ? cout << "Still Rozdil" << endl : cout << pos << endl;

  return 0;
}
