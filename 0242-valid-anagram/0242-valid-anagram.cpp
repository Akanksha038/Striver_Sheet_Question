class Solution {
public:
    bool isAnagram(string s, string t) {
             if (s.size() != t.size()) {
            return false;
        }
            
            int s1=s.size();
            int s2=t.size();
            
            map<char,int>m1;
            
          map<char,int>m2;
            
            for(int i=0;i<s.size();i++){
                    m1[s[i]]++;
                    
            }
            
             for(int i=0;i<t.size();i++){
                    
                    m2[t[i]]++;
                    
            }
            
            // return m1 == m2;
            
            if(m1!= m2) return false;  
            
            return true;
            
            
    }
        
        
        
};