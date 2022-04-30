#include "Values.h"

void Sort(vector<double> *numbers)
{
	int temp;
	for (int i = 0; i < (*numbers).size(); i++)
	{
		for (int j = 0; j < (*numbers).size() - i - 1; j++)
		{
			if ((*numbers)[j] > (*numbers)[j + 1])
			{
				temp = (*numbers)[j];
				(*numbers)[j] = (*numbers)[j + 1];
				(*numbers)[j + 1] = temp;
			}
		}
	}
}
int Values::Min(vector<double> numbers)
{
	int min = numbers[0];
	for (int val : numbers)
		if (val < min)
			min = val;
	return min;
}
 
int Values::Max(vector<double> numbers)
{
	int max = numbers[0];
	for (int val : numbers)
		if (val > max)
			max = val;
	return max;
}
 
double Values::Mean(vector<double> numbers)
{
	int sum = 0;
	for (int val : numbers)
		sum += val;
	return (double)sum / numbers.size();
}
 
double Values::Median(vector<double> numbers)
{
	Sort(&numbers);
	int mid = numbers.size() / 2;
	if (numbers.size() % 2 == 0)
		return (double) (numbers[mid - 1] + numbers[mid]) / 2;

	else
		return (double) numbers[mid];
}
 
int Values::Mode(vector<double> numbers)
{
	int mode = numbers[0], count, max_count = -1;
	for (int possible_mode : numbers)
	{

		count = 0;
		for (int val : numbers)
			if (possible_mode == val)
				count++;

		if (count > max_count)
		{
			mode = possible_mode;
			max_count = count;
		}
	}

	return mode;
}
 