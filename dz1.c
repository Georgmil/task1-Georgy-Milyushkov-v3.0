#include <stdio.h>
#include <math.h>


int main() {
	// ������� 1: 
	printf("Task 1:\n\n");
	printf("In this task we will calculate area and perimiter for triangle with cordinates (x1,y1),(x2,y2),(x3,y3)\n");
	float x1, x2, x3, y1, y2, y3; //������ ���������
	printf_s("Please enter fist cordinate x1,y1\n");
	scanf_s("%f,%f", &x1, &y1);
	printf_s("Please enter second cordinate x2,y2\n");
	scanf_s("%f,%f", &x2, &y2);
	printf_s("Please enter third cordinate x3,y3\n");
	scanf_s("%f,%f", &x3, &y3);

	float abx, aby, acx, acy, bcx, bcy; // ������� x � y ���������� ������� AB, AC, � BC
	abx = (x2 - x1);
	aby = (y2 - y1);
	acx = (x3 - x1);
	acy = (y3 - y1);
	bcx = (x3 - x2);
	bcy = (y3 - y2);


	float a, b, c, d, g, area, perimeter;
	a = sqrt(pow(abx, 2) + pow(aby, 2));// ������� ������ ������� a,b,c
	b = sqrt(pow(acx, 2) + pow(acy, 2));
	c = sqrt(pow(bcx, 2) + pow(bcy, 2));

	d = ((abx * acx) + (aby * acy)) / (a * b); // ������� �� ������� ���� ����� ��� �������. 
	g = acos(d);                           // ������ �������� g �� �����������
	area = 0.5 * a * b * sin(g);           // ������� ������� ������������
	perimeter = (a + b + c);               // ��������

	printf("Area is %.2f perimeter is %.2f\n\n\n", area, perimeter);

	/////////////////////////////////////////////////////////////////
	//������� 2
	printf("Task 2:\n\n");
	printf("In this task,we will change the first position of a number to the last\n");
	int q, w, e, r, t;
	w = 100;
	printf("Please enter a three-diget number:\n");
	scanf_s("%d", &q);  // ����� ����������� �����
	e = q / w;         // ������ ����� ������� �� ������� �� 100, �� ���� ������ ����� � ����������� ��������
	r = q % w;         // ������ ������� �� ������� �� 100, �� ���� ��� �����
	t = (r * 10) + e;  // ������� �� 10 ��������� ��� ����� �� ���� ������ ������ � ���������� ������ �����
	printf("The new number is %d\n\n\n", t);

	/////////////////////////////////////////////////////////////////
			// ������� 3

	printf("task 3:\n\n");
	printf("Type how many seconds it has gone from the start of the day:\n");
	int N, h, o, m, s;
	scanf_s("%d", &N);
	h = N / 3600; // ���������� �����
	o = N % 3600; // ��� ������� �� ���� ������� ��� ������� �� �������� � ����
	m = o / 60; //���������� �����
	s = o % 60; // ������� �� ���� �������
	printf("N=%d- %d hours, %d minutes, %d seconds- %02d:%02d\n\n\n", N, h, m, s, m, s);

	/////////////////////////////////////////////////////////////////
		// ������� 4
	printf("task 4:\n\n");
	printf("By knowing a day in a year, we will calucate the number of this day in the week.\n\n");
	int day, year, res;
	printf("Please enter on witch day 1st january starts from 1-7, 1-monday, 7-sunday:\n");
	scanf_s("%d", &day);
	printf("Please enter a number of a day in a year, number 1-365:\n");
	scanf_s("%d", &year);

	res = (((year + day) - 2) % 7) + 1; // ����� �������� ��������� 0 ������ 7, ������� ������� �� ������ �� ����������� � ���������� 1
	printf("Day number %d is number %d in the week\n\n\n", year, res);


	/////////////////////////////////////////////////////////////////
	// ������� 5
	printf("task 5:\n\n");
	printf("By knowing the sides A and B of rectangle and C, we will calcucate how many squeres with sides C does fit and the resting area.\n\n");
	int A, B, C, area1, quant;
	printf("Please enter the length A:\n");
	scanf_s("%d", &A);

	printf("Please enter the length B:\n");
	scanf_s("%d", &B);

	printf("Please enter the length C:\n");
	scanf_s("%d", &C);

	quant = (A / C) * (B / C); //������� ������� ���������� � ����� � � ������
	area1 = (A * B) - (quant * pow(C, 2)); // ����������� ������� ������� ������� ���������


	printf("It does fit %d squeres and the remaining area is %d\n\n\n", quant, area1);




	return 0;
}