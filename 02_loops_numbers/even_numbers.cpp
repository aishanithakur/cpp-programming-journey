# include <iostream>
using namespace std;
// program to print even numbers from 1 to n

void evenNum(int n){
for(int i=1; i<=n; i++){
if(i%2!=0){
cout << i << endl;
}
}

}
int main(){
int n;
  cout << "Enter the number n: ";
  cin >> n;
  cout << "The even numbers from 1 to " << n <<  "are: " << endl;
  evenNum(n);
  cout <<  endl;
  return 0;
  }

