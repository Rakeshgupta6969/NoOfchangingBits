class Solution {
    public:
        int minChanges(int n, int k) {
            // using the bits manipulation.
    
    
             int count = 0;
    
             while(n != 0 || k != 0){
              
              int k1 = (n&1);
              int t = (k&1);
    
              if(k1 == 1 && t == 0){
                count++;
              }
          else  if(k1 == 0 && t == 1){
                return -1;
              }
    
             n >>= 1;
             k >>= 1;
    
             } 
    
             return count;
    
        }
    };