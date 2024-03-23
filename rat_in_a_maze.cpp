#include<bits/stdc++.h>
using namespace std;

#define frb(i, len) for(int i = len-1; i >= 0; i--)
#define fr(i, len) for(int i = 0; i < len; i++)
#define tas cout<<"Tell a string : ";
#define nl cout<<"\n";
#define N 1000
typedef vector<vector<int>> vvint;
typedef vector<string> vstr;
typedef vector<int> vint;
typedef long long int ll;
typedef const int c_int;
typedef double dbl;
int InversionCount = 0;
c_int MOD = 1e9 + 7;
c_int Mx_row = 100;
c_int Mx_col = 100;

bool isSafe(int x, int y, int n, vvint& maze, vvint& visited) {
    return (x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 1 && visited[x][y] == 0);
}

void solve(vvint& m, vvint& visited ,int n, vstr& ans, int x, int y, string& path) {
    if (x == n - 1 && y == n - 1) {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    int newX, newY;

    // Move Down
    newX = x + 1;
    newY = y;
    if (isSafe(newX, newY, n, m, visited)) {
        path.push_back('D');
        solve(m,visited , n, ans, newX, newY, path);
        path.pop_back();
    }

    // Move Right
    newX = x;
    newY = y + 1;
    if (isSafe(newX, newY, n, m, visited)) {
        path.push_back('R');
        solve(m,visited , n, ans, newX, newY, path);
        path.pop_back();
    }

    // Move Up
    newX = x - 1;
    newY = y;
    if (isSafe(newX, newY, n, m, visited)) {
        path.push_back('U');
        solve(m,visited , n, ans, newX, newY, path);
        path.pop_back();
    }

    // Move Left
    newX = x;
    newY = y - 1;
    if (isSafe(newX, newY, n, m, visited)) {
        path.push_back('L');
        solve(m,visited , n, ans, newX, newY, path);
        path.pop_back();
    }

    // Backtrack
    visited[x][y] = 0;
}

vstr findPath(vvint& m, int n) {
    vstr ans;
    if (m[0][0] == 0 || m[n - 1][n - 1] == 0) return ans;
    int src_x = 0;
    int src_y = 0;
    vvint visited(n, vint(n, 0));
    string path = "";
    
    solve(m,visited , n, ans, src_x, src_y,path);
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    int n = 5;
    vvint maze = {{1, 0, 1, 0, 1},
                  {1, 1, 1, 1, 1},
                  {1, 1, 0, 1, 1},
                  {1, 0, 0, 0, 1},
                  {1, 1, 1, 1, 1}};
    vstr paths = findPath(maze, n);
    if (paths.empty()) {
        cout << "No path exists." << endl;
    } else {
        cout << "Possible paths to reach destination:" << endl;
        for (const string& path : paths) {
            cout << path << endl;
        }
    }
    return 0;
}