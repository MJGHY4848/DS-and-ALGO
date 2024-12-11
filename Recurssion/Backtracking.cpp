#include <iostream>
using namespace std;

bool isSafe(int **arr, int x, int y, int n)
{ // **arr - dynamically memory allocate karenge isliye
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratInMaze(int **arr, int x, int y, int n, int **solArr)
{

    if (x == (n - 1) &&y == n - 1)
    {
        solArr[x][y] = 1;
        return true;
    }

    if (isSafe(arr, x, y, n))
    {
        solArr[x][y] = 1;
        if (ratInMaze(arr, x + 1, y, n, solArr))
        {
            return true;
        }
        if (ratInMaze(arr, x, y + 1, n, solArr))
        {
            return true;
        }
        solArr[x][y] = 0; // Backtracking
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int **solAarr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solAarr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solAarr[i][j] = 0;
        }
    }

    if(ratInMaze(arr,0,0,n,solAarr)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++ ){
                cout << solAarr[i][j]<< " ";
            }
            cout << endl;
        }
    }
    return 0;
}