#include <iostream>
using namespace std;

void get_primes(int f, int s);
void get_lcm(int one, int two );

int main() {
	int first;
	int second;

	cout << "Please enter the first number : ";
	cin >> first;
	cout << "Please enter the second number : ";
	cin >> second;

	get_primes(first, second);
	get_lcm(first, second);
}

void get_primes(int f, int s){
	for (int i = f; i <= s; i++) {
		bool prime = true;
		for (int p = true; p < i; p++) {
			if (i%p == 0) {
				prime = false;
		} 
		}
		if (prime) { cout << i << "is prime" << endl; }
}
}
void get_lcm(int one, int two){
	int one_counter = one;
	int two_conuter = two;

	while (one != two) {
		if (one < two) {
			one += one_counter;
		}
		else {
			two += two_conuter;
		}
	}

	cout << "The LCM is : " << two << endl;
}

