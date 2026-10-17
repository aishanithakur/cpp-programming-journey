#include <iostream>
#include <math.h>

using namespace std;
int countDigits(int n){
  int rem, count=0;
    while(n>0){
      rem=n%10;
      n/=10;
      count++; //count the digits of number
    }
    return count;
  }
void armstrongNumber(int n){
    int rem, num, original=n, armstrong=0;
    int count = countDigits(n);
    while(n>0){
      rem=n%10;
      n/=10;
      num=pow(rem,count); //use of exponents, rem^count
      armstrong+=num;     // the digit's power is added of each loop
    }
    if(armstrong==original){
      cout << "Armstrong number";
    }
    else{
      cout << "Not an Armstrong number";
    }
  }
    int main(){
      int n;
      cout << "Enter number: ";
      cin >> n;
      armstrongNumber(n);
      return 0;
    }
