#include<iostream>

using namespace std;

int main ()

{
    int arr[10], n, i, j, x;

    cout << "Enter size of array : ";

    cin >> n;

    cout << "Enter elements of array : ";

    for (i = 0; i < n; i++)

        cin >> arr[i];

    for (i = 0; i < n; i++)

    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])

            {
                x = arr[i];

                arr[i] = arr[j];

                arr[j] = x;
            }
        }
    }

    cout << "Second largest number : " << arr[1];

    cout << "\nSecond smallest number : " << arr[n - 2];

    return 0;

}
