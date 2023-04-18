#include "../../interal/application.h"

class Point
{
private:
	int x;
	int y;
public:
	Point() = default;
	Point(int x, int y) : x(x), y(y) {}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	void setX(int x)
	{
		this->x = x;
	}
	void setY(int y)
	{
		this->y = y;
	}
	void print()
	{
		cout << "[x: " << x << ", y: " << y << "]" << endl;
	}
	~Point() = default;

	Point* getPtr() 
	{
		return this; // returns a pointer to the current object
	}
	//Arithmetic Operators : +, -, *, / , %
	friend Point operator+(const Point& point1, const Point& point2);
	friend Point operator-(const Point& point1, const Point& point2);
	friend Point operator*(const Point& point1, const Point& point2);
	friend Point operator/(const Point& point1, const Point& point2);

	//Relational Operators: <, >, <=, >=, ==, !=
	friend bool operator==(const Point& point1, const Point& point2);
	friend bool operator!=(const Point& point1, const Point& point2);
	friend bool operator>(const Point& point1, const Point& point2);
	friend bool operator<(const Point& point1, const Point& point2);
	friend bool operator>=(const Point& point1, const Point& point2);
	friend bool operator<=(const Point& point1, const Point& point2);

	//---//Logical Operators: &&, ||, !
	friend bool operator&&(const Point& point1, const Point& point2);
	friend bool operator||(const Point& point1, const Point& point2);
	friend bool operator!(const Point& point);

	//Increment and Decrement Operators: ++, --
	Point& operator++();
	Point& operator--();
	const Point operator++(int);
	const Point operator--(int);

	//---//Assignment Operators: =, +=, -= , *=, /=, %=
	Point& operator=(const Point& point);
	Point& operator+=(const Point& point);
	Point& operator-=(const Point& point);
	Point& operator*=(const Point& point);
	Point& operator/=(const Point& point);
	Point& operator%=(const Point& point);

	//Stream Operators: <<, >>
	friend ostream& operator<< (ostream& output, const Point& point);
	friend istream& operator>> (istream& input, Point& point);

	//Miscellaneous Operators:(), [], ->, ,, new, delete, sizeof
	Point& operator()();
	int operator[](int index);
	Point* operator->();
	Point& operator,(Point& point);
	void* operator new(size_t size);
	void operator delete(void* point);
	static size_t size();
};