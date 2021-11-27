#include <iostream>
using namespace std;
int main()
{
    int N,k, j, i,data[15],ptr,interchange;
    cout<<"size of array : ";
    cin>>N;
    for(i=1; i<=N; i++)
        cin>>data[i];
        for(k=1;k<=N-1;k++)
        {
            ptr=1;
            while(ptr<=N-k)
            {
                if(data[ptr]>data[ptr+1])
                {
                  interchange=data[ptr];
                data[ptr]=data[ptr+1];
                data[ptr+1]=interchange;

                }
                ptr++;
            }
        }cout<<"sorting data: ";
         for(i=1; i<=N; i++)
            cout<<data[i]<<' ';
return 0;
}
