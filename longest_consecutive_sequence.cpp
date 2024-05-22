#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int get_lsq(vector<int> input)
{

    if (input.size() == 0 || input.size() == 1)
    {
        return input.size();
    }

    sort(input.begin(), input.end());

    int res = 1, temp_len = 1;

    for (int i = 0; i < (input.size() - 1); i++)
    {

        if (input[i] == input[i + 1])
        {
            continue;
        }

        if ((input[i] + 1) == input[i + 1])
        {
            temp_len += 1;
            res = temp_len > res ? temp_len : res;
        }
        else
        {
            temp_len = 1;
        }
    }

    return res;
}

int main()
{

    vector<int> input = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};

    cout << get_lsq(input);
}
