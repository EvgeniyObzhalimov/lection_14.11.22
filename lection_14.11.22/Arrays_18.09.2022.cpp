#include<iostream>

#include<random>//случайные числа
#include<array>//Многомерные массивы

int main() {
	setlocale(LC_ALL, "Russian");

	/*const int high{5};
	const int length{ 10 };
	int matrix[high][length]{};//1й - строки 2й - столбцы
	//генерация массива
	std::mt19937 gen{ std::random_device()() };
	std::uniform_int_distribution<int> dist(0, 9);
	for (int i = 0; i < high; i++)
	{
		for (int j = 0; j < length; j++)
		{
			matrix[i][j] = dist(gen);

		}
	}

	//matrix print
	for (int i = 0; i < std::size(matrix); i++)
	{
		for (int j = 0; j < std::size(matrix[0]); j++)
		{
			std::cout << matrix[i][j] <<" ";
		}
		std::cout << "\n";
	}
	std::cout<<"next matrix:"<< "\n";
	std::array<int, 5> arr;//одномерный массив
	std::array<std::array<int, length>, high>matrix_stl;

	//array generation
	for (int i = 0; i < std::size(matrix_stl); i++)
	{
		for (int j = 0; j < std::size(matrix_stl[0]); j++)
		{
			matrix_stl[i][j] = dist(gen);
		}

	}

	//matrix print
	for (int i = 0; i < std::size(matrix); i++)
	{
		for (int j = 0; j < std::size(matrix[0]); j++)
		{
			std::cout << matrix_stl[i][j] << " ";
		}
		std::cout << "\n";
	}*/

	//Задача 1 транспонирование массива
	const int high{ 10 };
	const int length{ 10 };
	int matrix[high][length]{};//1й - строки 2й - столбцы
	//генерация массива
	std::mt19937 gen{ std::random_device()() };
	std::uniform_int_distribution<int> dist(11, 98);

	/*for (int i = 0; i < high; i++)
	{
		for (int j = 0; j < length; j++)
		{
			matrix[i][j] = dist(gen);

		}
	}

	//matrix print
	for (int i = 0; i < std::size(matrix); i++)
	{
		for (int j = 0; j < std::size(matrix[0]); j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << "\n";
	}
	//matrix print
	for (int i = 0; i < std::size(matrix[0]); i++)
	{
		for (int j = 0; j < std::size(matrix); j++)
		{
			std::cout << matrix[j][i] << " ";
		}
		std::cout << "\n";
	}
	//matrix print
	for (int i = 0; i < std::size(matrix); i++)
	{
		for (int j = 0; j < std::size(matrix[0]); j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "next matrix:" << "\n";
	std::array<int, 5> arr;//одномерный массив
	std::array<std::array<int, length>, high> matrix_stl;

	//array generation
	for (int i = 0; i < std::size(matrix_stl); i++)
	{
		for (int j = 0; j < std::size(matrix_stl[0]); j++)
		{
			matrix_stl[i][j] = dist(gen);
		}

	}

	//matrix print
	for (int i = 0; i < std::size(matrix[0]); i++)
	{
		for (int j = 0; j < std::size(matrix); j++)
		{
			std::cout << matrix_stl[j][i] << " ";
		}
		std::cout << "\n";
	}
	//Задача 2, 3 - сортировка массива
		for (int i = 0; i < high; i++)
	{
		for (int j = 0; j < length; j++)
		{
			matrix[i][j] = dist(gen);
		}
	}
		for (int i = 0; i < std::size(matrix); i++)
		{
			for (int j = 0; j < std::size(matrix[0]); j++)
			{
				std::cout << matrix[i][j] << " ";
			}
			std::cout << "\n";
		}
		std::cout << "\n";
	for (int i = 0; i < std::size(matrix); i++)
	{
		for (int j = 0; j < std::size(matrix[0]); j++)
		{
			for (int k = 0; k < std::size(matrix[0])-1;k++)
			if (matrix[i][k] > matrix[i][k + 1]) {
				int tmp = matrix[i][k];
				matrix[i][k] = matrix[i][k + 1];
				matrix[i][k + 1] = tmp;
			}
			//std::cout << matrix[i][j] << " ";-ошибочная строка не учитывать
		}

	}
	for (int i = 0; i < std::size(matrix); i++)
	{
		for (int j = 0; j < std::size(matrix[0]); j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n\n";
	for (int i = 0; i < std::size(matrix); i++)
	{
		for (int j = 0; j < std::size(matrix[0]); j++)
		{
			for (int k = 0; k < std::size(matrix[0]) - 1; k++)
				if (matrix[k][j] > matrix[k+1][j]) {
					int tmp = matrix[k][j];
					matrix[k][j] = matrix[k+1][j];
					matrix[k+1][j]= tmp;
				}
			}
		}
	for (int i = 0; i < std::size(matrix); i++)
	{
		for (int j = 0; j < std::size(matrix[0]); j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
	//задача 4_нижняя и верхняя диагональ матрицы
	for (int i = 0; i < high; i++)
	{
		for (int j = 0; j < length; j++)
		{
			matrix[i][j] = dist(gen);
		}
	}
	for (int i = 0; i < std::size(matrix); i++)
	{
		for (int j = 0; j < std::size(matrix[0]); j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";

	for (int i = 0; i < std::size(matrix); i++)
	{
		for (int j = 0; j < std::size(matrix[0]); j++)
		{
			if (j <= i) {
				std::cout << matrix[i][j] << " ";
			}
		}
		std::cout << "\n";
	}
	std::cout << "\n";
	for (int i = 0; i < std::size(matrix[0]); i++)
	{
		for (int j = 0; j < std::size(matrix[0]); j++)
		{
			if (i <= j) {
				std::cout << matrix[i][j] << " ";
			}
			else
				std::cout << "  ";//ставим 2 пробела, чтобы вывести пустое значение


		}
		std::cout << "\n";
	}
	std::cout << "\n";

	//Задача 5
	for (int i = 0; i < high; i++)
	{
		for (int j = 0; j < length; j++)
		{
			matrix[i][j] = dist(gen);
		}
	}
	for (int i = 0; i < std::size(matrix); i++)
	{
		for (int j = 0; j < std::size(matrix[0]); j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";

	for (int i = 0; i < std::size(matrix); i++)
	{
		for (int j = 0; j< std::size(matrix); j++)
		{
			if (i % 2 == 0&&j%2==0)
				matrix[i][j] = 0;
				if (i%2!=0&&j%2!=0)
					matrix[i][j] = 0;

			std::cout << matrix[i][j] << " ";

		}

		std::cout << "\n";
	}
	std::cout << "\n";*/
	//Задача 6
	for (int i = 0; i < high; i++)
	{
		for (int j = 0; j < length; j++)
		{
			matrix[i][j] = dist(gen);
		}
	}

	for (int i = 0; i < std::size(matrix); i++)
	{
		for (int j = 0; j < std::size(matrix[0]); j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
	int min = matrix[0][0];
	int max = matrix[0][0];
	int sum = 0;
	int summax = 0;
	
	std::cout << "let`s see maximum of each strings" << "\n";

	for (int i = 0; i < std::size(matrix); i++)
	{max = matrix[i][0];
		for (int j = 0; j < std::size(matrix); j++)
		{
			
			if (matrix[i][j] > max)
				max = matrix[i][j];
		
		}
		std::cout << max << " ";

		std::cout << "\n";
	}
	std::cout << "\n\n";

	std::cout << "let`s see minimum of each column"<<"\n";
	for (int i = 0; i < std::size(matrix); i++)
		
		
	{min = matrix[i][0];
		for (int j = 0; j < std::size(matrix); j++)
		{
			{if (matrix[j][i] < min)
				min = matrix[j][i];
			 }
		}
		std::cout  << min<< " ";
	}
		
		std::cout << "\n\n";

std::cout << "let`s see maximum of the matrix" << "\n";
for (int i = 0; i < std::size(matrix); i++)
{
	
	for (int j = 0; j < std::size(matrix); j++)
	{

		if (matrix[i][j] > max)
			max = matrix[i][j];
			}
	}
std::cout << max;
	std::cout << "\n\n";
	std::cout << "let`s see minimum of the matrix" << "\n";
	for (int i = 0; i < std::size(matrix); i++)
	{for (int j = 0; j < std::size(matrix[0]); j++)
		{if (matrix[i][j] < min)
				min = matrix[i][j];
			}

	}
	std::cout << min;
	std::cout << "\n\n";
	std::cout << "let`s find out max summ value of each column:" << "\n\n";
	std::cout << "1. first we`ll find the sum of each column" << "\n";
	for (int i = 0; i < std::size(matrix); i++)
		{
		sum = 0;
		for (int j = 0; j < std::size(matrix); j++)
		{
			sum += matrix[j][i];

			
		}
		std::cout << "sum("<<i<<")"<<" = "<<sum<< " \n";
	}
	std::cout << "2. second we`ll find the max of each column sum" << "\n";
	std::cout << "at this place I was confused with finding correct solution_NEED TO BE SOLVED TOGETHER" << "\n";

	/*int summ1 = 0;
	int summ2 = 0;
	for (int i = 0; i < std::size(matrix); i++)
	{
		summ1+= matrix[i][0];
		
		for (int j = 0; j < std::size(matrix); j++)
		{			
			summ2 += matrix[j][i];
			if (summ2 >= summ1)
				summ1 = summ2;
		}
			std::cout << "\n" << summ2;	
	}*/
	
	




	std::cout << "\n\n";

	return 0;
}


