#include<iostream>
using namespace std;
int main()
{
	string a, b, c, d, e;
	int score;
	
	cout<<"\n\t\t\t\t Welcome to Quiz: Capital of Different Countries ";
	cout<<"\n\nGeneral Direction: This is a 5-item quiz. Type the correct answer for the given questions.";
	
	
	cout<<"\n\n1. What is the capital of Japan? ";
	cin>>a;
	
	if (a == "tokyo" || a=="TOKYO" || a=="Tokyo"){
		score=score+1;
	}
	else{
		score=score+0;
	}
	
	cout<<"2. What is the capital of the Philippines? ";
	cin>>b;
	
	if (b == "manila" || b=="MANILA" || b=="Manila"){
		score=score+1;
	}
	else{
		score=score+0;
	}
	
	cout<<"3. What is the capital of South Korea? ";
	cin>>c;
	
	if (c == "seoul" || c=="SEOUL" || c=="Seoul"){
		score=score+1;
	}
	else{
		score=score+0;
	}
	
	cout<<"4. What is the capital of Canada? ";
	cin>>d;
	
	if (d == "ottawa" || d=="OTTAWA" || d=="Ottawa"){
		score=score+1;
	}
	else{
		score=score+0;
	}
	
	cout<<"5. What is the capital of New Zealand? ";
	cin>>e;
	
	if (e == "auckland" || e=="AUCKLAND" || e=="Auckland"){
		score=score+1;
	}
	else{
		score=score+0;
	}
	
	cout<<"\n-----RESULTS-----";

	if (a == "tokyo" || a=="TOKYO" || a=="Tokyo"){
		cout<<"\n1. Correct!";
	}
	else{
		cout<<"\n1. Incorrect.";
	}
	
	if (b == "manila" || b=="MANILA" || b=="Manila"){
		cout<<"\n2. Correct!";
	}
	else{
		cout<<"\n2. Incorrect.";
	}
	
	if (c == "seoul" || c=="SEOUL" || c=="Seoul"){
		cout<<"\n3. Correct!";
	}
	else{
		cout<<"\n3. Incorrect.";
	}
	
	if (d == "ottawa" || d=="OTTAWA" || d=="Ottawa"){
		cout<<"\n4. Correct!";
	}
	else{
		cout<<"\n4. Incorrect.";
	}
	
	if (e == "auckland" || e=="AUCKLAND" || e=="Auckland"){
		cout<<"\n5. Correct!";
	}
	else{
		cout<<"\n5. Incorrect.";
	}	

	cout<<"\n\nScore: You got "<<score<<" out of 5.";
	cout<<"\n\n\nThank you for participating!";
	
	return 0;

}
