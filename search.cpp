#include <iostream>
using namespace std;

int snum(int n)
{
    int x[30],m,i,a=0,p;
    cout<<"how many numbers input for search:";
    cin>>m;
    for(i=0; i<m; i++)
    {
        cout<<"Input number:";
        cin>>x[i];
    }
    cout<<"searching number:";
    cin>>n;
    for(i=0; i<m; i++)

    {
        if(x[i]==n)
        {
            a=1;
            p=i+1;
            break;

        }
    }
    if (a==1)
        cout<<n<<" is found"<<" and it's location= "<<p<<endl<<endl;
    else
        cout<<n<<" is not found"<<endl<<endl;
}
int main()
{
    while(1)
    {
        int x,y;
        y=snum(x);
    }
    return 0;
}
