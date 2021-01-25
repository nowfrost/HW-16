#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;
int const N = 5;

int main()
{
	int A[N][N];
	time_t t = time(0);
	tm Localtime;

	int IndexSum;
	int Sum = 0;

	setlocale(LC_CTYPE, "rus");
	localtime_s(&Localtime, &t);
	IndexSum = (&Localtime)->tm_mday % N;

	for (int i = 0; i < N; i++)
	{

		for (int j = 0; j < N; j++)
		{
			A[i][j] = i + j;
			cout << A[i][j] << " ";
		}
		cout << "\n";

	}

	cout << "Сумма строк " << IndexSum << ": ";

	for (int i = 0; i < N; i++)
	{
		Sum += A[IndexSum][i];

	}
	cout << Sum << "\n";
}
