
#include <iostream>

using namespace std;

int Max0(int arr[],int n)
{   
    int max=0;
    for(int i=0;i<=n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            i++;
        }
    }
    return max;
}
int Min0(int arr[],int n)
{
    int min=0;
    for(int i=0;i<=n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            i++;
        }
    }
    return min;
}


int main()
{   
    int n;
    cout<<"Enter the number of element of array\n";
    cin>>n;
    
    int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cout<<"Max element of array: \n"<<Max0 (arr,n);
   cout<<"Min element of array: \n"<<Min0 (arr,n);
}