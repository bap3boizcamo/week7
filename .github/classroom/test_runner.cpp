#include <iostream>
#include <fstream>  // Để ghi file results.json
#include <string>
#include <vector>
#include <cmath>
#include <sstream>  // Để bắt output của Task 8

using namespace std;

// --- Khai báo các hàm của sinh viên ---
// (Những hàm này sẽ được định nghĩa trong homework.cpp)
void selectionSort(int arr[], int n);
void insertionSort(int arr[], int n);
int countEven(int arr[], int n);
void maxEachRow(int a[][100], int n, int m, int b[]);
void transposeMatrix(int a[][100], int n);
int countGreaterThanAverage(int arr[], int n);
void reverseArray(int arr[], int n);
void subarraySumK(int arr[], int n, int k);
void rotateRight(int arr[], int n, int k);
int countEvenOddBalanced(int arr[], int n);

// --- Bao gồm mã của sinh viên ---
// Kỹ thuật này nối tệp code của sinh viên vào đây
// để biên dịch thành một file thực thi duy nhất.
// Đảm bảo homework.cpp nằm ở thư mục gốc của repo.
#include "../homework.cpp" 

// --- Bộ khung test (Test Harness) ---
int total_score = 0;
vector<string> test_results_json; // Lưu chuỗi JSON cho mỗi test

// Hàm trợ giúp: so sánh hai mảng
bool arrays_equal(int arr1[], int arr2[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) return false;
    }
    return true;
}

// Hàm trợ giúp: so sánh hai ma trận
bool matrix_equal(int a[][100], int b[][100], int n, int m) {
     for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if (a[i][j] != b[i][j]) return false;
        }
     }
    return true;
}

// Hàm chạy một test và ghi kết quả (1 điểm mỗi test)
void run_test(const string& test_name, bool passed) {
    string status = passed ? "pass" : "fail";
    int points = passed ? 1 : 0;
    total_score += points;
    
    stringstream ss;
    ss << "{"
       << "\"name\": \"" << test_name << "\", "
       << "\"status\": \"" << status << "\", "
       << "\"score\": " << points << ", "
       << "\"max_score\": 1, "
       << "\"output\": \"" << (passed ? "Correct!" : "Failed!") << "\""
       << "}";
    test_results_json.push_back(ss.str());
}

// --- Các ca kiểm thử (Test Cases) ---

void test_task1() {
    int arr[] = {5, 2, 4, 1, 8};
    int expected[] = {1, 2, 4, 5, 8};
    selectionSort(arr, 5);
    run_test("Task 1: Selection Sort", arrays_equal(arr, expected, 5));
}

void test_task2() {
    int arr[] = {3, 1, 4, 2, 5};
    int expected[] = {1, 2, 3, 4, 5};
    insertionSort(arr, 5);
    run_test("Task 2: Insertion Sort", arrays_equal(arr, expected, 5));
}

void test_task3() {
    int arr[] = {1, 2, 4, 5, 6};
    int expected = 3;
    run_test("Task 3: Count Even", countEven(arr, 5) == expected);
}

void test_task4() {
    int a[100][100] = {{1, 2, 3}, {9, 8, 7}, {4, 10, 5}};
    int b[100];
    int expected[] = {3, 9, 10};
    maxEachRow(a, 3, 3, b);
    run_test("Task 4: Max Element in Each Row", arrays_equal(b, expected, 3));
}

void test_task5() {
    int a[100][100] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int expected[100][100] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};
    transposeMatrix(a, 3); // n=3
    run_test("Task 5: Transpose Square Matrix", matrix_equal(a, expected, 3, 3));
}

void test_task6() {
    int arr[] = {1, 2, 3, 6}; // Avg = 12/4 = 3
    int expected = 1; // Chỉ có 6 > 3
    run_test("Task 6: Count Greater Than Average", countGreaterThanAverage(arr, 4) == expected);
}

void test_task7() {
    int arr[] = {1, 2, 3, 4, 5};
    int expected[] = {5, 4, 3, 2, 1};
    reverseArray(arr, 5);
    run_test("Task 7: Reverse Array", arrays_equal(arr, expected, 5));
}

void test_task8() {
    // Task này IN ra, nên chúng ta phải "bắt" stdout
    stringstream buffer;
    streambuf* old_cout = cout.rdbuf(buffer.rdbuf()); // Chuyển hướng cout

    int arr[] = {1, 2, 3, 4, 5};
    subarraySumK(arr, 5, 3);
    
    cout.rdbuf(old_cout); // Phục hồi cout
    
    string expected = "6 9 12 ";
    run_test("Task 8: Sum of Subarrays Size K", buffer.str() == expected);
}

void test_task9() {
    int arr[] = {1, 2, 3, 4, 5};
    int k = 2;
    int expected[] = {4, 5, 1, 2, 3};
    rotateRight(arr, 5, k);
    run_test("Task 9: Rotate Right by K", arrays_equal(arr, expected, 5));
}

void test_task10() {
    int arr[] = {1, 2, 3, 4};
    // [1,2], [3,4], [1,2,3,4], [2,3]
    int expected = 4; // Ví dụ gốc ghi 3 có vẻ là một lỗi
    run_test("Task 10: Balanced Even-Odd Subarrays", countEvenOddBalanced(arr, 4) == expected);
}


int main() {
    // Chạy tất cả 10 test
    test_task1();
    test_task2();
    test_task3();
    test_task4();
    test_task5();
    test_task6();
    test_task7();
    test_task8();
    test_task9();
    test_task10();

    // Ghi kết quả ra tệp results.json
    // GitHub Classroom sẽ đọc tệp này
    ofstream outfile("results.json");
    outfile << "{" << endl;
    outfile << "  \"score\": " << total_score << "," << endl; // Tổng điểm
    outfile << "  \"max_score\": 10," << endl;
    outfile << "  \"output\": \"Autograding complete. Total Score: " << total_score << "/10\"," << endl;
    outfile << "  \"tests\": [" << endl;
    for (size_t i = 0; i < test_results_json.size(); ++i) {
        outfile << "    " << test_results_json[i];
        if (i < test_results_json.size() - 1) {
            outfile << ",";
        }
        outfile << endl;
    }
    outfile << "  ]" << endl;
    outfile << "}" << endl;
    outfile.close();

    // In ra console để debug (nếu cần)
    cout << "Autograding complete. Total Score: " << total_score << "/10" << endl;
    cout << "Results written to results.json" << endl;

    return 0; // Trả về 0 để báo build thành công
}
