#include"bank-dec.h"
float account::balance=0;
account::account()
{
	
}
void account::displayBalance()
{
	cout<<"Balance in the account is : "<<balance<<endl;
}

float account::getBalance()
{
	return balance;
}
void account::setDetails()
{
	   cout<<"\n\nEnter Customer Name :- ";
       cin>>name;
       cout<<"Enter Account Number :- ";
       cin>>ac_no;
       
       //cout<<"Enter Account Type :- ";
       //cin>>type;		
}

void Sav_acc::deposit()
{
	float amt,interest;
	//type=account::getType();
	//type='s';
	cout<<"Enter the amount to be deposited: \n";
	cin>>amt;
	savbal+=amt;
	interest=savbal*6/100/12;
	cout<<"Enter the time period in months: ";
	cin>>months;
	interest=interest*months;
	savbal+=interest;
	displayBalance();
	/*
	interest = balance*(0.06/12);
    cout<<"Enter time period in months: ";
    cin>>months;
    interest=(interest*months);
    cout<<"\nInterest = "<<interest;
    balance+=interest;
    display();
}
	*/
	
	
	
}
void Sav_acc::displayBalance()
{
	cout<<"Balance in the account is : "<<savbal<<endl;
}
void Sav_acc::swithdrawal()
{
	cout<<"Enter the amount to withdraw: ";
	float amt;
	cin>>amt;
	if(amt<=savbal)
	{
	savbal-=amt;
	cout<<"Amount withdrawn is "<<amt<<endl<<"New Balance is "<<savbal<<endl;
	}
	else 
	{
		cout<<"Please enter a value between 1 and "<<savbal<<endl;
	}

}
float Sav_acc::savbal=0;
Sav_acc::Sav_acc()
{
	
}
float cur_acc::curbal=0;
cur_acc::cur_acc()
{
	
}
void cur_acc::deposit()
{
	float amt;
	//type=account::getType();
	//type='c';
	cout<<"Enter the amount to deposit(amount>=Rs. 1000): \n";
	cin>>amt;
	curbal+=amt;

}
void cur_acc::cwithdrawal()
{
	float penalty,amt;
	if(curbal<1000)
	{
		penalty=(1000-curbal)/10;
		curbal-=penalty;
		cout<<"Service charge(penalty) of "<<penalty<<" is imposed!"<<endl;
		cout<<"Current balance after deducting penalty is: "<<curbal<<endl;
	}
	cout<<"Enter the amount to withdraw: \n";
	cin>>amt;
	curbal-=amt;
	if(curbal<1000)
	{
		penalty=(1000-curbal)/10;
		curbal-=penalty;
		cout<<"Service charge(penalty) of "<<penalty<<" is imposed!"<<endl;
		cout<<"Current balance after deducting penalty is: "<<curbal<<endl;
	}

}
void account::dispfull()
{
	cout<<"NAME: "<<name<<endl<<"Ac. No.: "<<ac_no<<endl<<endl;

}
void cur_acc::displayBalance()
{
	cout<<"Balance in the account is : "<<curbal<<endl;
}

void cur_acc::get_chequebook()
{
    cout<<"\nYour chequebook number is "<<account::getAccNo()<<endl;
    dispfull();
}
