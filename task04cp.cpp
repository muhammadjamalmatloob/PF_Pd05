#include <iostream>
#include <string>
using namespace std;

string projectTimeCalculation(int needed_hours, int firm_days, int n_workers);

int main()
{
    int needed_hours, firm_days, n_workers;
    cout << "Enter the needed hours: ";
    cin >> needed_hours;
    cout << "Enter the days that the firm has: ";
    cin >> firm_days;
    cout << "Enter the number of all workers: ";
    cin >> n_workers;
    cout << projectTimeCalculation(needed_hours, firm_days, n_workers);
}

string projectTimeCalculation(int needed_hours, int firm_days, int n_workers)
{
    int worker_hours = firm_days*10*n_workers;
    worker_hours = worker_hours - (worker_hours*0.1);
    if (worker_hours >= needed_hours)
    {
        return "Yes!" + to_string(worker_hours - needed_hours) + " hours left.";
    }
    else if (worker_hours <= needed_hours)
    {
        return "Not enough time! " + to_string(needed_hours - worker_hours) + " hours needed";
    }
}