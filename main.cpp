#include <iostream>
#include <cmath>
#include "aha.h"

using namespace std;

int main()
{
	cout << "Aha! algorithms." << endl;
	unsigned int n;
	double *result = NULL;
	ahaInput(&n, &result);
	ahaOutput(result, n);
	system("pause");
	return 0;
}