#include <iostream>
using namespace std;

int main()
{
    int la[100], position, k, n, value;
    cout<<"Enter number of elements in array : ";
    cin>>n;
    for (k = 0; k < n; k++)
    cin>>la[k];
    cout<<"Enter insert a position :";
    cin>>position;
    cout<<"Enter the value to insert :";
    cin>>value;
    for (k = n; k>=position; k--)

        la[k+1]=la[k];
    la[position]=value;
    n = n+1;
    cout<<"Resultant la is"<<endl;

    for (k=0; k<=n; k++)
        cout<<la[k]<<endl;
    return 0;
}

