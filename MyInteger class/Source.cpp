////////////
//Anna Tran
//CS 172 sec1
//10.10
////////////

#include<iostream>
#include<string>
using namespace std;

class MyInteger
{
public:
	//int that stores value represented by object
	int value;
	//constructer  for specified value
	MyInteger(int value)
	{
		hvalue = value;
	}
	int getValue()
	{
		return value;
	}
	bool isEven()const
	{
		return MyInteger::isEven(value);
	}
	bool isOdd()const
	{
		return MyInteger::isOdd(value);
	}
	bool isPrime()const
	{
		return MyInteger::isPrime(value);
	}
	static bool isEven(int n1)
	{
		return n1 % 2 == 0;
	}
	static bool isOdd(int n2)
	{
		return n2 % 2 == 1;
	}
	static bool isPrime(int n3)
	{
		if ((n3 == 1) || (n3 == 2))
		{
			return true;
		}

		for (int i = 2; i <= n3 / 2; i++)
		{
			if (n3 % i == 0)
				return false;
		}

		return true;

	}
	static bool isEven(const MyInteger& n1)
	{
		return n1.isEven();
	}
	static bool isOdd(const MyInteger& n2)
	{
		return n2.isOdd();
	}
	static bool isPrime(const MyInteger& n3)
	{
		return n3.isPrime();
	}
	bool equals(int e) const
	{
		return value == e;
	}
	bool equals(const MyInteger& n3)
	{
		return n3.getValue();
	}
	static int parseInt(const string& z)
	{
		int z = std::atoi();
	}
};

int main() {
	MyInteger thenumber(29);
	cout << "Is the number an even number? " << thenumber.isEven() << endl;
	cout << "Is the number an odd number? " << thenumber.isOdd() << endl;
	cout << "Is the number a prime number? " << thenumber.isPrime() << endl;
	cout << "The number 29 is prime? " << thenumber.equals() << endl;
	cout << "Convert the string into an int value " << thenumber.parseInt(z) << endl;
}