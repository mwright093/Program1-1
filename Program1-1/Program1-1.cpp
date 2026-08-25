// This program calculates user pay. 
//

#include <iostream>
using namespace std;

int main()
{
    double hours = 0.0;
    double rate  = 0.0;
    double pay   = 0.0;

    //Get user number of hours worked
    cout << "How many hours did you work?  ";
    cin >> hours;

    //Get user hourly pay rate
    cout << "How much do you get paid per hour?  ";
    cin >> rate;

    //Calculate pay.
    pay = hours * rate;

    //Display the pay
    cout << "You earned $" << pay << endl;
    
    return 0;
}
