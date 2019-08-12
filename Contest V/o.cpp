#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;

  cin >> n;

  int x = n*2+1;
  for(int j=0; j<=n; j++){
    cout << string((n-j)*2, ' ');
    for(int i=0, k=0; i<j*2+1; i++){
      cout << k;
      i==j*2 ? cout << endl : cout << " ";
      i>=j ? k-- : k++;
    }
  }

  for(int j=n-1; j>=0; j--){
    cout << string((n-j)*2, ' ');
    for(int i=j*2+1, k=0; i>0; i--){
      cout << k;
      i==1 ? cout << endl : cout << " ";
      i<=j+1 ? k-- : k++;
    }
  }

  return 0;
}
