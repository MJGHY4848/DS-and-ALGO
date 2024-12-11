#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3];
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            
            int sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum+= (a[row][k]*a[k][col]);
            }
            b[row][col]=sum;
        }
    }

    for(int i=0;i<3;i++){
         for(int j=0;j<3;j++){
            cout << b[i][j] << " ";
         }
         cout << endl;
    }
}