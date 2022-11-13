#include <iostream>

using  namespace  std;

int main() {
	int  salary;
	cout <<"please enter  your  salary:  ";
	cin  >> salary;
	
	if (salary <6000000){
		cout <<salary;
	}
    else if  (salary >=6000000 && salary <8000000){
        salary=5/100*salary;
        cout <<salary; 
   	}    
    else if  (salary >=8000000 &&  salary <10000000){
        salary=10/100*salary;
        cout  <<salary;
	}    
    else if  (salary >=10000000  &&  salary <14000000){
        salary=15/100*salary;
        cout <<salary;
	}
    else if   (salary >=14000000  &&  salary <18000000){
        salary=20/100*salary;
        cout  <<salary;
   }     
    else if  (salary >=18000000  &&  salary  <25000000){
        salary=25/100*salary;
        cout <<salary;
    }
    else if  (salary >25000000){
        salary=35/100*salary;
        cout  <<salary;
    }
}
