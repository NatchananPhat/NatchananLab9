#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	float loan, rate, pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	int year = 1;
	while(loan != 0){
	    float interest = loan*(rate/100);
	    float total = interest + loan;
	    if(loan <= pay){
	        pay = loan + interest;
	    }
	    float newbalance = total - pay;
	    
    	cout << fixed << setprecision(2);
	    cout << setw(13) << left << year;
	    cout << setw(13) << left << loan;
    	cout << setw(13) << left << interest;
	    cout << setw(13) << left << total;
	    cout << setw(13) << left << pay;
	    cout << setw(13) << left << newbalance;
	    cout << "\n";
	    loan = newbalance;
	    year++;
	}
	return 0;
}