//Program to print the natural number using recursion in C++

#include <iostream>
using namespace std;

int nSum(int n)
{
   if (n == 0) {
 return 0;
   }
    int nat = n + nSum(n - 1);
 return nat;
}

  int main()
{
    int n = 5;
    int sum = nSum(n);

      cout << "Sum = " << sum;
    return 0;
}
