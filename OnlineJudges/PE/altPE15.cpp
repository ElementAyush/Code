#include<iostream>
#include<cstdio>
using namespace std;

int main() {

	double prod = 1;

	for(double i = 40; i != 20; --i)
		prod *= i/(i-20);

	cout << printf("%20f", prod) << '\n';

	return 0;

	}
