/*
CodeStudio: https://www.codingninjas.com/codestudio/problems/walls-and-gates_1092887?leftPanelTab=0

ip: 
    2 2
    2147483647 -1
    -1          0

op:
    2147483647 -1
    -1          0

ip:
    4 4
    2147483647 -1         0           2147483647
    2147483647 2147483647 2147483647 -1
    2147483647 -1         2147483647 -1
    0          -1         2147483647  2147483647


    3 -1 0 1
    2 2 1 -1
    1 -1 2 -1
    0 -1 3 4

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

#include<bits/stdc++.h>
bool isValid(int i, int j, int n, int m) {
    if(i < 0 || i >= n || j < 0 || j >= m) {
        return false;
    }
    return true;
}

vector<vector<int>> wallsAndGates(vector<vector<int>> &a, int n, int m) {
    queue<pair<int,int>> q;
    for(int i=0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i][j] == 0) {
                q.push({i,j});
            }
        }
    }
    int level = 1;
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};
    while(!q.empty()) {
        int sz = q.size();
        for(int i = 0; i < sz; i++) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            
            for(int ind = 0; ind < 4; ind++) {
                int newx = x + dx[ind];
                int newy = y + dy[ind];
                if(isValid(newx,newy,n,m) && a[newx][newy] == 2147483647) {
                    q.push({newx,newy});
                    a[newx][newy] = level;
                }
            }
        }
        level++;
    }
    return a;
}


int main(){
    
    int t; cin >> t;
    while(t--){
        
    }
    return 0;
}