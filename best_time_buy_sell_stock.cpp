#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> input)
{
    int minn = input[0];
    int res = 0;

    for(int i =0 ;i<input.size();i++){
        int cal = input[i] - minn;
        if(cal > 0)
            res = max(res,cal);
        minn = min(minn,input[i]);
    }

    return res;
}

int main()
{

    vector<int> input = {7, 1, 5, 3, 6, 4};

    cout << maxProfit(input);

    return 0;
}