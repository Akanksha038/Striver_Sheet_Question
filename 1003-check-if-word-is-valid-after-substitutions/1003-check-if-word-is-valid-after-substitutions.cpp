class Solution {
public:
    bool isValid(string s)
    {
            
            if(s.size()==0){
                    return true;
            }
            
            int find=s.find("abc");
            if(find!=string::npos){
                    string tleft=s.substr(0,find);
                    string tright=s.substr(find+3,s.size());
                    return isValid(tleft+tright);
            }
            
            return false;
        
    }
};