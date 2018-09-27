#include<iostream>
#ifndef shape_h
#define shape_h
#include<cstdio>
  
using namespace std;

class SHAPE
{
protected:
		double area,dim1,dim2;
public:
		virtual void setdata()=0;
		virtual double calculatearea()=0;
		
};

class circle: public SHAPE
{
	
public:
	void setdata();
	double calculatearea();
};

class rectangle: public SHAPE
{
	
public:
	void setdata();
	double calculatearea();
};

class square: public SHAPE
{
	
public:
	void setdata();
	double calculatearea();
};

#endif
