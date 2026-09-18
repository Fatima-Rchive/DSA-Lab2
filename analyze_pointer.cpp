#include <iostream>
using namespace std;

void analyze_pointer(int *ptr) {
    cout << "Memory location: " << ptr << endl;
    cout << "Value stored: " << *ptr << endl;}

int main() {
//Part 2a: stack allocation
    int iValue = 42;
    cout << "Stack variable:" << endl;
    analyze_pointer(&iValue);

//Part 2b: heap allocation
    int* hValue = new int;
    *hValue = 99;
    cout << "\nHeap variable:" << endl;
    analyze_pointer(hValue);

    delete hValue;
    return 0;
}