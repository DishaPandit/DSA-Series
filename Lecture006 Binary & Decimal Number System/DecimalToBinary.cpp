/*
WAP to give binary representation of a decimal no.
i/p : 5
o/p : 101

answer is coming wrong in vs code. but on online ide it is correct
not able to figure out why it is wrong here

Also this will give wrong answer when we cross limit of int. So use array or string in that case
*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    cout<<"Enter a number : "<<endl;
    int n;
    cin>> n;

   
    int ans = 0;
    int i = 0;

    while(n!=0)
    {
        int bit = (n&1);
        ans = (bit*pow(10,i)) + ans;
        n = n>>1;
        i++;
    }
    cout <<"Binary representation is : "<<ans<<endl;

    
}

//method 2

/*

// C++ program to convert a decimal
// number to binary number

#include <iostream>
using namespace std;

// function to convert decimal to binary
void decToBinary(int n)
{
	// array to store binary number
	int binaryNum[32];

	// counter for binary array
	int i = 0;
	while (n > 0) {

		// storing remainder in binary array
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}

	// printing binary array in reverse order
	for (int j = i - 1; j >= 0; j--)
		cout << binaryNum[j];
}

// Driver program to test above function
int main()
{
	int n = 17;
	decToBinary(n);
	return 0;
}

*/

//method 3

/*
// CPP program to Decimal to binary conversion
// using bitwise operator
// Size of an integer is assumed to be 32 bits
#include <iostream>
using namespace std;

// Function that convert Decimal to binary
int decToBinary(int n)
{
	// Size of an integer is assumed to be 32 bits
	for (int i = 31; i >= 0; i--) {
		int k = n >> i;
		if (k & 1)
			cout << "1";
		else
			cout << "0";
	}
}

// driver code
int main()
{
	int n = 32;
	decToBinary(n);
}

*/