#include "bits/stdc++.h"
using namespace std;

void solveSudoku(vector<vector<char>> &a)
{
    map<pair<int, int>, map<int, int>> mp;
    vector<map<int, int>> row(9);
    vector<map<int, int>> col(9);
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (a[i][j] != '.')
            {
                mp[{i / 3, j / 3}][a[i][j] - '0'] = 1;
                row[i][a[i][j] - '0'] = 1;
                col[j][a[i][j] - '0'] = 1;
            }
        }
    }
}