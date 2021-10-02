// C++ program to find number of pairs
// in an array such that their XOR is 0

#include <bits/stdc++.h>
using namespace std;

// Function to calculate the answer
int calculate(int a[], int n){
	
	// Finding the maximum of the array
	int *maximum = max_element(a, a + n);

	// Creating frequency array
	// With initial value 0
	int frequency[*maximum + 1] = {0};
	
	// Traversing through the array
	for(int i = 0; i < n; i++)
	{
		// Counting frequency
		frequency[a[i]] += 1;
	}
	int answer = 0;
	
	// Traversing through the frequency array
	for(int i = 0; i < (*maximum)+1; i++)
	{
		// Calculating answer
		answer = answer + frequency[i] * (frequency[i] - 1) ;
	}
	return answer/2;
}

int main()
{
int a[] = {1, 2, 1, 2, 4};
int n = sizeof(a) / sizeof(a[0]);
	
// Function calling
cout << (calculate(a,n));
}
