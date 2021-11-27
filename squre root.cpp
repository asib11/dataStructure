#include<iostream>
#include<math.h>
using namespace std;
int main()
{while(1){
    double a,b,c,x,x1,d;
    cout<<"inter a, b, c value : ";
    cin>>a>>b>>c;
    d=(b*b)-(4*a*c);
    if(d==0)
    {
        x=-b/(2*a);
        cout<<"Output= "<<x<<endl<<endl;
    }
    else if(d>0)
    {
        x=(-b+sqrt(d))/(2*a);
        x1=(-b-sqrt(d))/(2*a);
        cout<<"Output= "<<x<<endl<<endl;
        cout<<"Output= "<<x1<<endl<<endl;
    }
    else
        cout<<"Complex Number"<<endl<<endl;
}
    return 0;
}
