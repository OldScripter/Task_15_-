#include <iostream>
#include <vector>
#include <cmath>

void PrintVector(std::vector<int> v)
{
	std::cout << "| ";
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << " | ";
	}
	std::cout << "\n";
}

int main()
{
	std::vector<int> v = { -100,-50, -5, 1, 10, 15 };

	PrintVector(v);

	for (int i = 0; i < v.size() - 1; i++)
	{
		for (int j = 0; j < v.size() - i - 1; j++)
		{
			if (std::abs(v[j]) > std::abs(v[j + 1]))
			{
				int temp = v[j + 1];
				v[j + 1] = v[j];
				v[j] = temp;
			}
		}
	}

	PrintVector(v);

	return 0;
}
