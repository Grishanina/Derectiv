#include <stdio.h>
#include <locale.h>
#include <math.h>
//
#define A 67
#define B 13
//
#define N k*k 
#define L z*z
#define NL sqrt(N+L)
//
#define X xx*xx
#define Y yy*yy
#define Z zz*zz
#define XY sqrt(X+Y)
#define YZ sqrt(Y+Z)
#define XZ sqrt(X+Z)
#define P sqrt(XY+YZ+XZ)



int main()
{
	setlocale(LC_ALL, "Rus");

	//������� 1
	
	/*double c = A;
	double d = B;
	double v = c / d;
	printf("�����: %f / %f = %f",c, d, v);*/
	//

	//������� 2
	
	/*printf("������� ���������� ����� X:");
	int x1 = 1;
	int x2 = 2;

	printf("\n");
	printf("������� ���������� ����� Y:");
	int y1 = 3;
	int y2 = 5;

	printf("\n");
	int k = x2 - x1;
	int z = y2 - y1;
	printf("����� ������� = %f", NL);*/
	
	//������� 3
	
	printf("������� ���������� ����� X:");
	int x1 = 1;
	int x2 = 2;
    printf("\n");
	
	printf("������� ���������� ����� Y:");
	int y1 = 3;
	int y2 = 5;
	printf("\n");

	printf("������� ���������� ����� Z:");
	int z1 = 6;
	int z2 = 2;
	printf("\n");

	if (((x1 != y1) && (x2 != y2)) || ((x1 != z1) && (x2 != z2)) || ((y1 != z1) && (y2 != z2)))
	{
		printf("����� A(%d; %d) B(%d; %d) C(%d; %d) �������� �����������. \n", x1, x2, y1, y2, z1, z2);

		int xx = x2 - x1;
		int yy = y2 - y1;
		int zz = z2 - z1;

		printf("�������� ������������ = %f", P);


	}
	else
	{
		printf("����� A(%d; %d) B(%d; %d) C(%d; %d) �� �������� �����������.", x1, x2, y1, y2, z1, z2);
	}


}