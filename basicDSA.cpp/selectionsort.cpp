
#include <iostream>
using namespace std;
//  bekar++;
// void selectionSort(int a[], int n)
// {
//     int i, temp, j, min, loc;
//     for (i = 1; i <= n - 1; i++)
//     {
//         min = a[i - 1];
//         for (j = i; j < n; j++)
//         {
//             if (a[j] < min)
//             {
//                 min = a[j];
//                 loc = j;
//             }
//         }

//         if (loc != i - 1)
//         {
//             temp = a[i - 1];
//             a[i - 1] = a[loc];
//             a[loc] = temp;
//         }
//     }
// }
// acchi++//
void selectionSort(int arr[], int n)
    {
       for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
               if(arr[j]<arr[i]){
                   swap(arr[i],arr[j]);
               }
           }
       }
    }
int main()
{
    int size;
    cout << "enter th size of array : " << endl;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr, size);
    cout << "sorted array is : " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}