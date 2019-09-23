#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < t; i++)
    {
        string s, s_odd, s_even;
        getline (cin,s);
        for (int j = 0; j < s.length(); j++){
            if(j%2 == 0){
                s_even +=s[j];
            }
            else{
                s_odd +=s[j];
            }
        }
        cout << s_even << " " << s_odd << endl;
    }

    return 0;
}
