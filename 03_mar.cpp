#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// Function to calculate binomial coefficient
int binomialCoefficient(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to display Pascal's Triangle
void displayPascalsTriangle(int numRows) {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            cout << binomialCoefficient(i, j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int numRows;

    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numRows;

    // Display Pascal's Triangle
    displayPascalsTriangle(numRows);

    return 0;
}
