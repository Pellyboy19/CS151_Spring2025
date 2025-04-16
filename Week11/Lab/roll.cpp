#include <iostream>
#include <cstdlib>   
#include <ctime>     
#include <iomanip>   
#include <cmath>     

using namespace std;


int rollDie();
double calculateAverage(int rolls);
double absoluteValue(double value);
double percentError(double theoretical, double calculated);

int main() {
    srand(time(0));  

    const int ROLLS = 10;             
    const double THEORETICAL_AVG = 3.5;

    double avg = calculateAverage(ROLLS);
    double error = percentError(THEORETICAL_AVG, avg);

    cout << fixed << setprecision(2);
    cout << "Average of " << ROLLS << " rolls: " << avg << endl;
    cout << "Percent error: " << error << "%" << endl;

    return 0;
}


int rollDie() {
    return 1 + rand() % 6;
}


double calculateAverage(int rolls) {
    int total = 0;
    for (int i = 0; i < rolls; i++) {
        total += rollDie();
    }
    return static_cast<double>(total) / rolls;
}


double absoluteValue(double value) {
    return (value < 0) ? -value : value;

}


double percentError(double theoretical, double calculated) {
    double top = absoluteValue(theoretical - calculated);
    double bottom = theoretical + calculated;
    return 2 * (top / bottom) * 100;
}
