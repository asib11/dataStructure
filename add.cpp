#include <iostream>
using namespace std;

int add(int a[],int n)
{
    int i,sum=0;
    for(i=0; i<n; i++)
        sum+=a[i];

    return sum;
}

int max(int a[],int n)
{
    int i,max=a[0];
    for(i=0; i<n; i++)

        if(max>a[i])
            max=a[i];
    return max;
}

int min(int a[],int n)
{
    int i,m=a[0];
    for(i=1; i<n; i++)

        if(m<a[i])
            m=a[i];
    return m;
}
int main()
{
    while(1)
    {
        int x[15],y,z,maximum,mini;
        cout<<"size of array:";
        cin>>y;
        for(int j=0; j<y; j++)
            cin>>x[j];
        z=add(x,y);
        maximum=max(x,y);
        mini=min(x,y);
        cout<<"add="<<z<<endl;
        cout<<"maximum="<<maximum<<endl;
        cout<<"minimum="<<mini<<endl<<endl;
    }
    return 0;
}

