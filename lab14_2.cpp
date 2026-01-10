#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	//findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

//Do not modify source code above this line 

void showMatrix(const bool a[][N]){
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if( a[i][j] == 1) cout << "1 ";
    		if(a[i][j] == 0) cout << "0 ";
		}
		cout << "\n";
	}
}

void inputMatrix(double a[][N]){
	for(int i=1; i<5; i++){
		cout << "Row " << i << ": ";
		for(int i=0; i<5; i++){
			for(int j=0; j<5; j++){
				cin >> a[i][j];
			}
		}
	}
}

/*void findLocalMax(const double a[][N], bool b[][N]){
	/for(int i=0; i<1; i++){
		for(int j=0; j<5; j++){
			if(i <= 3 && j != 0 && j != 4){
				if(a[i][j] > a[i-1][j] && a[i][j] > a[i+1][j] && a[i][j] > a[i][j-1] && a[i][j] > a[i][j+1]) b[i][j] = true;
				else b[i][j] = false;
			}
		}
	}
}*/