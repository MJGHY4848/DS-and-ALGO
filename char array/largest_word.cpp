#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();   // to clear buffer, we can also use flush function
    int i=0;
    int currlen=0, maxlen=0;

    while(1){

        if(arr[i] == ' ' || arr[i] == '\0'){
            if (currlen> maxlen){
                maxlen=currlen;
            }

            currlen=0;
        }
        else
        currlen++;
        if(arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout << maxlen;
    return 0;

}