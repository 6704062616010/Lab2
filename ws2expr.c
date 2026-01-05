#include <stdio.h>
#include<math.h>
int main () {
	float a,b,c,d;
	float A,B,C,D,E;
	
	a=1,b=1,c=5,d=1;
	A = (3*a)/5+1/b;
	B = (3*a+5*b)/(2+c);
	C = (2.0/7)*(pow(4,3+c)-5*d);
	D = sqrt((2+8*b)/a);
	E = cbrt(b*b-4*d);
	printf ("\n4.1\n");
	printf ("A = %.1f\n",A);
	printf ("B = %.1f\n",B);
	printf ("C = %.1f\n",C);
	printf ("D = %.1f\n",D);
	printf ("E = %.1f\n",E);

	a=9,b=2,c=0,d=1;
	A = (3*a)/5+1/b;
	B = (3*a+5*b)/(2+c);
	C = (2.0/7)*(pow(4,3+c)-5*d);
	D = sqrt((2+8*b)/a);
	E = cbrt(b*b-4*d);
	printf ("\n4.2\n");
	printf ("A = %.1f\n",A);
	printf ("B = %.1f\n",B);
	printf ("C = %.1f\n",C);
	printf ("D = %.1f\n",D);
	printf ("E = %.1f\n",E);

	a=0,b=3,c=3,d=3;
	A = (3*a)/5+1/b;
	B = (3*a+5*b)/(2+c);
	C = (2.0/7)*(pow(4,3+c)-5*d);
	D = sqrt((2+8*b)/a);
	E = cbrt(b*b-4*d);
	printf ("\n4.3\n");
	printf ("A = %.1f\n",A);
	printf ("B = %.1f\n",B);
	printf ("C = %.1f\n",C);
	printf ("D = %.1f\n",D);
	printf ("E = %.1f\n",E);
}