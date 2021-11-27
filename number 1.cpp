#include <iostream>
using namespace std;



int max(int a[])
{
    int i,m=a[0];
    for(i=0; i<3; i++)

        if(m<a[i])
            m=a[i];
    return m;
}

int min(int a[])
{
    int i,m=a[0];
    for(i=1; i<3; i++)

        if(m>a[i])
            m=a[i];
    return m;
}
int main()
{

    int x[3],maximum,mini;
    cout<<"input 3 data:";
    for(int j=0; j<3; j++)
        cin>>x[j];
    maximum=max(x);
    mini=min(x);
    cout<<"maximum="<<maximum<<endl;
    cout<<"minimum="<<mini<<endl<<endl;

    return 0;
}

