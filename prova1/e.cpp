#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, k, a;
  map<int, int> fun;

  cin >> n >> k >> a;

  int w, i;

  while(a--){
    cin >> w >> i;
    if(w==1){
      int d;
      cin >> d;
      fun[i] = d;
    }
    else{
      for(int x=0; x<i; x++){
        int d;
        cin >> d;
        fun[i] = d;
      }
    }
  }

  for(int j=0; j<fun.size(); j++){
    if(fun[j]>0) cout << fun[j] << endl;
  }

  return 0;
}
