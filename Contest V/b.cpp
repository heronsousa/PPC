#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;

  cin >> s;

  size_t it_144 = s.find("144");
  while(it_144!=string::npos){
    s.replace(it_144, 3, " ");
    if(it_144!=string::npos);
    it_144 = s.find("144");
  }
  size_t it_14 = s.find("14");
  while(it_14!=string::npos){
    s.replace(it_14, 2, " ");
    if(it_14!=string::npos);
    it_14 = s.find("14");
  }
  size_t it_1 = s.find("1");
  while(it_1!=string::npos){
    s.replace(it_1, 1, " ");
    if(it_1!=string::npos);
    it_1 = s.find("1");
  }

  s.find_first_not_of(" ")!=string::npos ? cout << "NO" << endl : cout << "YES" << endl;;

  return 0;
}
