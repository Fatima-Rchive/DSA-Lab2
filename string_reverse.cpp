#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int length;
    cout << "Enter length of string: ";
    cin >> length;
    cin.ignore(); //clear newline left in input buffer

    char* str = new char[length + 1];
    cout << "Enter the string: ";
    cin.getline(str, length + 1);

    //Reverse in place
    int start = 0, end = strlen(str) - 1;
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--; }

    cout << "Reversed string: " << str << endl;
    delete[] str;
    return 0;
}