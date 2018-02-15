#include <iostream>
using namespace std;

int main()
{
	int low, high, i, flag;

	cout << "Enter two numbers(intervals): ";
	cin >> low >> high;

	cout << "Prime numbers(First all) and Lowest Common Multiple(Last printed number) between " << low << " and " << high << " are: ";
	
	while (low < high)
	{
		flag = 0;

		for (i = 2; i <= low / 2; ++i)
		{
			if (low % i == 0)
			{
				flag = 1;
				break;
			}
		}

		if (flag == 0)
			cout << low << " ";

		++low;
	}
	for (int i = low; i <= high; i++)
	{
		if (i%low == 0 && i%high == 0)
			std::cout << i << std::endl;
	}

	return 0;
}
