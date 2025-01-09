#include <iostream>
using namespace std;

// Define a function to calculate factorial
// recursively
long long factorial(int n)
{
    // Base case - If n is 0 or 1, return 1
    if (n == 0) {
        return 1;
    }
    // Recursive case - Return n multiplied by
    // factorial of (n-1)

    return n * factorial(n - 1);
}

int main()
{
    int num;
   cout<<"\nenter the number =";
   cin>>num;
   int ans=factorial(num);
   cout<<ans<<endl;
    return 0;
}