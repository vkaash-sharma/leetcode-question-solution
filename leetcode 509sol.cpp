class Solution {
public:
    int fib(int n) {
        
        
        int c = 0;
        int a = -1;
        int b = 1;
        for(int i = 0 ; i<=n ; i++){
            
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};

// we have to simply find fibonacci series
