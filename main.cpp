#include <iostream>
#include <vector>

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
    std::cout << "Initial vector:\n";
    std::vector<int> v = { -150,-100,-50, -5, 1, 10, 15 };

    PrintVector(v);

    int operations = 0;
    for (int i = 0; v[0] < 0 && i < v.size(); i++)
    {
        //Thus v is already sorted in ascending order,
        //when bubble sort is reaching non-negative values it can be stopped.
        //All other values are guaranteed to be sorted according to abs-value.
        //if (v[0] >= 0) break;

        for (int j = 0; j < v.size() - i - 1; j++)
        {
            if (std::abs(v[j]) > std::abs(v[j + 1]))
            {
                int temp = v[j + 1];
                v[j + 1] = v[j];
                v[j] = temp;
            }
            operations++;
        }
    }

    std::cout << "Vector after sorting by absolute values:\n";
    PrintVector(v);
    std::cout << "Operations: " << operations << "\n";

    return 0;
}
