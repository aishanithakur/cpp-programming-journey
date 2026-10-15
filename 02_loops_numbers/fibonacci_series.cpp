# include <iostream>
using namespace std;

void fibonacciSeries(int n){
      int a=0, b=1;   // Initialize the first two Fibonacci numbers before the loop; their values are updated in each iteration.
  for(int i=1; i<=n; i++){
    int next= a+b;
    cout << a << " "; 
    a=b;
    b=next;
  }
  
}
int main(){
  int n;
  cout << "Enter the number n: ";
  cin >> n;
  fibonacciSeries(n);
  return 0;
}







//a=0 b=1 next = a+b a=b b=next 
