// class Solution {
    
// public:
//     int rangeBitwiseAnd(int left, int right) {
        
//         int ans=left;
//         for(int i=left;i<=right;i++){
//             ans=(ans&i);
//         }
//         return ans;
        
//     }
// };

class Solution {
 public:
  int rangeBitwiseAnd(int m, int n) {
    int shiftBits = 0;

    while (m != n) {
      m >>= 1;
      n >>= 1;
      ++shiftBits;
    }

    return m << shiftBits;
  }
};