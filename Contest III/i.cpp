#include <bits/stdc++.h>

using namespace std;

int main(){
  int days[9], pages, res, page_day;
  bool stop = true;

  cin >> pages;

  for(int i=1; i<=7; i++){
    cin >> page_day;
    days[i] = page_day;
  }

  while(stop){
    for(int i=1; i<8; i++){
      pages -= days[i];
      if(pages<1){
        res = i;
        stop = false;
        break;
      }
    }
  }

  cout << res << endl;

  return 0;
}
