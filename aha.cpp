#include "aha.h"
#include <cmath>
#include <iostream>
using namespace std;

int ahaChooseAlgothrims(int n)
{
	return 0;
}

int ahaInput(unsigned int *n, double **input)
{
	cout << "Input the number:\n";
	cin >> *n;
	cout << "Input the array:\n";
	if (*input != NULL)
	{
		// elog a warning.
		ahaFree((void *)*input);
	}
	*input = (double*)malloc(*n * sizeof(double));
	for (int i = 0; i < *n; i++)
	{
		cin >> (*input)[i];
	}
	return 0;
}

int ahaOutput(double *output, int n)
{
	cout << "the output is:\n";
	for (int i = 0; i < n; i++)
		cout << output[i] << " ";
	cout << endl;
	return 0;
}

int ahaBucketSort()
{
	return 0;
}

int ahaFree(void *p)
{
	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
	return 0;
}