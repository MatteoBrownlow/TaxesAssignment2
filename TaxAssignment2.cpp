#include <iostream>
using namespace std;

int main(){
    double income = 95000;
    int estateTax = (4.0/100) * income;
    int countyTax = (2.0/100) * income;
    cout << "Estate tax is 4 percent, so " << estateTax << endl;
    cout << "County tax is 2 percent, so " << countyTax << endl;
    cout << "Total taxes are: " << estateTax + countyTax << endl;
    cout << "Remaining income: " << income - (estateTax + countyTax) << endl;
    return 0;
}
