class Solution {
  public:
    int maximizeMoney(int N , int K) {
        // code here
        
        int i=0;
        int m=0;
        while(i<N){
            i+=2;
            m+=K;
        }
        return m;
    }
};