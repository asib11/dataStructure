#include <iostream>
using namespace std;

int main()
{
  int n,array[100],i,d,temp;

  cout<<"Enter size of array : ";
  cin>>n;
  cout<<"input "<<n<<" data : \n";
  for (i = 0; i < n; i++)
    cin>>array[i];

  for (i = 1 ; i<=n-1; i++) {
    temp = array[i];

    for (d=i-1; d>=0;d--) {
      if (array[d]> temp) {
        array[d+1]=array[d];
      }
      else
        break;
    }
      array[d+1] =temp;
  }

cout<<"output : ";
  for (i =0;i<= n-1;i++)
    cout<<array[i]<<' ';


  return 0;
}
