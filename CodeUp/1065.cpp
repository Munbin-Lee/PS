#include <iostream>

using namespace std;

int main() {
  int arr[3];
  for (int i = 0; i < 3; i++) cin >> arr[i];
  for (int i = 0; i < 3; i++) {
    if (arr[i] % 2 == 0) cout << arr[i] << '\n';
  }
  return 0;
}
