#include<iostream>
using namespace std;
int main()
{
    int i, j;
    char ch='A';
    for(i=0; i<6; i++)
    {
        for(j=0; j<=i; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
