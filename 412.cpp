#include <iostream>
#include <vector>
using namespace std;

vector<string> fizzBuzz(int n)
{
    vector<string> answers;
    for (int i = 1; i <= n; i++)
    {
        string answer;

        if (i % 3 == 0 && i % 5 == 0)
        {
            answer = "FizzBuzz";
        }
        else if (i % 3 == 0)
        {
            answer = "Fizz";
        }
        else if (i % 5 == 0)
        {
            answer = "Buzz";
        }
        else
        {
            answer = to_string(i);
        }
        answers.push_back(answer);
    }

    return answers;
}