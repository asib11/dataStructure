#include <iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    while(1)
    {
        int a;
        cout<<"input value:";
        cin>>a;
        cout<<a<<"! ="<<fact(a)<<endl<<endl;
    }
    return 0;
}
