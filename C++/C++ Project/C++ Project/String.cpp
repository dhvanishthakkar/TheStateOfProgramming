/*
 * Implementing String class basics functionalities
 * 
 */

#include<iostream>

using namespace std;

class String
{
private :
	char* data;
	unsigned int len;

public:

	// Default Constructor
	String() : data(nullptr), len(0) {};

	// Paramterized Constructor
	String (const char* str)
	{
		len = strlen(str);
		data = new char[len + 1];
		strcpy(data, str);
	}

	// Copy Contructor
	String(const String& newStr)
	{
		len = newStr.len;
		data = new char[len + 1];
		strcpy(data, newStr.data);
	}

	// Copy Assignment Operator
	String& operator= (String& str)
	{
		if (this->data == str.data)
			return *this;

		if (data)
			delete[]data;
		len = str.len;
		data = new char[len + 1];
		strcpy(data, str.data);
		return *this;
	}

	int length()
	{
		return len;
	}
	
	// Move Operator overloading
	String (String&& str)
	{
		len = str.len;
		data = str.data;
		str.data = nullptr;
		str.len = 0;
	}

	String& operator=(String&& str)
	{
		if (data == str.data)
			return *this;

		if (data)
			delete[]data;
		len = str.len;
		data = str.data;
		str.data = nullptr;
		str.len = 0;
		return *this;
	}

	// Destructor
	~String()
	{
		if (data)
			delete[]data;
		len = 0;
	}

	// Friend function to access the private variable of the class
	friend ostream& operator<<(ostream& out, String& str);
};

// outstream operator overloading
ostream& operator<<(ostream& out, String& str)
{
	if (str.data)
		out << str.data;
	return out;
}

int main()
{
	// Default Constructor
	String str1;

	// Parameterized Constructor
	String str2 = "Hello Dhvanish";

	// Copy Contructor
	String str3 = str2;

	// Copy Assignment Operator
	str1 = str3;
	
	// String Length and cout operator << overloading
	cout << "Str1 lengh is " << str1.length() << endl;

	// Move operator
	String str4 = move(str1);
	cout << "Move contructor Str4 = " << str4 << endl;

	str2 = "I am good at C++";
	str4 = move(str2);
	cout << "Move Assignment Str4 = " << str4 << endl;

	return 0;
}