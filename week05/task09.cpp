#include <iostream>
#include <windows.h>

using namespace std;
int counting2(int , int );
int counting(int);

int main(){
	int number;
	while(true){
	cout << "Enter number: ";
	cin >> number;
	int position2 = number % 10;
	int position1 = number / 10;

	if (position1 == 0){
		counting(position2);
	}
	if(position1 != 0){
		counting2(position1,position2);
	}
}
	
}

int counting(int position2){
	if(position2 == 1){
		cout << " One ";
	}
	if(position2 == 2){
		cout << " Two ";
	}
	if(position2 == 3){
		cout << " Three ";
	}
	if(position2 == 4){
		cout << " Four ";
	}
	if(position2 == 5){
		cout << " Five ";
	}
	if(position2 == 6){
		cout << " Six ";
	}
	if(position2 == 7){
		cout << " Seven ";
	}
	if(position2 == 8){
		cout << " Eight ";
	}
	if(position2 == 9){
		cout << " Nine ";
	}
	if(position2 == 0){
		return 0;
	}
}
int counting2(int position1, int position2){
	if (position1 == 2){
		cout << "Twenty" ;

	if (position2 != 0){
		counting(position2);
	}
}
	if (position1 == 3){
		cout << "Thirty" ;

	if (position2 != 0){
		counting(position2);
	}
}
	if (position1 == 4){
		cout << "Fourty" ;

	if (position2 != 0){
		counting(position2);
	}
}
	if (position1 == 5){
		cout << "Fifty" ;

	if (position2 != 0){
		counting(position2);
	}
}
	if (position1 == 6){
		cout << "Sixty" ;

	if (position2 != 0){
		counting(position2);
	}
}
	if (position1 == 7){
		cout << "Seventy" ;

	if (position2 != 0){
		counting(position2);
	}
}
	if (position1 == 8){
		cout << "Eighty" ;

	if (position2 != 0){
		counting(position2);
	}
}
	if (position1 == 9){
		cout << "Ninety" ;

	if (position2 != 0){
		counting(position2);
	}
}

}
		
