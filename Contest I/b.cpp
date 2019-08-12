#include <bits/stdc++.h>

using namespace std;

int main(){
  int m[6][6], cont=0;

  for(int i=1; i<6; i++){
    for(int j=1; j<6; j++){
      cin >> m[i][j];
    }
  }

  for(int i=1; i<6; i++){
    for(int j=1; j<6; j++){

      if(m[i][j] == 1){
        if(i<3) cont += 3-i;
        else if(i>3) cont += i-3;

        if(j<3) cont += 3-j;
        else if(j>3) cont += j-3;
      }

    }
  }

  cout << cont << endl;

  return 0;
}
