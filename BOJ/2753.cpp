#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int res;
  if (n % 400 == 0 || n % 100 != 0 && n % 4 == 0) res = 1;
  else res = 0;

  cout << res;
  return 0;
}
