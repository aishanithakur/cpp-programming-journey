class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x!=0 && x%10==0)){ //since 0 is divisible by 10 and 0 is palindrome we use &&
            return false;           //negative and multiple of 10 cant be palindrome
        }
        else{
          int rem, original=x;
          long long sum=0;      //long long prevents overflow of digits of large numbers  
          while(x>0){           //this while loop calculates reversed number
            rem=x%10; 
            sum = sum*10+rem;
            x/=10;
          }
          if(original==sum){   //if reversed and original number are equal
            return true;       //they are palindrome
          }
          return false;        //else non palindromes
        } 
    } 
};
