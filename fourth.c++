#include <iostream>
using namespace std;
void largestsum(int arr[2][2]);

void largestsum(int arr[][2], int row, int col)
{
   int max = -2;
   int sum;                               //largest sum//
   int rowindex;
   for (int i = 0; i < row; i++)
   {
      sum = 0;
      for (int j = 0; j < col; j++)
      {
         sum = sum + arr[i][j];
      }
      if (sum > max)
      {
         max = sum;
         rowindex = row;
      }
   }
   cout << " largest sum of is : " << max << " of " << rowindex << " row .";
}


int main()
{
    int row, col;
    cout << "enter the row and columne" << endl;
    cin >> row >> col;
    int arr[2][2];
    cout << "enter the element in array" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    largestsum(arr, 2, 2);
    return 0;
}