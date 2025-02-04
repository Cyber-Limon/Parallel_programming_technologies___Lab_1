#include <iostream>
#include <cmath>



using namespace std;

int main() {

	int N = 900000000;
	double sum = 0;
	double start_time = clock();

	for (int n = 1; n <= N; n++)
		sum += pow(-1, n) / (n - log(n));

	double end_time = clock();

	cout << "SUM  = " << sum << "\n";
	cout << "Time = " << (end_time - start_time) / CLK_TCK << "\n\n\n";



	return 0;
}	