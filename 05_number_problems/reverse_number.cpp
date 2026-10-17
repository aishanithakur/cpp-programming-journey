# include <iostream>
using namespace std;

int reverse(int n){
    int rem, num=0;
       while(n>0){
        rem=n%10;
        n/=10;
        num=num*10+rem;
    }
    return num;
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    reverse(n);
    cout << "The reversed number is " << reverse(n) << endl;
    return 0;
}
