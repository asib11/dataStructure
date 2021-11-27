#include<iostream>
using namespace std;
int Prime(int n)
{
    int i, a=0;
    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
            a=1;
            break;
        }
    }
    if (a==0)
        cout<<n<<" is a prime number"<<endl<<endl;
    else
        cout<<n<<" is not a prime number"<<endl<<endl;
}
int main()
{
    while(1)
    {
    int x,y;
    cout<<"check number: ";
    cin>>x;
    y=Prime(x);
    }
    return 0;
}
