#include <iostream>

using namespace std;

//Programmers 직사각형 별 찍기 22.06.18

int main(void)
{
	int n = { 0 };
	int m= { 0 };


	cin >> n >> m;


	for (int i = 1; i <= m; ++i)
	{


		for (int j = 1; j <= n; ++j)
		{
			cout << "*";
		}

		cout << "" << endl;
	}
	

}