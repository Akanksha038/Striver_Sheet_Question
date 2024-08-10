class Solution {
public:
    string addStrings(string num1, string num2) {
            
            
            int carry=0;
            string result="";
            int i= num1.size()-1; //1
            
            int j= num2.size()-1; //2
            
            
           
            while(i>=0 || j>=0||carry!=0){
                    
                    
                    int sum=carry;
                    if( i>=0){ sum=sum+num1[i]-'0'; 
                    i--;
                             }
                    
                    if( j>=0){ sum=sum+num2[j]-'0';
                    
                    j--;
                             }
                    // sum=sum+carry;
                    carry=sum/10;
                    sum=sum%10;
                    
                    result.push_back(sum+'0');  //2. Conversion from Integer to Character (+'0'):
                    
                    
                    
            }
            
            reverse(result.begin(), result.end());
            return result;
 
            
            
            
    }
};