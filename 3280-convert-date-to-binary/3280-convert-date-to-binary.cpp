class Solution {
public:
    
    string tobinary(int num){
        //return type string
        string binarynum="";
        while(num>0){
            if(num%2==0){
                binarynum="0"+binarynum;
            }
            else{
                
            
            binarynum="1"+binarynum;
            }
            num=num/2;
            
        }
        
        return binarynum;
    }
    string convertDateToBinary(string date) {
        
        // 2024-09-09
           // 0123456789==>size 10 of date
               // 1sr substring=> 0 to 3 
               // 2nd substring => 5 to 6
               // 3rd substring=> 8 to 9
               
               int year=stoi(date.substr(0,4));
               int month=stoi(date.substr(5,2));
               int day=stoi(date.substr(8,2));
        
        // binary conversion
     string binaryYear=   tobinary(year);
        string binaryMonth=   tobinary(month);
        string binaryDay=   tobinary(day);
        
        
     // string binaryYear = bitset<12>(year).to_string();   // 12 bits for the year
     //    string binaryMonth = bitset<4>(month).to_string();  // 4 bits for the month
     //    string binaryDay = bitset<5>(day).to_string();      // 5 bits for the day
        return binaryYear+"-"+binaryMonth+"-"+binaryDay;
        
        
        
        
    }
};