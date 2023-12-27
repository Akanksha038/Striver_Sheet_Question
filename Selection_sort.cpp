#include<iostream>
using namespace std;

int selection_Sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selection_Sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}