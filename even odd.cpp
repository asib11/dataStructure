#include<iostream>
using namespace std;
int even(int a)
{
    if(a%2==0)
        cout<<"Even";
    else
        cout<<"Odd";

}
int main()
{
    int x,y;
    cin>>x;
    y=even(x);
    return 0;
}

