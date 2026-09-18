#include <iostream>
#include <cassert>
using namespace std;

bool isSorted(const int* arr, const int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
} //stub replacement

void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);}

void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};
    assert(isSorted(arr, 5) == false);}

void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    assert(isSorted(arr, 5) == true);}

void testSingleElement() {
    int arr[] = {7};
    assert(isSorted(arr, 1) == true);}

void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);}

void testNegativeValues() {
    int arr[] = {-5, -3, -1, 0, 2};
    assert(isSorted(arr, 5) == true);}

void testEmptyArray() {
    int* arr = nullptr;
    assert(isSorted(arr, 0) == true);}

void testAllSameValues() {
    int arr[] = {3, 3, 3, 3};
    assert(isSorted(arr, 4) == true);}

int main() {
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testEmptyArray();
    testAllSameValues();        
    cout << "All tests passed!" << endl;
    return 0;}