#include <iostream>

using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  int res;
  if (x > 0 && y > 0) res = 1;
  else if (x < 0 && y > 0) res = 2;
  else if (x < 0 && y < 0) res = 3;
  else res = 4;

  cout << res;
  return 0;
}
