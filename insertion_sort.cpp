#include<iostream>
using namespace std;

// int selection_Sort(int arr[],int n){
//     for(int i=0;i<=n-2;i++){
//         int min=i;
//         for(int j=i+1;j<=n-1;j++){
//             if(arr[j]<arr[min]){
//                 min=j;
//             }
//         }
//         swap(arr[min],arr[i]);
//     }

// }

// int bubble_sort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }

// }

int insertion_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
      int  j=i;
      while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j],arr[j-1]);
        j--;
      }
       
    }

    // T.C=> W.C=O(N^2)
    //       A.C=O(N^2)
    //     B.C=O(N)

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // selection_Sort(ar5r,n);
    insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}