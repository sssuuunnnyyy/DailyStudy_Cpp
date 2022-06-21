#include <iostream>
#include <vector>
#include <string>

using namespace std;


//Programmers
// 
//정수 num이 짝수일 경우 "Even"을 반환하고 홀수인 경우 "Odd"를 반환하는 함수, solution을 완성해주세요.
string solution(int num) {
	string answer = "";

	//Option #1.
	if (num % 2 == 0)
		answer = "Even";

	else
		answer = "Odd";

	return answer;

	//Option #2.
	if (num % 2 == 0)
		return answer += "Even";
	else
		return answer += "Odd";

	return answer;
}
//정수를 담고 있는 배열 arr의 평균값을 return하는 함수, solution을 완성해보세요.
double solution(vector<int> arr) {
	double answer = 0;

	for (int i = 0; i < arr.size(); ++i)
	{
		answer = answer + arr[i];
	}

	return answer / arr.size();
}


int GetSum(int a, int b)
{
	return a + b;
}


int main()
{
	int a, b = { 0 };
	cin >> a >> b;

	int ttl = GetSum(a, b);
	cout << ttl << endl;

	vector<int>v = { 1,2,3,4,6 };
	double aa = solution(v);
	cout << solution(v);
	// 함수명()
	// 함수명(매게변수)




		/*별찍기
		1. 역삼각형

			for (int i = 1; i <= n; ++i)
		{
			for (int j = n; j >= i; --j)
			{
				cout << "*";
			}
			cout << endl;
		}

		2. 삼각별
		* for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j <= i; ++j)
			{
				cout << "*";
			}
			cout << endl;
		}

		3. 공백 있는 삼각별
		* cout << "put a number: " << endl;
		cin >> n;

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n-i; ++j)
			{
				cout << " ";
			}

			for (int k=0; k<=i; ++k)
			{
				cout << "*";
			}
			cout << endl;
		}

		*/



}