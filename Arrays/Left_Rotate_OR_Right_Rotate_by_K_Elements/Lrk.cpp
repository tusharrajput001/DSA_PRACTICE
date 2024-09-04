// ------------------------ LEFT ROTATE BY K ELEMENTS  ----------------------------------

// ------------------------- SOLUTION 1

// #include <bits/stdc++.h>
// using namespace std;

// void Rotatetoleft(int arr[], int n, int k)
// {
//     if (n == 0)
//         return;
//     // reduce the k
//     k = k % n;
//     if (k > n)
//         return;
//     int temp[n];

//     // store k values in temp
//     for (int i = 0; i < k; i++)
//     {
//         temp[i] = arr[i];
//     }

//     // Rotate the arr with k moves from 0 to n-k
//     for (int i = 0; i < n - k; i++)
//     {
//         arr[i] = arr[i + k];
//     }

//     // fill rest of the arr from temp
//     for (int i = n - k; i < n; i++)
//     {
//         arr[i] = temp[i - (n - k)];
//     }
// }

// int main()
// {
//     int n = 7;
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int k = 2;
//     Rotatetoleft(arr, n, k);
//     cout << "After Rotating the elements to left " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// ----------------------------- SOLUTION 2

// #include <bits/stdc++.h>
// using namespace std;

// void Reverse(int arr[], int start, int end)
// {
//     while (start <= end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// void RotatetoLeft(int arr[], int n, int k)
// {
//     Reverse(arr, 0, k - 1);
//     Reverse(arr, k, n - 1);
//     Reverse(arr, 0, n - 1);
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int n = 7;
//     int k = 2;
//     RotateToleft(arr, n, k);
//     cout << "After Rotating the k elements to right ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
//     return 0;
// }

// ---------------------------- RIGHT ROTATE BY K ELEMENTS -------------------------------

// SOLUTION 1
// #include <iostream>
// using namespace std;
// void RotateToleft(int arr[], int n, int k)
// {
//     if(n == 0) return;
//     k = k % n;
//     if(k > n) return;
//     int temp[n];

//     // store last k values in temp
//     for (int i = n-k; i < n; i++)
//     {
//         temp[i-n+k] = arr[i];
//     }

//     // Rotate right by k element from 0 to n-k
//     for (int i = n-k-1; i >=0; i--)
//     {
//         arr[i + k] = arr[i];
//     }

//     // Move temp to front
//     for (int i = 0; i < k; i++)
//     {
//         arr[i] = temp[i];
//     }

// }
// int main()
// {
//   int n = 7;
//   int arr[] = {1, 2, 3, 4, 5, 6, 7};
//   int k = 2;
//   Rotatetoright(arr, n, k);
//   cout << "After Rotating the elements to right " << endl;
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   return 0;
// }

// SOLUTION 2

// #include <iostream>
// using namespace std;
// // Function to Reverse the array
// void Reverse(int arr[], int start, int end)
// {
//     while (start <= end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// void Rotateeletoright(int arr[], int n, int k)
// {
//     Reverse(arr, 0, n - k - 1);
//     Reverse(arr, n - k, n - 1);
//     Reverse(arr, 0, n - 1);
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int n = 7;
//     int k = 2;
//     Rotateeletoright(arr, n, k);
//     cout << "After Rotating the k elements to right ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
//     return 0;
// }