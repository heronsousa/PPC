#include <bits/stdc++.h>

using namespace std;

int main(){

  vector<int> v;
  int n, hei;

  cin >> n;

  int maior=0, menor=100, ima=0, ime=0;

  for(int i=0; i<n; i++){
    cin >> hei;

    if(hei<=menor){
      menor=hei;
      ime=i;
    }
    if(hei>maior){
      maior=hei;
      ima=i;
    }
  }

  int seg = ima + (n-1-ime) - (ime<ima ? 1 : 0);

  cout << seg << endl;

  return 0;
}
