#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Shipping rates for different weight categories
    const double RATE2  = 1.10;
    const double RATE6  = 2.20;
    const double RATE10 = 3.70;
    const double RATE20 = 4.80;

    double weight, distance, rate, price;

    // Ask user for input
    cout << "Enter the package weight and distance\n";
    cin >> weight >> distance;

    // Validate weight
    if (weight <= 0 || weight > 20) {
        cout << "Invalid weight. Must be > 0 and <= 20.\n";
        return 1; // stop program if invalid
    }

    // Validate distance
    if (distance < 10 || distance > 3000) {
        cout << "Invalid distance. Must be >= 10 and <= 3000.\n";
        return 1;
    }

    // Determine rate based on weight
    if (weight <= 2)
        rate = RATE2;
    else if (weight <= 6)
        rate = RATE6;
    else if (weight <= 10)
        rate = RATE10;
    else
        rate = RATE20;

    // Calculate shipping price
    if (distance > 500)
        price = (distance / 500.0) * rate;
    else
        price = rate;

    // Print result with 2 decimal places
    cout << setprecision(2) << fixed;
    cout << "The shipping price for package is " << price << endl;

    return 0;
}
