#include<iostream>
int main()
{
	//задача 1
	setlocale(LC_ALL, "RU");
	int b, a, sum = 0;
	std::cout << "введите a до 500: ";
	std::cin >> a;
	b = a;
	for (; b <= 500; b++, a++)
	{
		sum = sum + a;
		std::cout << sum << "\n";
	}
	//задача 2



	double x, y = 0;
	std::cout << "введите x";
	std::cin >> x;
	std::cout << "введите y";
	std::cin >> y;
	std::cout << pow(x, y);

	//задача 3
	std::cout << "введите число от 1 до 1000";
	float w, z = 0;
	std::cin >> w;
	for (int i = 1; i <= 1000; i++) {
		z = (z + i);

	}


	z = z / 1000;
	std::cout << "\n Среднее арифметическое  равно  " << z;


	//задача 4
	int h, v, i, n;
	std::cout << "введите a до 20";
	std::cin >> n;
	std::cout << "введите второе число";


	v = 1;

	std::cin >> h;




	for (i = h; i <= 20; i++)

	{



		v = v * i;

	}



	std::cout << " произведение равно = " << v;
	//задача 5
	std::cout << "введите номер варианта: ";
	int tablumn;
	std::cin >> tablumn;
	for (int i = 1; i != 10; ++i)
	{
		std::cout << tablumn << " x " << i << " = " << tablumn * i << '\n';
	}
	return 0;
}