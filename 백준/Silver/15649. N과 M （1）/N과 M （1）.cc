#include <iostream>
using namespace std;

int n, m;
int arr[9];
bool visited[9];

void dfs(int depth){
    if(depth == m){
        for (int i = 0; i < m; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++){
        if(!visited[i]){
            visited[i] = true;
            arr[depth] = i;
            dfs(depth + 1);

            visited[i] = false;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    dfs(0);

    return 0;
}
