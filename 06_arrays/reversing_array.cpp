# include <iostream>
using namespace std;

int main(){
    int size, a[size];
    cout << "Enter size of array: ";
    cin >> size;
    cout << "Enter elements of array: ";
    for(int i=0; i<size; i++){
        cin >> a[i];
    }
    cout << "Reversed array: ";
    for(int i=size-1; i>=0; i--){
        cout << a[i] << " ";
    }

return 0;
}
