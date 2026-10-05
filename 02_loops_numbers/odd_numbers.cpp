# include <iostream>
using namespace std;
// program to print odd numbers from 1 to n

void oddNum(int n){
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
  cout << "The odd numbers from 1 to " << n <<  "are: " << endl;
  oddNum(n);
  cout <<  endl;
  return 0;
  }

