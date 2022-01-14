#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int alt = 0;
    int alti[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == "d")
        {
            alti[i] == --alt;
        }
        else
        {
            alti[i] == ++alt;
        }
    }
    return 0;
}