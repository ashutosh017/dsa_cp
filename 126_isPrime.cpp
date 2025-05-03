#include <bits/stdc++.h>
// #include<iostream>
using namespace std;

int isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        return n % i ?: 0;
    }
    return n < 2 ? 0 : 1;
}

int main()
{
    for (int i = 0; i < 20; i++)
    {
        isPrime(i)?cout<<i<<" is prime"<<endl:cout<<i<<" is not prime"<<endl;
    }
    
    return 0;
}