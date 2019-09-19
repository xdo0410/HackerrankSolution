#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int i_num;
    double d_num;
    string str_name;

    // Read and save an integer, double, and String to your variables.
    cin >> i_num >> d_num;
    cin.ignore();
    getline(cin, str_name);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout << i_num + i << endl;

    // Print the sum of the double variables on a new line.
    cout.precision(1);
    cout << fixed << d_num + d << endl;

    // Concatenate and print the String variables on a new line
    cout << s + str_name << endl;
    // The 's' variable above should be printed first.

    return 0;
}
