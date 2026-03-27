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

    // Read input directly, no extra prompts
    cin >> weight >> distance;

    // Validate input ranges
    if (weight <= 0 || weight > 20) return 1;    // exit on invalid weight
    if (distance < 10 || distance > 3000) return 1; // exit on invalid distance

    // Determine rate
    if (weight <= 2) rate = RATE2;
    else if (weight <= 6) rate = RATE6;
    else if (weight <= 10) rate = RATE10;
    else rate = RATE20;

    // Calculate shipping price
    if (distance > 500)
        price = (distance / 500.0) * rate;
    else
        price = rate;

    // Print output in correct format
    cout << fixed << setprecision(2);
    cout << "The shipping price for package is " << price << endl;

    return 0;
}
