#include "Values.h"

int main()
{
	cout << "How many numbers will you input? ";
	int size;
	cin >> size;
	vector<double> numbers(size, 0);
	for(int i = 0; i < size; i++)
	{
		cout << "Input nr. " << i + 1 << ": ";
		cin >> numbers[i];
	}
	cout << "Maximum value: " << Values::Max(numbers) << endl
		<< "Minimum value: " << Values::Min(numbers) << endl
		<< "Arithmetic mean: " << Values::Mean(numbers) << endl
		<< "Median: " << Values::Median(numbers) << endl
		<< "Mode: " << Values::Mode(numbers) << endl;
}