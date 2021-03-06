// Eratosthenes sieve.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "cmath"

using namespace std;

int main()
{
	const int n = 100;
	int arr[n];
	for (int i = 0; i < n; ++i) arr[i] = i;

	int p = 2;
	while (p*p < sqrt(n)) {
		for (int i = 2; i < n; i = i + p) {
			arr[i + p] = -1;

		}
		p = p + 1;
		while (arr[p] != 0) ++p;
	}

	int k = 0;
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			cout << arr[k] + " | ";
			++k;
		}
		cout << "kkk/n";
	}
    return 0;
}

