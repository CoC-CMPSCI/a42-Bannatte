#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double RATE2  = 1.10;
    const double RATE6  = 2.20;
    const double RATE10 = 3.70;
    const double RATE20 = 4.80;

    double weight, distance, rate, price;

    cin >> weight >> distance;

    if (weight <= 0 || weight > 20) return 0;
    if (distance < 10 || distance > 3000) return 0;

    if (weight <= 2) rate = RATE2;
    else if (weight <= 6) rate = RATE6;
    else if (weight <= 10) rate = RATE10;
    else rate = RATE20;

    if (distance > 500)
        price = (distance / 500.0) * rate;
    else
        price = rate;

    cout << fixed << setprecision(2);
    cout << "The shipping price for package is " << price << endl;

    return 0;
}
