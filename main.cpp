#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char *argv[])
{
    int m;
    if(argc == 2)
        m = atoi(argv[1]);
    else
    {
        cout << "Enter max:";
        cin >> m;
    }
    int a[m]={0};
    for(int i=2; i*i<=m; i++)
    {
        if(a[i] == 1)
            continue;
        for(int k=i*i; k<m; k+=i)
            a[k]=1;
    }
    for(int i=2; i<m; i++)
        if(a[i] == 0)
            cout << i << ' ';
    cout << "\n";
    return 0;
}