#include "functions_h.h"

void Max_min(int* max, int* min, int* p_max, int* p_min, vector<int> wektor)
{
	int i = 1;
	for (int element : wektor)
	{
		if (*max < element)
		{
			*max = element;
			*p_max = i;
		}

		else if (*min > element)
		{
			*min = element;
			*p_min = i;
		}
		i++;
	}
}

double Average(vector<int> wektor)
{
	int suma = 0;
	for (int element : wektor)
		suma += element;

	return (double)suma / wektor.size();
}