#include <iostream>

using namespace std;

int main()
{
	// input the desired int
	// to Fizz and / or Buzz.
	
	int n{0};
	cout << "Enter N: ";
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		// if the number is divisible by neither
		// 3 or 5, then just print it.
		
		if (i % 3 != 0 && i % 5 != 0) {cout << i;}
		else 
		{
			// if divisible by 3, print "Fizz"
			// if divisible by 5, print "Buzz"
			// if divisible by both, it will
			// print "FizzBuzz".
			
			if (i % 3 == 0) {cout << "Fizz";}
			if (i % 5 == 0) {cout << "Buzz";}		
		}
		
		// print a comma if this isn't the last
		// number. just to look pretty.
			
		if (i != n){cout << ", ";}
	}
	
	return 0;
}
