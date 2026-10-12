# include <iostream>
using namespace std;

int invertedTriangle(int n){
    int i; int j;
    for(i=1; i<=n; i++){
        for(j=1; j<i; j++){
            cout << " ";
        }
        for(j=1; j<n-i+2; j++){
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    invertedTriangle(n);
    return 0;
}
