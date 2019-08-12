#include <bits/stdc++.h>

using namespace std;

struct Vector {
  int x, y, z;
};

int main(){
  int n;
  Vector vs[101];

  cin >> n;

  for(int i=0; i<n; i++){
        int x, y, z;
        cin >> x >> y >> z;
        vs[i] = Vector { x , y, z };
    }

  Vector sum { 0, 0, 0 };

  for(int i=0; i<n; i++)
  {
      sum.x += vs[i].x;
      sum.y += vs[i].y;
      sum.z += vs[i].z;
  }

  if (sum.x == 0 && sum.y == 0 && sum.z == 0) cout << "YES" << endl;

  else cout << "NO" << endl;

  return 0;
}
