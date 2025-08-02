#include <iostream>
using namespace std;

int Fibonacci(int n) {
   if (n < 0) {
      return -1; // Handle negative input
   }
   else if (n == 0) {
      return 0;
   }
   else if (n == 1) {
      return 1;
   }
   else {
      return Fibonacci(n - 1) + Fibonacci(n - 2); // Recursive call
   }
}

int main() {
   int index;
   cin >> index;

   cout << "Fibonacci(" << index << ") is " << Fibonacci(index) << endl;

   return 0;
}
