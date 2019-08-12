#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, ax, ay, bx, by, cx, cy;
  vector< pair<int, int> > rei, rainha;

  cin >> n >> ax >> ay >> bx >> by >> cx >> cy;

  if(bx>ax && cx<ax || bx<ax && cx>ax || by>ay && cy<ay || by<ay && cy>ay)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;

  return 0;
}
