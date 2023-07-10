#include <bits/stdc++.h>
using namespace std;

bool is_valid_position(int x, int y, int n, int m) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

bool can_reach_bank(const vector<string>& grid, int n, int m, int x, int y, int max_turns) {
    if (max_turns < 0) {
        return false;
    }
    
    if (grid[x][y] == 'T') {
        return true;
    }

    bool reached = false;
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    for (int i = 0; i < 4; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        while (is_valid_position(nx, ny, n, m) && grid[nx][ny] != '*') {
            if (grid[nx][ny] == 'T') {
                return true;
            }
            reached |= can_reach_bank(grid, n, m, nx, ny, max_turns - 1);
            nx += dx[i];
            ny += dy[i];
        }
    }

    return reached;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    int start_x, start_y;

    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == 'S') {
                start_x = i;
                start_y = j;
            }
        }
    }

    bool can_reach = can_reach_bank(grid, n, m, start_x, start_y, 2);
    cout << (can_reach ? "YES" : "NO") << endl;

    return 0;
}