/*programa que lea 6 temperaturas, calucle la temperatura
media la baja y la mas alta*/

#include <iostream>
# include <conio.h>

using namespace std;

int main(){
	int ta,tb, suma=0, media =0,t;
	
	for (int i=4; i <= 24; i+=4){
		cout << "Temperatura "<<i<< ": "; cin >>t;
		suma += t;
		
		if (i==4){
			ta=t;
			tb=t;
		}
		if (t > ta){
		ta =t;
	}
	if (t < tb){
		tb =t;
	}
}

	 media = suma/5;
    cout<<"\nLa temperatura media del dia es: "<<media<<endl;
    cout<<"La temperatura mas alta del dia es: "<<ta<<endl;
    cout<<"La temperatura mas baja del dia es: "<<tb<<endl;

    system("pause");
 return 0;
}	
	
