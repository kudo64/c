#include <iostream>
#include <map>
#include <string>

using namespace std;

int primeNumber(int i = 1000) {

	if (i > 2) {
		primeNumber(i - 1);
	}

	int x = 1;
	for (int n = 2; n <i; n++) {
		if (i % n == 0) {
			x = 0;
			break;
		}
	}
	if (x == 1) {
		cout << i << " ";
	}
	return 0;
}

int main() {
	primeNumber();
}
