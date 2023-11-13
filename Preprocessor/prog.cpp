#include <iostream>
#include "function.h"
using namespace std;


int main()
{
	
	int array[size];
	double array1[size];
	char array2[size];
#ifdef INTEGER
	RandomValueArrayInt(array);
	PrintValueArrayInt(array);
	PrintMinValueArrayInt(array);
	PrintMaxValueArrayInt(array);
	PrintSortArrayInt(array);
	EditArrayInt(array);
#endif


#ifdef DOUBLE
	RandomValueArrayDouble(array1);
	PrintValueArrayDouble(array1);
	PrintMinValueArrayDouble(array1);
	PrintMaxValueArrayDouble(array1);
	PrintSortArrayDouble(array1);
	EditArrayDouble(array1);
#endif

#ifdef CHAR
	RandomValueArrayChar(array2);
	PrintValueArrayChar(array2);
	PrintMinValueArrayChar(array2);
	PrintMaxValueArrayChar(array2);
	PrintSortArrayChar(array2);
	EditArrayChar(array2);
#endif



	
}


