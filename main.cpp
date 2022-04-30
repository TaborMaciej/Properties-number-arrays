#include "functions_h.h"

int main()
{
	int amount, val;
	cout << "How many values would you like to input? ";
	cin >> amount;
	vector<int> numbers;

	for (int i = 0; i < amount; i++)
	{
		cout << "Input value nr. " << i + 1 << ": ";
		cin >> val;
		numbers.emplace(numbers.end(), val);
	}
	cout << endl;

	int min = numbers[0], max = numbers[0], pos_min = 1, pos_max = 1;
	Max_min(&max, &min, &pos_max, &pos_min, numbers);

	cout << max << " is the maximum value. It is the value nr. " << pos_max << endl;
	cout << min << " is the minimum value. It is the value nr. " << pos_min << endl;
	cout << "Average of the given values is " << Average(numbers) << endl;
	return 0;
}