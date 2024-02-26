// class Solution {
// public:
//     double myPow(double x, int n) {
//         //n= power
//         //x=base
//         // if x==0 return 0
//             // if x==+ve return ans
//                 // else return 1/ans
        
//         if(x==0) return 0;
//         if(n==0) return 1 ;
//         if(n==1) return x;
//         //n ko absolute karna mat bhulna abs(n/2)
//         double ans=myPow(x,abs(n/2))*myPow(x,abs(n/2));
//         if(n%2!=0) ans=ans*x;
//         if(n>=0)
//         {
//             return ans;
//         }
        
        
//        return (1/ans);
//     }
// };





// 2nd approach


class Solution {
public:
    double myPow(double x, int n) {
        //n= power
        //x=base
        // if x==0 return 0
            // if x==+ve return ans
                // else return 1/ans
        
        if(x==0) return 0;
        if(n==0) return 1 ;
        if(n==1) return x;
        //n ko absolute karna mat bhulna abs(n/2)
        double ans=myPow(x,abs(n/2));
        ans=ans*ans;
        if((n)%2!=0) ans=ans*x;
        if(n>=0)
        {
            return (ans);
        }
        
        
       return (1/(ans));
    }
};