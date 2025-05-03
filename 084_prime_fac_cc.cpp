#include <bits/stdc++.h>
using namespace std;

int smallest_prime_factor(int x)
{
    for (int i = 2; i <= x; i++)
    {
        if (x % i == 0)
            return i;
    }
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y,time = 0, spf=0;
        cin >> x >> y;
        spf = smallest_prime_factor(x);
        x+=spf;
        if(y%2==1){
            time = ((y-x)/2)+2;
        }
        else{
            time = ((y-x)/2)+1;

        }

        // while (x < y)
        // {
        //     spf = smallest_prime_factor(x);
        //     x += spf;
        //     time++;
        // }
        cout << time << endl;
    }
    return 0;
}
