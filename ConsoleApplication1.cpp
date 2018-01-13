
#include "stdafx.h"
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>


//part one
using namespace std;

	void nodata()
	{

		cout << "Hello user, There is no data to be shown at this time" << endl;

	}
	 
	float arearec()
	{
		                                  
		return 120 * 4.5;

	}

	double pi_cal(double r)
	{
		return 2 * M_PI*r;
	}

	double Cy_vol(double r, double h)
	{

		return M_PI*pow(r, 2)*h;
	}
	
	float Cy_Are(float r)
	{

		return M_PI*pow(r, 2);

	}
	int Cu_sum(int x, int y)
	{

		return x + y;
	}
		
		int main()
	{

		nodata();
		cin.get();

		cout << "The area of a rectangle 120f by 4.5f = " << arearec() << endl;
		cin.get();
		
		cout << "The circumference of a circle that has a radius of 5.5 = " << pi_cal(5.5) << endl;
		cin.get();
		
		cout << "The Volume of a cylinder where R^2 = 3.2 and height = 8 is equal to " << Cy_vol(3.2, 8) << endl;
		cin.get();
		
		cout << "The area of a cylinder where r^2 = 10.3 is equal to " << Cy_Are(10.3) << endl;
		cin.get();

		cout << "Please enter a number: ";
		int A,B= 0;
		cin >> A;
		cout << "Please enter a number: ";
		cin >> B;
        
		cout << "\nThe sum of " << A << " + " << B << " = " << Cu_sum(A, B) << endl << endl;

		system("pause");


		return 0;
	
	}
	
	


