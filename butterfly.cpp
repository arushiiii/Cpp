#include<iostream>
 using namespace std;

 int main()
{
  int n;
  cout<<"Enter the half height of butterfly";
  cin>>n;
  for(int i=1; i<=n; i++)
  {
    int spaces=2*n-2*i;
    for(int j=1;j<=i;j++)
    {
      cout<<"*";
    }
    for(int j=1;j<=spaces;j++)
    {
      cout<<" ";
    }
  
  for(int j=1; j<=i ;j++)
  {
    cout<<"*";
  }
  
  cout<<"\n";
}
  for( int i=n;i>=1;i--)
  {
    int spaces=2*n-2*i;
    for(int j=1;j<=i;j++)
    {
      cout<<"*";
    }
    for(int j=1;j<=spaces;j++)
    {
      cout<<" ";
    }
    for( int j=1;j<=i;j++)
    {
      cout<<"*";
    }
    cout<<"\n";

  }
  return 0;
}