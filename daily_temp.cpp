#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temps) {
        vector<int> results(temps.size());
        stack<int> stack;
        for (int i = 0; i < temps.size(); i++) {
            while (!stack.empty() && temps[stack.top()] < temps[i]) {
                cout<< i - stack.top()<<"\n";
                results[stack.top()] = i - stack.top();
                stack.pop();
            }
            stack.push(i);
        }

        return results;
    }

int main(){

}