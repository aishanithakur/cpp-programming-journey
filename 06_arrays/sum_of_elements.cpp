# include <iostream>
using namespace std;

int sumOfElements(int a[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
    sum+=a[i];
    }
return sum;
}

int main(){
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int a[size];
    cout << "Enter elements of array: ";
    for(int i=0; i<size; i++){
        cin >> a[i];
    }
    cout << "The sum of elements of array is: " << sumOfElements(a,size);
    return 0;
}
