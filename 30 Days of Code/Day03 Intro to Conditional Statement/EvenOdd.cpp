#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while(N%2==0){
        if ((N>20) || ((2<=N) && (N<=5)))
        {
            cout << "Not Weird" << endl;
            
        }
        else  {
            cout << "Weird" << endl;
        }
        return 0;
    
    }
    cout << "Weird";
    return 0;
}
