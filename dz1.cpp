#include <stdio.h>
#include <math.h>


int main() {
	// Задание 1: 
	printf("Task 1:\n\n");
	printf("In this task we will calculate area and perimiter for triangle with cordinates (x1,y1),(x2,y2),(x3,y3)\n");
	float x1, x2, x3, y1, y2, y3; //Задаем кординаты
	printf_s("Please enter fist cordinate x1,y1\n");
	scanf_s("%f,%f", &x1, &y1);
	printf_s("Please enter second cordinate x2,y2\n");
	scanf_s("%f,%f", &x2, &y2);
	printf_s("Please enter third cordinate x3,y3\n");
	scanf_s("%f,%f", &x3, &y3);

	float abx, aby, acx, acy, bcx, bcy; // Считаем x и y компоненты вектора AB, AC, и BC
	abx = (x2 - x1);
	aby = (y2 - y1);
	acx = (x3 - x1);
	acy = (y3 - y1);
	bcx = (x3 - x2);
	bcy = (y3 - y2);


	float a, b, c, d, g, area, perimeter;
	a = sqrt(pow(abx, 2) + pow(aby, 2));// считаем модуль вектора a,b,c
	b = sqrt(pow(acx, 2) + pow(acy, 2));
	c = sqrt(pow(bcx, 2) + pow(bcy, 2));

	d = ((abx * acx) + (aby * acy)) / (a * b); // Считаем по формуле угол между два вектора. 
	g = acos(d);                           // Узнаем значение g из арккосинуса
	area = 0.5 * a * b * sin(g);           // Формула площади треугольника
	perimeter = (a + b + c);               // перимитр

	printf("Area is %.2f perimeter is %.2f\n\n\n", area, perimeter);

	/////////////////////////////////////////////////////////////////
	//Задание 2
	printf("Task 2:\n\n");
	printf("In this task,we will change the first position of a number to the last\n");
	int q, w, e, r, t;
	w = 100;
	printf("Please enter a three-diget number:\n");
	scanf_s("%d", &q);  // проим трехзначное число
	e = q / w;         // узнаем целое частное от делении на 100, то есть первую цифру в изначальном значении
	r = q % w;         // узнаем остаток от делении на 100, то есть две цифры
	t = (r * 10) + e;  // уможная на 10 переносим две цифры на один разряд дальше и прибовляем заднию цифру
	printf("The new number is %d\n\n\n", t);

	/////////////////////////////////////////////////////////////////
			// Задание 3

	printf("task 3:\n\n");
	printf("Type how many seconds it has gone from the start of the day:\n");
	int N, h, o, m, s;
	scanf_s("%d", &N);
	h = N / 3600; // Количество часов
	o = N % 3600; // Это остаток то есть сколько еще времени не входящие в часы
	m = o / 60; //Количество минут
	s = o % 60; // остаток то есть секунды
	printf("N=%d- %d hours, %d minutes, %d seconds- %02d:%02d\n\n\n", N, h, m, s, m, s);

	/////////////////////////////////////////////////////////////////
		// Задание 4
	printf("task 4:\n\n");
	printf("By knowing a day in a year, we will calucate the number of this day in the week.\n\n");
	int day, year, res;
	printf("Please enter on witch day 1st january starts from 1-7, 1-monday, 7-sunday:\n");
	scanf_s("%d", &day);
	printf("Please enter a number of a day in a year, number 1-365:\n");
	scanf_s("%d", &year);

	res = (((year + day) - 2) % 7) + 1; // Чтобы избежать получение 0 вместо 7, считаем деление по модулю до предыдущего и прибовляем 1
	printf("Day number %d is number %d in the week\n\n\n", year, res);


	/////////////////////////////////////////////////////////////////
	// Задание 5
	printf("task 5:\n\n");
	printf("By knowing the sides A and B of rectangle and C, we will calcucate how many squeres with sides C does fit and the resting area.\n\n");
	int A, B, C, area1, quant;
	printf("Please enter the length A:\n");
	scanf_s("%d", &A);

	printf("Please enter the length B:\n");
	scanf_s("%d", &B);

	printf("Please enter the length C:\n");
	scanf_s("%d", &C);

	quant = (A / C) * (B / C); //считаем сколько помещается в длину и в высоту
	area1 = (A * B) - (quant * pow(C, 2)); // изначальную площадь онимаем площадь квадратов


	printf("It does fit %d squeres and the remaining area is %d\n\n\n", quant, area1);




	return 0;
}