//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	
//	#1. Print Array index & value
//	int arr[] = { 10,20,30,40,50,60,70,80,90,100 };
//	int index = 0;
//	for (index; index < 10; ++index)
//	{
//		cout << "index= " << index << "  Value= " << arr[index] << endl;
//
//	}
//
// #2. arr_len ���� �߰��ؼ� array ũ�Ⱚ �Ҵ�
// int arr_len = sizeof(arr) / sizeof(arr[0]);   
// for (index; index < arr_length; ++index)
//	{
//	cout << "index= " << index << "  Value= " << arr[index] << endl;
//	}
// 
// cout << "�迭�� �����ϴ� ����Ʈ ũ�� " << sizeof(arr) << endl;
//cout << "�迭 �ϳ��� ���Ұ� �����ϴ� ����Ʈ ũ�� " << sizeof(arr[0]) << endl;
//cout << "�迭 ������ ���� " << sizeof(arr) / sizeof(arr[0]) << endl;
// 
// 
// #3. �޸� �ּ� Ȯ��
//int arr[2][4]{}; ->�迭 0���� �ʱ�ȭ
//int* ptr = &arr[0][0]; ->������ ��������
//cout << "�޸� �ּ� ��ġ \t\t offset" << endl;
//for (int row = 0; row < 2; ++row)
//{
//	for (int col = 0; col < 4; ++col)
//	{
//		printf("&arr[%d][%d] : %p\t", row, col, &arr[row][col]);
//		if (row | col)
//			printf("�������ҿ��� ���� %d", (size_t)&arr[row][col] - (size_t)ptr);
//		ptr = &arr[row][col];
//		cout << endl;
//	}
//}
// 

//#Programmers 
//https ://programmers.co.kr/learn/courses/30/lessons/86051
//
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<int> numbers) {
//    int answer = -1;
//    int ttl_sum = 0;
//
//
//    for (int index = 0; index < numbers.size(); ++index)
//    {
//        ttl_sum += numbers[index];
//    }
//    answer = 45 - ttl_sum;
//    return answer;
//}
//// 
////}