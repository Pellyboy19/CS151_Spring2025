#include <iostream>
using namespace std;

int main() 
{
    double weight, ratePer500Miles, totalCost;
    int distance;


    cout << "Enter the weight of the package (in kg): ";
    cin >> weight;

    
   if(weight <= 0 || weight > 20) {
        cout << "Invalid weight. ";
        cin >> weight;
    }

   
    cout << "Enter the distance to be shipped (in miles): ";
    cin >> distance;

    
    if(distance < 10 || distance > 3000) {
        cout << "Invalid distance. Please enter a distance between 10 and 3000 miles: ";
        cin >> distance;
    }

 
    if (weight <= 2) {
        ratePer500Miles = 1.10;
    } 
    else if (weight <= 6) {
        ratePer500Miles = 2.20;
    } 
    else if (weight <= 10) {
        ratePer500Miles = 3.70;
    } 
    else {  // weight <= 20 (already validated)
        ratePer500Miles = 4.80;
    }

    // Calculate cost
    int segments = (distance + 499) / 500;  // Calculate how many full 500 mile segments are needed
    totalCost = segments * ratePer500Miles;

    // Display charges
    cout << "Total shipping charges: $" << totalCost << endl;

    return 0;
}
