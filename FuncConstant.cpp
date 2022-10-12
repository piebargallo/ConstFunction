// Example: Constant member function defined outside the class
#include<iostream>
using namespace std;

// Def class Demo
class Demo
{
	int x;

	public:
	
	void set_data(int);

	int get_data() const;

}; // End class

void Demo::set_data(int a) // Setter
{
	x = a;
	x = x + 1;
}

int Demo::get_data() const // Getter
{
	return x;
}

// Driver code
main()
{
	Demo d;
	d.set_data(0);
	cout << d.get_data();

	return 0;
} // End driver
