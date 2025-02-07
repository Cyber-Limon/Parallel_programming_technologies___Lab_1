#include <iostream>



using namespace std;

int main() {

	unsigned long N = 1500000000;
	double sum = 0;
	double start_time = clock();

	for (unsigned long n = 1; n <= N; n += 2) {
		sum += -1.0 / (n - log(n));
		sum +=  1.0 / (n + 1 - log(n + 1));
	}

	double end_time = clock();

	cout << "SUM  = " << sum                               << "\n";
	cout << "Time = " << (end_time - start_time) / CLK_TCK << "\n\n\n";



	return 0;
}