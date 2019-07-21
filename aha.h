#ifndef AHA_H
#define AHA_H

extern int ahaChooseAlgothrims(int n);
extern int ahaInput(unsigned int *n, double **input);
extern int ahaOutput(double *output, int n);
extern int ahaBucketSort();
extern int ahaFree(void *p);

#endif