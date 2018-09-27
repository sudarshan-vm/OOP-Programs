#include"shape.h"

void circle :: setdata()
{
	cout<<"Enter the radius:";
	cin>>dim1;
	area=calculatearea();
	cout<<"The area is: "<<area;
}

double circle:: calculatearea()
{
	return(3.14*dim1*dim1);
}

void rectangle :: setdata()
{
	cout<<"Enter the dimensions:";
	cin>>dim1>>dim2;
	area=calculatearea();
	cout<<"The area is: "<<area;
}

double rectangle:: calculatearea()
{
	return(dim1*dim2);
}

void square :: setdata()
{ 
	cout<<"Enter the dimension: ";
	cin>>dim1;
	area=calculatearea();
	cout<<"The area is: "<<area;
}

double square:: calculatearea()
{
	return(dim1*dim1);
}


