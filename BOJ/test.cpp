#include <iostream>
#include <vector>

using namespace std;

enum {
  EMPTY = 0,
  WALL = 1,
  VISITED = 2
};

int n;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
vector<vector<int>> board;
pair<int, int> startPos, endPos;

void input() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  board.resize(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> board[i][j];
    }
  }
  cin >> startPos.first >> startPos.second >> endPos.first >> endPos.second;
  board[startPos.first][startPos.second] = VISITED;
}

bool isReachable(pair<int, int> pos) {
  if (pos == endPos) return true;

  for (int i = 0; i < 4; i++) {
    int nx = pos.first + dx[i];
    int ny = pos.second + dy[i];
    bool flag = false;

    while (true) {
      if (nx == -1 || nx == n || ny == -1 || ny == n) break;
      if (board[nx][ny] == WALL && flag) break;

      if (board[nx][ny] == EMPTY && flag) {
        board[nx][ny] = VISITED;
        if (isReachable({nx, ny})) return true;
      } else if (board[nx][ny] == WALL && !flag) {
        flag = true;
      }
      nx += dx[i];
      ny += dy[i];
    }
  }
  return false;
}

int main() {
  input();
  cout << (isReachable(startPos) ? "Yes" : "No");
  return 0;
}
