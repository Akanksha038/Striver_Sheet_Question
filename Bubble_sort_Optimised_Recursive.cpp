#include<iostream>
using namespace std;
void recursiveBubblesort(int arr[],int n)
{
    int didSwap=0;
    if(n==1) return ;
    for(int j=0;j<=n-2;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j+1],arr[j]);
          
            didSwap=1;

        }
    }
    if(didSwap==0) return;
    recursiveBubblesort(arr, n-1);
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Befor bubble sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    recursiveBubblesort(arr,n);
     cout<<"after bubble sort"<<endl;
     for(int i=0;i<n;i++)
     {
        cout<<arr[i]<<" ";
      }

    return 0;
}
