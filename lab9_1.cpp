#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double loan, rate, pay, interest, total, newbalance;
	int year = 1;
	
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

    //use 'setw' to set width of table and 'left' to set left-alignment
    //you can change input argument of 'setw()' to see the effect
    //Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
    //you can change input argument of 'setprecision()' to see the effect
	while(loan > 0){
    	cout << fixed << setprecision(2);
	    cout << setw(13) << left << year++;
	    cout << setw(13) << left << loan;
	    interest = loan*(rate/100);
    	cout << setw(13) << left << interest;
    	total = interest + loan;
	    cout << setw(13) << left << total;
	    if(pay > total)pay = total;
	    cout << setw(13) << left << pay;
	    newbalance = total - pay;
	    cout << setw(13) << left << newbalance;
	    loan = newbalance;
	    cout << "\n";
	}
	return 0;
}