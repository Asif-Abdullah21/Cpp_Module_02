#include <bits/stdc++.h>
using namespace std;
int main()
{
    //int a[5]; //etar jehetu r kaj thkbe na tai delete krte hbe tai dynamic memory allocate krte hbe//
    int* a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    
    int *b = new int[7];//int b[7] - eta dynamic na korleo somossa nai karon eta niyei kaj kora hobe , eta delete kora hobe na //

    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }

    b[5] = 30;
    b[6] = 35;

    for (int i = 0; i < 7; i++)
    {
        cout << b[i] << " ";
    }
    
    
    
    
     
    return 0;
}
