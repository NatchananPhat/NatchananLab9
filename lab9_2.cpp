#include<iostream>
using namespace std;

void printO(int N, int M){
    if(N <= 0 || M <= 0){
        cout << "Invalid input";
    }
    else{
        if(N > 0 || M > 0){
            for(int x=1;x<=N;x++){
                for(int y=1;y<=M;y++){
                    cout << "O";
                }
                cout << "\n";
            }
        }
    }
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
