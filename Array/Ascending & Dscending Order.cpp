#include <iostream>
using namespace std;
int main(){
    int i, j, n, temp;
    int arr[25];
    cout << "Enter the total no. of elements: ";
    cin >> n;
    cout << "Enter the elements of the array: " << endl;
    for (i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (i = 0; i < n; i++){
        for (j = i+1; j < n; j++){
            if (arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Elements sorted in the ascending order are: " << endl;
    for (i=0; i<n; i++){
     cout << arr[i] << endl;
    }


    for (i = 0; i < n; i++){
        for (j = i+1; j < n; j++){
            if (arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Elements sorted in the descending order are: " << endl;
    for (i=0; i<n; i++){
     cout << arr[i] << endl;
    }
    return 0;
}
