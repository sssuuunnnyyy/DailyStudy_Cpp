#include <iostream>
#include <string>
#include <vector>

using namespace std;
//p.126 ���� ��Ʈ��
char* copyString(const char* str)
{
	char* result = new char[strlen(str) + 1];
	strcpy_s(result, strlen(str)+1, str);
	return result;
}
//p.128
char* appendStrings(const char* str1, const char* str2, const char* str3)
{
	int size = strlen(str1) + strlen(str2) + strlen(str3) + 1;
	char* result = new char[size];
	strcpy_s(result, size,str1); //���ڿ��� ����
	strcat_s(result, size, str2); //���ڿ��� ���̱�
	strcat_s(result, size, str3); //���ڿ��� ���̱�
	return result;

}
//p.141
string_view extractExtension(string_view fileName)
{
	return fileName.substr(fileName.rfind('.')); //rfind ������ ���ڿ� ã��
}


int main()
{
	char* c = appendStrings("Hello 1", "Hello 2", "Hello 3");
	cout << c << endl;
	size_t s1 = sizeof(c);
	size_t s2 = strlen(c);
	cout << "sizeof = " << s1 << "strlen= " << s2 << endl;

	// const char* str = "Hello "World" ! "; ->error
	const char* str = "Hello \"World\"!";
	const char* str1 = R"(Hello "World"!)";
	const char* str2 =
R"(Line1
Line2)";

	cout << str2 << endl;

	//-----------------------------[String]-------------------
	//p.134~
	string A("12");
	string B("34");
	string C;
	C = A + B;
	cout << C << endl;

	string myString = "Hello";
	myString += ", there";
	string myOtherString = myString;
	if (myString == myOtherString) {
		myOtherString[0] = 'H';
	}
	cout << myString << endl;
	cout << myOtherString << endl;

	auto temp = 1.0f;
	auto string1 = "Hello World";
	auto string2 = "Hello World"s; //Breakpoint �ɰ� �Ʒ� Autos���� name, value, type Ȯ�� ����

	long double d = 3.14L;
	string string3 = to_string(d); //���� -> ����

	cout << string3 << endl;

	const string toParse = "123USD";
	size_t index = 0;
	int value = stoi(toParse, &index);
	cout << "Parsed value: " << value << endl;
	cout << "First non-parsed character: " << toParse[index] << "'" << endl;

	//p.140~ String_view class
	string str11 = "Hello";
	string_view sv = " world";
	//auto result = str + sv; -> Error!
	auto result = str11 + sv.data();

	string fileName = R"(C:\temp\my file.ext)";
	cout << "C++ string: " << extractExtension(fileName) << endl;

	const char* cString = R"(C:\temp\my file.ext)";
	cout << "C string: " << extractExtension(cString) << endl;

	cout << "Literal: " << extractExtension(R"(C:\temp\my file.ext)") << endl;


}
