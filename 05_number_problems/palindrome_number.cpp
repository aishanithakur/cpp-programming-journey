# include <iostream>
using namespace std;

int number(int n){
    int rem, num=0;
       while(n>0){
        rem=n%10;
        n/=10;
        num=num*10+rem;
    }
    return num;
}
void reversed(int n){
    int reverse= number(n);
         if(reverse==n){
         cout << "Palindrome Number";
    }
    else{
        cout << "Not a Palindrome Number";
    }
}
int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    reversed(n);
    return 0;
}
