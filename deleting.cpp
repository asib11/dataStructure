#include <iostream>
using namespace std;
int main()
{
    int N, K, j, i,LA[100];
    cout<<"size of array : ";
    cin>>N;
    for(i=0; i<N; i++)
        cin>>LA[i];
    cout<<"delete : ";
    cin>>K;
    for(j=K-1; j<N; j++)
        LA[j] = LA[j+1];
    N--;
    for(i=0; i<N; i++)
        cout<<LA[i]<<endl;

    return 0;
}
