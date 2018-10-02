#include"bank-dec.h"
int main()
{

	Sav_acc ss;
	cur_acc cc;
	account aa;
	char t;
	int ch;
	cout<<"Enter the type of account: s/c? "<<endl;
	cin>>t;
	if(t=='s'||t=='S')
	{
		ss.setDetails();
		while(1)
		{
			cout<<"ENTER A CHOICE:\n";
			cout<<"1: Deposit money\n2: Display Balance\n";
			cout<<"3: Withdrawal\n4: display full details\n5: exit \n";
			cin>>ch;
			switch(ch)
			{
				case 1: ss.deposit();
						break;
				case 2: ss.displayBalance();
						
						break;
				case 3: ss.swithdrawal();
						break;
				case 4: ss.dispfull();
						ss.displayBalance();
						break;
				default: exit(0);
			}

		}

	}
	else
	{
		cc.setDetails();
		while(1)
		{
			cout<<"ENTER A CHOICE:\n";
			cout<<"1: Deposit money\n2: Display Balance\n";
			cout<<"3: Withdrawal\n4: display Full details\n 5:GET CHEQUEUEBOOK\n6: exit";
			cin>>ch;
			switch(ch)
			{
				case 1: cc.deposit();
						break;
				case 2: cc.displayBalance();
						break;
				case 3: cc.cwithdrawal();
						break;
				case 4: cc.dispfull();
						cc.displayBalance();
						break;
				case 5: cc.get_chequebook(); break;
				default: exit(0);
			}

		}



	}





	return 0;
}
