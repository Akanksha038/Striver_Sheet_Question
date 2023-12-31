// /******************************************************************************

// Welcome to GDB Online.
// GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
// C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
// Code, Compile, Run and Debug online from anywhere in world.

// *******************************************************************************/
// #include <iostream>
// #include <vector>

// using namespace std;
// void Merge(vector<int>&arr, int low, int mid, int high){
//     vector<int>temp;
//     int left=low;
//     int right=mid+1;
//     while(left<=mid && right<=high)
//     {
        
    
//     if(arr[left]<=arr[right])
//     {
//         temp.push_back(arr[left]);
//         left++;
//     }
//     else{
//         temp.push_back(arr[right]);
//         right++;
//     }
//     }
        
    
    
//     while(left<=right){
//         temp.push_back(arr[left]);
//         left++;
        
//     }
    
//     while(left>=right){
//         temp.push_back(arr[right]);
//         right++;
        
//     }
    
//     for(int i=0;i<=high;i++)
//     {
//         arr[i]=temp[i-low];
//     }
// }

// void mS(vector<int >&arr,int low,int high){
//     if(low>=high){
//         int mid=(low+high)/2;
//         mS(arr,low,mid);
//         mS(arr,mid+1,high);
//         Merge(arr,low,mid,high);
//     }
// }


//  void mergeSort(vector<int>&arr,int n){
//      mS(arr,0,n-1);
//  }
 
 
    
// int main()
// {
//     vector<int>arr={12,11,13,5,6,7};
//     cout<<"original array"<<endl;
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
        
//     }
//     mergeSort(arr,arr.size()-1);
//     for (int num : arr) {
//         std::cout << num << " ";
//     }
    

//     return 0;
// }


#include <iostream>
#include <vector>

using namespace std;

void Merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = 0; i <= high - low; i++) {
        arr[low+ i] = temp[i];
    }
}

void mS(vector<int>& arr, int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        mS(arr, low, mid);
        mS(arr, mid + 1, high);
        Merge(arr, low, mid, high);
    }
}

void mergeSort(vector<int>& arr, int n) {
    mS(arr, 0, n);
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    cout << "Original array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    mergeSort(arr, arr.size() - 1);

    cout << "\nSorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}
