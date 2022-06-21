#include<iostream>

using namespace std;

float GetStd_weight(float height)
{
	float std_weight = (height - 100) * 0.9;
	return std_weight;
}

float GetBmi(float weight, float GetStd_weight)
{
	return ((weight - GetStd_weight) * 100) / GetStd_weight;
}

void FatLevel(float GetBmi)
{

	if (GetBmi <= 10)
	{
		cout << "Normal" << endl;
	}
	else if (GetBmi > 10 && GetBmi <= 20)
	{
		cout << "Overweight" << endl;
	}
	else if (GetBmi > 20)
	{
		cout << "Obesity" << endl;
	}

}


int main()
{
	
	

	//#1. 비만도 구하기
	float weight, height = { 0 };
	cout << "Height: ";
	cin >> height;
	cout << "Weight: ";
	cin >> weight;
	//GetBmi(weight, GetStd_weight(height));
	FatLevel(GetBmi(weight, GetStd_weight(height)));


}

//#2. Programmers
    // x만큼 간격이 있는 n개의 숫자
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<long long> solution(int x, int n) {
//    vector<long long> v(n, x);
//
//    for (int i = 1; i < n; ++i)
//    {
//        v[i] = v[i - 1] + x;
//
//    }
//    return v;
//}