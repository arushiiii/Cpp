#include <iostream>
using namespace std;

int SelectionSort(int a[], int n)
{
   int i,j,temp,min;
  for(int i=0;i<n-1;i++)
  int  min=i;
  for(int j=i+1;j<n;j++)
  {
    if(a[min]>a[j])
     min=j;
  }
  temp=a[min];
  a[min]=a[j];
  a[j]=temp;
 
        
  return 0;

}

int main() {
int a[]={2, 3, 5, 4};
  SelectionSort( a,  4);
  for(int i=0;i<4;i++)
  {
    cout<<a[i]<<" ";
  }
}