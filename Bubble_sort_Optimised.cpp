#include<iostream>
using namespace std;
int bubble_sort(int arr[],int n){
    int didswap=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                didswap=1;
            }
        }
        if(didswap==0){
            break;
        }
        cout<<"runs\n";
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // selection_Sort(ar5r,n);
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}