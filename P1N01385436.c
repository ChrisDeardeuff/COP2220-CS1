#include <stdio.h>

int main (void){

//Compound Expression

	int comp = 3;
	int compOne = comp;	
	comp *= comp; 
	compOne= compOne * compOne;
	int sqr= comp*comp;
//#1 
	printf("\n\n 3x3=%d\n\n",comp);

//#2
	printf("However, 9^2=%d\n\n",sqr);

// Unary Expressions 

	 int One= 1;
	 int Two= 2;
	 int Three= 1+2;
	 int ThreeK= 3000;
	 int FiveThouFifty=5550;
	 int diff= ThreeK-FiveThouFifty;

//#1
	 printf("1+2= %d\n\n",Three);
//#2
	 printf("3000-5550= %d\n\n",diff);

//floats

	 float ThreePointFour= 3.4;
	 float FourPointNine= 4.9;
	 float sum= ThreePointFour+FourPointNine;
	 float SevenPointSix= 7.6;
	 float TwoHundredPointTwo= 200.2;
	 float difference= SevenPointSix-TwoHundredPointTwo;
//#1
	 printf("3.4+4.9= %f\n\n",sum);
//#2
	 printf("7.6-200.2=%f\n\n",difference);

//Int Stuff

	 int Red=38291;
	 int Green=283945;
	 int Blue=5;
	 int White=Red+Green+Blue;
	 int lightBlue= Green/Blue;
//#1
	 printf("38291+283945+5=%d\n\n",White);
//#2
	printf("283945/5= %d\n\n",lightBlue); 
//ASCII Character

        char A= 'A';
        printf("A= %d\n\n",A);
        char AA= ++A;
        printf("A+1= %d\n\n",AA);
// 100/3
        float val= 100.0/3.0;
        printf("100 divided by 3= %2.0f\n\n", val);
//End
       	return (0);
}