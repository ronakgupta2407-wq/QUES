#include<iostream>
using namespace std;
int main(){
    
    int a[3][3] = {{2,4,5},{3,5,90},{6,1,98}};
    
    // This is the dimension (e.g., 3 for a 3x3 matrix)
    const int dimension = 3; 

    // --- Original code to print the matrix ---
    for(int i = 0; i < dimension; i++){
        for(int j = 0; j < dimension; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // --- MODIFIED PART: Calculate total diagonal sum ---
    
    int totalDiagonalSum = 0;
    
    for(int i = 0; i < dimension; ++i) {
        
        // 1. Add the main diagonal element
        totalDiagonalSum += a[i][i];
        
        // 2. Add the secondary diagonal element
        //    (Only if it's not the center element we just added)
        if (i != (dimension - 1 - i)) {
            totalDiagonalSum += a[i][dimension - 1 - i];
        }
    }

    cout << endl; // Added for spacing
    cout << "Total sum of all diagonal elements: " << totalDiagonalSum << endl;
    
}
