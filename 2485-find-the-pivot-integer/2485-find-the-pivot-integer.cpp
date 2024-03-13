// class Solution {
// public:
//     int pivotInteger(int n) 
//     {
//         int sum1=0;
//         int sum2=0;

//         for(int i=1;i<=n;i++)
//         {
//            int pivot=i;
//            sum1=(i)*(i+1)/2;
//            for(int j=i;j<=n;j++){
//             sum2=sum2+j;
//            }

//            if(sum1==sum2){
//             return pivot;
//            }
//         }



//         return -1;
        
//     }
// };


class Solution {
public:
    // Method to find the pivot integer for a given n
    int pivotInteger(int n) {
        // Calculate the sum of all integers from 1 to n
        int sum = n * (n + 1) / 2;
      
        // Find the integer square root of the sum, if it exists
        int squareRoot = static_cast<int>(sqrt(sum));
      
        // Check if the square of the square root equals the original sum
        // If so, the pivot integer exists and is equal to squareRoot
        if (squareRoot * squareRoot == sum) {
            return squareRoot;
        }
        // If no such pivot integer exists, return -1
        return -1;
    }
};


