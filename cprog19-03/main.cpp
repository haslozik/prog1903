#include <iostream>

using namespace std;

int t[10][10], i=0 ,j=0, suma=0;

class zadanie {
	
	public: 
	
	void zerowanie() {
	    for( int i = 0; i < 10; i++ ) {
	    	for (j = 0; j < 10; j++) {
	        	t[i][j] = 0;
	   		}
		}
	};

	void losowanie() {
		for (i = 0; i < 10; i++) {
	        for (j = 0; j < 10; j++) {
	            t[i][j] = rand()%6;
	 
	            cout << t[i][j] <<endl;
	 
				suma = suma + t[i][j];
	        }
	 	}
	}
};

int main(int argc, char** argv) {
	
	zadanie z1;
	
	z1.zerowanie();
	z1.losowanie();
	
	cout<<"suma elementow:"<<suma;

	return 0;
}

