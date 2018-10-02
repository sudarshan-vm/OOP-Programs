#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class account
{
	string name;
	int ac_no;
	char type;
	protected:
		static float balance;
	public:
			virtual void displayBalance();
			float getBalance();
			account();
			void setDetails();
			void dispfull();
   			
   			int getAccNo()
   			{
   				return ac_no;
   			}
   			

};

class Sav_acc:public account
{
	static float savbal;
	int months;
	public:
		void deposit();
		void displayBalance();
		void swithdrawal();
		Sav_acc();
};
class cur_acc:public account
{
	static float curbal;
	public:
		void deposit();
		void displayBalance();
		void cwithdrawal();
		cur_acc();
		void get_chequebook();
		


}; 



