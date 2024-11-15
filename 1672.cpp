#include <iostream>
#include <vector>
using namespace std;

int maximumWealth(vector<vector<int>> &accounts)
{
    int richest;
    for (size_t i = 0; i < accounts.size(); i++)
    {
        int currentCustomerWealth;
        for (size_t j = 0; j < accounts[i].size(); j++)
        {
            currentCustomerWealth += accounts[i][j];
        }

        if (currentCustomerWealth > richest)
        {
            richest = currentCustomerWealth;
        }
    }
    
    return richest;
}