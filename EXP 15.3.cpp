#include <iostream>
using namespace std;

// Function to reverse the string using recursion
void reverse(char *str) {
    if (*str == '\0') // Base condition: end of the string
        return;
    reverse(str + 1); // Recursive call with the next character
    cout << *str; // Print the character after the recursion unwinds
}

int main() {
    char a[50];
    cout << "Enter a string: ";
    cin >> a; // Read input string
    reverse(a); // Function call to reverse the string
    cout << endl; // Print a newline at the end
    return 0;
}

