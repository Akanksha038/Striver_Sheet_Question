#include<iostream>
using namespace std;
void recursiveBubblesort(int arr[],int n)
{
    if(n==1) return ;
    for(int j=0;j<=n-2;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j+1],arr[j]);

        }
    }
    recursiveBubblesort(arr, n-1);
}

int main(){
    int arr[]={13,46,24,52,20,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Befor bubble sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    recursiveBubblesort(arr,n);
     cout<<"after bubble sort"<<endl;
     for(int i=0;i<n;i++)
     {
        cout<<arr[i]<<" ";
      }

    return 0;
}
