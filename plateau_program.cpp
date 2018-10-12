#include <iostream>

using namespace std;

int maxlen(int a[], int n)
{
    int len = 1;
    int fLen = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            len++;
        }
        else 
        {if (fLen<len)
            fLen = len;
            len = 1;
        }
        
            
    }
    return fLen;
}

int main()
{
    int a[14] = {1, 2, 2, 2, 2, 3, 3, 3, 7, 7, 7, 7, 7, 7}, size = 14;
    cout << maxlen(a, size) << endl;
    return 0;
}
