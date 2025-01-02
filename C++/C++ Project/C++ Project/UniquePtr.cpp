/*
 * Implementing Unique Pointer
 */

#include<iostream>

using namespace std;

template <typename T>
class UniquePtr
{
private:
	T *res;

public:
	// UniquePtr parameterized constructor
	UniquePtr(T* newPtr = nullptr) : res(newPtr) { cout << "Constructor !!" << endl; };

	// copy contructor 
	UniquePtr(const UniquePtr<T>& newPtr) = delete;
	
	// copy assignment operator
	UniquePtr& operator= (const UniquePtr<T>& ptr) = delete;

	// move copy contructor
	UniquePtr(UniquePtr<T>&& ptr)
	{
		res = ptr.res;
		ptr.res = nullptr;
	}

	UniquePtr& operator= (UniquePtr<T>&& ptr)
	{
		if (this != &ptr)
		{
			if (res)
				delete res;
			res = ptr.res;
			ptr.res = nullptr;
		}
		return *this;
	}

	// get function
	T& get()
	{
		return *res;
	}

	// * operator overloading 
	T& operator*()
	{
		return *res;
	}

	// reset functionality
	void reset(T* newPtr = nullptr)
	{
		if (res)
			delete res;
		res = newPtr;
	}
	~UniquePtr()
	{
		cout << "Destructor" << endl;
		if (res)
			delete res;
		res = nullptr;
	}
};

int main()
{
	// Default obj should be error
	   //UniquePtr<int> ptr1;

	// Paramterized contructor
	UniquePtr<int> ptr1(new int(5));
	UniquePtr<int> ptr2 = new int(10);
	UniquePtr<int> ptr4 = new int(15);

	cout << " Before Calling Copy Contructor 1" << endl;

	// Copy Constructor - Error
	 //UniquePtr<int> ptr3 = ptr1;

	// Copy Contructor - Error
	 //UniquePtr<int> ptr4(ptr1);
	
	UniquePtr<int> ptr3 = move(ptr1);

	cout << "Ptr3.get() = " << ptr3.get() << endl;

	cout << "*ptr3 = " <<  *ptr3 << endl;

	ptr4 = move(ptr2);

	cout << "Ptr4.get() = " << ptr4.get() << endl;
	cout << "*ptr4 = " << *ptr4 << endl;
	
	ptr4.reset(new int(20));

	cout << "Ptr4.get() = " << ptr4.get() << endl;
	cout << "*ptr4 = " << *ptr4 << endl;

	return 0;
}