//#include <iostream>
//using namespace std;
//
//class BaseOne
//{
//public:
//	void SimpleFuncOne() { cout << "BaseOne" << endl; }
//};
//
//class BaseTwo
//{
//public:
//	void SimpleFuncTwo() { cout << "BaseTwo" << endl; }
//};
//
//class MultiDerived : public BaseOne, protected BaseTwo
//{
//public:
//	void ComplexFunc()
//	{
//		SimpleFuncOne();
//		SimpleFuncTwo();
//	}
//};
//
//int main()
//{
//	MultiDerived mdr;
//	mdr.ComplexFunc();
//	return 0;
//}





//#include <iostream>
//using namespace std;
//
//class BaseOne {
//public:
//	void SimpleFunc() { cout << "BaseOne" << endl; }
//};
//
//class BaseTwo {
//public:
//	void SimpleFunc() { cout << "BaseTwo" << endl; }
//};
//
//class MultiDerived : public BaseOne, protected BaseTwo
//{
//public:
//	void ComplexFunc()
//	{
//		BaseOne::SimpleFunc();
//		BaseTwo::SimpleFunc();
//	}
//};
//
//int main()
//{
//	MultiDerived mdr;
//	mdr.ComplexFunc();
//	return 0;
//}




#include <iostream>
using namespace std;

class Base
{
public:
	Base() { cout << "Base Constructor" << endl; }
	void SimpleFunc() { cout << "BaseOne" << endl; }
};

class MiddleDerivedOne : virtual public Base
{
public:
	MiddleDerivedOne() : Base()
	{
		cout << "MiddleDerivedOne Constructor" << endl;
	}
	void MiddleFuncOne()
	{
		SimpleFunc();
		cout << "MiddleDerivedOne" << endl;
	}
};

class MiddleDerivedTwo : virtual public Base
{
public:
	MiddleDerivedTwo() : Base()
	{
		cout << "MiddleDerivedTwo Constructor" << endl;
	}
	void MiddleFuncTwo()
	{
		SimpleFunc();
		cout << "MiddleDerivedTwo" << endl;
	}
};

class LastDerived : public MiddleDerivedOne, public MiddleDerivedTwo
{
public:
	LastDerived() : MiddleDerivedOne(), MiddleDerivedTwo()
	{
		cout << "LastDerived Constructor" << endl;
	}
	void ComplexFunc()
	{
		MiddleFuncOne();
		MiddleFuncTwo();
		SimpleFunc();
	}
};

int main()
{
	cout << "按眉积己 傈..." << endl;
	LastDerived ldr;
	cout << "按眉积己 饶...." << endl;
	ldr.ComplexFunc();
	return 0;
}