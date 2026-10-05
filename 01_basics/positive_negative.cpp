# include <iostream>
using namespace std;
// program to check if the entered number is negative or positive

void positiveNegative(int n){
  if (n>0){
cout << "The number entered is positive. " << endl;
  } else if (n<0){
cout << "The number entered is negative. " << endl;
  }
  else {
    cout << "The number entered is zero. " << endl;
  }
}

int main(){
int n;
  cout << "Enter the number: ";
  cin >> n;
 positiveNegative(n);  //invoking function
return 0;
}
