#include <iostream>

using namespace std;

int main() {
  char c;
  while (true) {
    cin >> c;
    cout << c << '\n';
    if (c == 'q') return 0;
  }
}
