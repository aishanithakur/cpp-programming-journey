# include <iostream>
using namespace std;

int fact(int n){
    //loop for defining factorial
    int facto=1;
    for(int i=1; i<=n; i++){
        facto*=i;
    }
    return facto;
}
    int ncr(int n, int r){
        //defining what ncr is
    int fact_r = fact(r);
    int fact_n = fact(n);
    int fact_nmr = fact(n-r);
    
    return fact_n / (fact_r * fact_nmr);
    }

    int main(){
        //taking user input 
        int n; int r;
        cout<<"This programme is to calculate combinations!"<< endl;
        cout << "Enter the values of n: ";
        cin >> n;
        cout << "Enter the values of r: ";
        cin >> r;

        cout << n<<"C"<<r << "=" << ncr(n,r);
        return 0;
    }
