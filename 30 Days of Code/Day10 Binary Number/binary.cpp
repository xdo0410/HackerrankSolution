#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int remainder = 0;
    int count = 0;
    int max = 0;
    while(n>0){
        remainder = n%2;
        n = n/2;
        if(remainder==1)
        {
            count++;
        }
        else{
         if(count>max){
             max=count;
            }
         count=0;
        }
        
    }

    if(max>=count){
        printf("%d",max);
    }
    else
    {
        printf("%d",count);
    }
    return 0;
}
