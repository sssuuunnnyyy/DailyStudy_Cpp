#include <iostream>
#include <vector>
#include <string>

using namespace std;


//Programmers
// 
//���� num�� ¦���� ��� "Even"�� ��ȯ�ϰ� Ȧ���� ��� "Odd"�� ��ȯ�ϴ� �Լ�, solution�� �ϼ����ּ���.
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
//������ ��� �ִ� �迭 arr�� ��հ��� return�ϴ� �Լ�, solution�� �ϼ��غ�����.
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
	// �Լ���()
	// �Լ���(�ŰԺ���)




		/*�����
		1. ���ﰢ��

			for (int i = 1; i <= n; ++i)
		{
			for (int j = n; j >= i; --j)
			{
				cout << "*";
			}
			cout << endl;
		}

		2. �ﰢ��
		* for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j <= i; ++j)
			{
				cout << "*";
			}
			cout << endl;
		}

		3. ���� �ִ� �ﰢ��
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