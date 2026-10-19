#include <iostream>

using namespace std;

/* 1.2 Checking Whether a Number Belongs to Specified Ranges
   Enter a value of type double for x. Output 1 if 0 ≤ x ≤ 2 or 7 < x < 11. 
   Output 0 otherwise. Implement the computation using a single statement with assignment, 
   conditional operators, logical operators, and comparison operators.
*/


int main() {
    double x;
    
    cout << "Enter the x value: ";
    cin >> x;
    
    int result = 
      ((x >= 0 && x <= 2) || (x > 7 && x < 11)) 
        ? 1 
        : 0;
    
    cout << "Output " << result << endl;
    
    return 0;
}