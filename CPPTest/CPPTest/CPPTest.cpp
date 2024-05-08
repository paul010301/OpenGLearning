// CPPTest.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

class MyClass {
public:
	int myNum;
	string myString;

	MyClass() {
		cout << "Hello World!";
	}

	void myMethod();
};

class MySubClass : public MyClass
{
public:
	MySubClass();
	~MySubClass();

private:

};

MySubClass::MySubClass()
{
}

MySubClass::~MySubClass()
{
}

void MyClass::myMethod() {
	cout << "Hello World!";
}

int getInteger();

#if false
int main()
{
	try {

	}
	catch (...) {

	}

	/*ofstream MyFile("filename.txt");

	MyFile << "Files can be tricky, but it is fun enough";

	MyFile.close();

	string myText;

	ifstream MyReadFile("filename.txt");

	while (getline(MyReadFile, myText)) {
		cout << myText;
	}

	MyReadFile.close();*/

	/*MyClass myObj;
	myObj.myNum = 15;
	myObj.myString = "Some text.";

	cout << myObj.myNum << "\n";
	cout << myObj.myString << "\n";

	myObj.myMethod();*/

	/*cout << "Hello, World!" << endl;
	cout << "CPP Test \n";
	const int myNum = 15;
	cout << myNum << "\n";

	cout << "Type a number: ";
	int x, y;
	cin >> x;
	cout << "Type another number: ";
	cin >> y;
	cout << "Sum is: " << x + y;

	bool isCodingFun = true;
	bool isFishTasty = false;
	cout << isCodingFun;  // Outputs 1 (true)
	cout << isFishTasty;  // Outputs 0 (false)

	x = 5; // byte : 101
	x <<= 3; // byte : 101000
	x >>= 3; // byte : 101

	string greeting = "Hello";

	cout << max(10, 5);*/
	
	int x{ getInteger() };
	int y{ getInteger() };

	std::cout << x << " + " << y << " is " << x + y << '\n';

	return 0;
}
#endif

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
