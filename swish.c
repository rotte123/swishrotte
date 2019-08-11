#include <stdio.h>

#include <conio.h>

#include <math.h>


int main()

{

	float mrp,disc,totalcost=0.0;

    	scanf("%f %f",&mrp,&disc);

	printf("\n");

	while(mrp>=1.0)

	{

		totalcost+=mrp;

		mrp=truncf(mrp-(mrp*(disc/100)));

	}

	printf("%.2f",totalcost);
	return 0;

}