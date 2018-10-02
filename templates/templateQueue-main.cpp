#include"templateQueue-dec.h"
int main()
{
    queue<int>iQueue;
    int ch,intEle;
    string sEle;
    float fEle;
    queue<string>sQueue;
    queue<float>fQueue;
    cout<<"***INTEGER QUEUE***"<<endl;
    while(1)
	{
	    iQueue.display();
		cout<<"1:enqueue\n2:dequeue\n3:Display\n4:switch\n5:Exit"<<endl;
		cin>>ch;
		switch(ch)
		{
            case 1: if(iQueue.isfull())
						cout<<"Queue is full!"<<endl;
					else
					{
						cout<<"Enter the element to be enqueued: ";
						cin>>intEle;
						iQueue.enqueue(intEle);
                    }

					break;
			case 2: if(iQueue.isempty())
						cout<<"Queue is empty!"<<endl;
					else
					{
						iQueue.dequeue();
					}
					break;
			case 3: iQueue.display(); break;
			case 4: cout<<"\n\n***STRING QUEUE***\n\n"<<endl;
			        while(1)
                	{
	               sQueue.display();
		            cout<<"1:enqueue\n2:dequeue\n3:Display\n4:switch\n5:Exit"<<endl;
		            cin>>ch;
	            	switch(ch)
	                    	{

		        	case 1: if(sQueue.isfull())
						cout<<"Queue is full!"<<endl;
				    	else
					{
						cout<<"Enter the element to be enqueued: ";
						cin>>sEle;
						sQueue.enqueue(sEle);


					}

					break;
			            case 2: if(sQueue.isempty())
						cout<<"Queue is empty!"<<endl;
					else
					{
						sQueue.dequeue();

					}
					break;
			        case 3: sQueue.display(); break;
			        case 4: cout<<"\n\n***FLOAT QUEUE***\n\n"<<endl;
			                 while(1)
                                    	{
	                         fQueue.display();
		                    cout<<"1:enqueue\n2:dequeue\n3:Display\n4:Exit"<<endl;
		                        cin>>ch;
		                        switch(ch)
		                        {

			                case 1: if(fQueue.isfull())
					    	cout<<"Queue is full!"<<endl;
					    else
					    {
						cout<<"Enter the element to be enqueued: ";
						cin>>fEle;
						fQueue.enqueue(fEle);
				    	}

				    	break;
		            	case 2: if(fQueue.isempty())
						cout<<"Queue is empty!"<<endl;
					            else
					    {
				    	fQueue.dequeue();
					            }
					        break;
			                    case 3: fQueue.display(); break;
			                   default:exit(0);
		                        }//switch of float
                            }//while of float

			                break;
			    	}//switch of string queue
			    
                	}//while of string queue
		
			default: exit(0);
		}//switch of integer queue
	}//switch of integr queue
return 0;
}

