#include<iostream>
using namespace std;

// --- Function Definition ---
// 1. Removed the extra comma after 'c'
int findMax(int a, int b, int c) {
    int maxVal = a;
    
    if (b > maxVal) {
        maxVal = b;
    }
    
    if (c > maxVal) {
        maxVal = c;
    }
    
    // 2. Added the missing return statement
    return maxVal; 
} // 3. Closed the findMax function *before* main starts

// --- Main Program ---
// 'main' is now a separate function
int main() {
    int num1, num2, num3;
    
    cout << "Enter three numbers: "; // Added a space
    cin >> num1 >> num2 >> num3;
    
    // Added " is: " for cleaner output
    cout << "Maximum of three numbers is: " << findMax(num1, num2, num3) << endl;
    
    return 0; // Good practice to return 0 from main
}
