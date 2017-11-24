#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main(){
	
	int i,j,sum = 0,max,min, m,n; // i for columns, j for rows
	
	cout << "Number of columns: ";
 	cin >> i;
  	cout << "Number of rows: ";
  	cin >> j;
  	
	int array[i][j];
	srand(time(NULL));
	
	for(m=0; m < i; m++){
		for(n=0; n < j; n++){
			array[m][n] = rand()%100;
		}
	}
	max = array[0][0];
	min = max;
	for(m=0; m < i; m++){
		for(n=0; n < j; n++){
			sum+= array[m][n];
			if( array[m][n] > max)
				max = array[m][n];
			if( array[m][n] < min)
				min = array[m][n];
			cout << array[m][n] << " ";
		}
		cout << endl;
	}
	cout << "The sum is: " << sum << "\nThe average is: " << sum/(i*j) << "\nThe maximum is: " << max << "\nThe minimum is: " << min  << endl;
	return 0;
}
