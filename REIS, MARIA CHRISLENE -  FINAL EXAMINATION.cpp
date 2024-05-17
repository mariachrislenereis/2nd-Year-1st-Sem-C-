#include<iostream>
using namespace std;
int main()
{
	string choice;
	string usern="admin8";
	string passw="admin12345";
	
	cout<<"\t\t\t\t-------Welcome to the Program!-------";

	cout<<"\nType the username: ";
	cin>>usern;
	cout<<"Type the password: ";
	cin>>passw;
	
	do{
	int num;
	float C=0, F=0;
	
		if(usern=="admin8" && passw=="admin12345"){
		cout<<"\t\t\tConvert Celsius to Fahrenheit or Fahrenheit to Celsius\n";
		cout<<"\nGeneral Direction: Choose the number of what conversion you want.";
		cout<<"\n[1] Celsius to Fahrenheit";
		cout<<"\n[2] Fahrenheit to Celsius";
		
		cout<<"\n\n\nType the number: ";
		cin>>num;
		
		switch(num){
			case 1:
				cout<<"\nType the Celsius degree: ";
				cin>>C;
				F=(C*9/5)+32;
				
				cout<<"\nThe Fahrenheit degrees is "<<F<<".";
				break;
				
			case 2:
				cout<<"\nType the Fahrenheit degree: ";
				cin>>F;
				C=(F-32)*5/9;
				
					cout<<"\nThe Celsius degrees is "<<C<<".";
				break;
			default:
				cout<<"\nInvalid input.";			
		}
		
	}
	else{
		cout<<"\nInvalid login, please try again.";
	}	
		

	cout<<"\n\nDo you want to try again [Y/y for yes and type any key to exit]? ";
	cin>>choice;
	
	}
	
	while(choice=="Y" || choice=="y");
	cout<<"\n\nThank you for using this program!";

	return 0;
}
