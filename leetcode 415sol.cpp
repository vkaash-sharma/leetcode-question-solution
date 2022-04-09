class Solution {
public:
    string addStrings(string nums1, string nums2) {
     
        int i = nums1.size() - 1;
        int j = nums2.size() - 1;
        int carry = 0;
        
        
        string sum = "";
        
        while(i >= 0 || j >=0 || carry){

         

             int a = (i >=0)? nums1[i] - '0':0;
             int b = (j >=0)? nums2[j] - '0':0;
            
            
            int res = a + b + carry;
            
            sum +=(res%10) +'0';
            carry = res / 10;
            
            i--;
            j--;
            // cout << sum<<" ";
             
        
        }
        
        int left = 0 ;
        int right = sum.size() - 1;
        
        while( left < right){
            swap(sum[left] , sum[right]);
            left++;
            right--;
        }
        
        return sum;
        
        
    }
};