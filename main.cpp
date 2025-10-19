#include <iostream>
using namespace std;

/*
=========================================
    🧩 C++ HOMEWORK TEMPLATE
    📚 Topic: Sorting, Arrays, and Matrices
    🧠 Instruction: Complete all tasks below
=========================================

👉 Each task includes:
   - A clear description
   - An example test case
   - A "TODO" section where you add your code
*/

// =====================================================
// 🟦 TASK 1: SELECTION SORT
// Description:
//   Sort the array in ascending order using the
//   Selection Sort algorithm.
//   In each pass, find the smallest element and
//   swap it with the current position.
// Example:
//   Input:  [5, 2, 4, 1]
//   Output: [1, 2, 4, 5]
// =====================================================
void selectionSort(int arr[], int n) {
    // TODO: Find the smallest element in each pass
    //       and swap it with the current position
}

// =====================================================
// 🟩 TASK 2: INSERTION SORT
// Description:
//   Sort the array in ascending order using the
//   Insertion Sort algorithm.
//   Iterate through the array and insert each element
//   into its correct position in the sorted part.
// Example:
//   Input:  [3, 1, 4, 2]
//   Output: [1, 2, 3, 4]
// =====================================================
void insertionSort(int arr[], int n) {
    // TODO: Insert each element into its correct position
    //       in the sorted part of the array
}

// =====================================================
// 🟨 TASK 3: COUNT EVEN NUMBERS
// Description:
//   Count how many elements in the array are even.
// Example:
//   Input:  [1, 2, 4, 5, 6]
//   Output: 3
// =====================================================
int countEven(int arr[], int n) {
    // TODO: Count how many numbers in the array are even
    return 0;
}

// =====================================================
// 🟧 TASK 4: MAX ELEMENT IN EACH ROW (MATRIX)
// Description:
//   For a matrix a[n][m], find the maximum element in
//   each row and store it in b[i].
// Example:
//   a = {{1, 2, 3},
//        {9, 8, 7}}
//   b = [3, 9]
// =====================================================
void maxEachRow(int a[][100], int n, int m, int b[]) {
    // TODO: For each row i, find the largest element and store it in b[i]
}

// =====================================================
// 🟥 TASK 5: TRANSPOSE A SQUARE MATRIX
// Description:
//   Given a square matrix a[n][n], transpose it by
//   swapping a[i][j] with a[j][i].
// Example:
//   a = {{1, 2},
//        {3, 4}} → Transpose = {{1, 3},
//                               {2, 4}}
// =====================================================
void transposeMatrix(int a[][100], int n) {
    // TODO: Swap a[i][j] with a[j][i] to create its transpose
}

// =====================================================
// 🟪 TASK 6: COUNT ELEMENTS GREATER THAN AVERAGE
// Description:
//   Compute the average of all elements in the array,
//   then count how many elements are greater than it.
// Example:
//   Input:  [1, 2, 3, 6]
//   Average = 3 → Output = 1 (only 6 > 3)
// =====================================================
int countGreaterThanAverage(int arr[], int n) {
    // TODO: Find the average, then count elements greater than it
    return 0;
}

// =====================================================
// 🟫 TASK 7: REVERSE AN ARRAY
// Description:
//   Reverse all elements of the array in place.
// Example:
//   Input:  [1, 2, 3, 4]
//   Output: [4, 3, 2, 1]
// =====================================================
void reverseArray(int arr[], int n) {
    // TODO
}

// =====================================================
// ⬛ TASK 8: SUM OF ALL SUBARRAYS OF SIZE K
// Description:
//   Given an array A[] and an integer K,
//   find the sum of all contiguous subarrays of size K.
// Example:
//   A = [1, 2, 3, 4, 5], K = 3 → Output: [6, 9, 12]
// =====================================================
void subarraySumK(int arr[], int n, int k) {
    // TODO
}

// =====================================================
// 🟫 TASK 9: ROTATE ARRAY TO THE RIGHT BY K POSITIONS
// Description:
//   Rotate the array to the right by K positions.
// Example:
//   A = [1, 2, 3, 4, 5], K = 2 → Output: [4, 5, 1, 2, 3]
// =====================================================
void rotateRight(int arr[], int n, int k) {
    // TODO
}

// =====================================================
// 🟦 TASK 10: COUNT BALANCED EVEN-ODD SUBARRAYS
// Description:
//   Count the number of contiguous subarrays that have
//   an equal number of even and odd elements.
// Example:
//   A = [1, 2, 3, 4]
//   Valid subarrays: [1,2], [3,4], [1,2,3,4]
//   → Output: 3
// =====================================================
int countEvenOddBalanced(int arr[], int n) {
    // TODO
}
