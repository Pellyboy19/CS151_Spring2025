/*
Write a program that hold the prices of 10 items in 10 variables.
The program should display each item's price, the subtotal of the sale,
the amount of sales tax, and the total.

Include iomanip and use the setprecision manipulator to format the output
to two decimal places. Allign the output in columns using the setw manipulator.

Items       Prices
item1        $X.XX
item2        $X.XX
item3        $X.XX
item4        $X.XX
item5        $X.XX
item6        $X.XX
item7        $X.XX
item8        $X.XX
item9        $X.XX
item10       $X.XX

Subtotal     $XX.XX
Sales Tax    8.25%
Total        $XX.XX

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
double items1 = 2.55;
double items2 = 1.24;
double items3 = 3.06;
double items4 = 2.55;
double items5 = 4.05;
double items6 = 3.55;
double items7 = 9.27;
double items8 = 5.58;
double items9 = 8.06;
double items10 =7.12;

double subtotal = items1+items2+ items3+items4+ items5+items6+ items7+items8+ items9+items10;

double salestax = 8.25;
double total = subtotal +((salestax / 100 )* subtotal);

cout<<"Items"<< setw(14) << "Price" << endl;
cout<<"Item1"<< setw(10) << "$"<<items1 << endl;
cout<<"Item2"<< setw(10) << "$"<<items2 << endl;
cout<<"Item3"<< setw(10) << "$"<<items3 << endl;
cout<<"Item4"<< setw(10) << "$"<<items4 << endl;
cout<<"Item5"<< setw(10) << "$"<<items5 << endl;
cout<<"Item6"<< setw(10) << "$"<<items6 << endl;
cout<<"Item7"<< setw(10) << "$"<<items7 << endl;
cout<<"Item8"<< setw(10) << "$"<<items8 << endl;
cout<<"Item9"<< setw(10) << "$"<<items9 << endl;
cout<<"Item10"<< setw(9) << "$"<<items10 << endl<<endl;

cout<<"Subtotal"<< setw(7) << "$"<< subtotal << endl;
cout<<"Sale Tax"<< setw(10) <<salestax <<"%"<< endl;
cout<<"Total"<< setw(10) << "$"<< total << endl;


return 0;
}