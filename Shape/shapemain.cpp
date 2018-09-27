#include"shape.h"

int main()
{
	int ch;
	
	
	while(1)
	{
		cout<<"1. Circle\n2.Rectangle\n3.Square\n";
		cin>>ch;
		switch(ch)
		{
			
			case 1 : {circle ob1;ob1.setdata();break;}
			case 2 : {rectangle ob1;ob1.setdata();break;}
			case 3 : {square ob1;ob1.setdata();break;}
			default: return 0;
		} 
		
	}

}
