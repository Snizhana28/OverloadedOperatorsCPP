#include "../models/Point.h"
//Arithmetic Operators : +, -, *, / , %
Point operator +(const Point& point1, const Point& point2)
{
	return Point(point1.x + point2.x, point1.y + point2.y);
}
Point operator -(const Point& point1, const Point& point2)
{
	return Point(point1.x - point2.x, point1.y - point2.y);
}
Point operator *(const Point& point1, const Point& point2)
{
	return Point(point1.x * point2.x, point1.y * point2.y);
}
Point operator /(const Point& point1, const Point& point2)
{
	if (point1.x == 0 || point2.x == 0)
	{
		throw "Division by zero";
	}
	return Point(point1.x / point2.x, point1.y / point2.y);
}
//Relational Operators: <, >, <=, >=, ==, !=
bool operator==(const Point& point1, const Point& point2) {
	return point1.x == point2.x && point1.y == point2.y;
}
bool operator!=(const Point& point1, const Point& point2) {
	return !(point1 == point2);
}
bool operator>(const Point& point1, const Point& point2) {
	return point1.x > point2.x && point1.y > point2.y;
}
bool operator<(const Point& point1, const Point& point2) {
	return point1.x < point2.x && point1.y < point2.y;
}
bool operator>=(const Point& point1, const Point& point2) {
	return point1.x >= point2.x && point1.y >= point2.y;
}
bool operator<=(const Point& point1, const Point& point2) {
	return point1.x <= point2.x && point1.y <= point2.y;
}
//Logical Operators: &&, ||, !
bool operator&&(const Point& point1, const Point& point2)
{
	return point1.x && point2.x && point1.y && point2.y;
}
bool operator||(const Point& point1, const Point& point2)
{
	return point1.x || point2.x || point1.y || point2.y;
}
bool operator!(const Point& point)
{
	return !point.x && !point.y;
}
//Increment and Decrement Operators: ++, --
Point& Point::operator++()
{
	++x; ++y; return *this;
}
Point& Point::operator--()
{
	--x; --y; return *this;
}
const Point Point::operator++(int)
{
	Point point{ x, y };
	++(*this);
	return point;
}
const Point Point::operator--(int)
{
	Point point{ x, y };
	--(*this);
	return point;
}
//Assignment Operators: =, +=, -= , *=, /=, %=
Point& Point::operator=(const Point& point)
{
	x = point.x;
	y = point.y;
	return *this;
}
Point& Point::operator+=(const Point& point)
{
	x += point.x;
	y += point.y;
	return *this;
}
Point& Point::operator-=(const Point& point)
{
	x -= point.x;
	y -= point.y;
	return *this;
}
Point& Point::operator*=(const Point& point)
{
	x *= point.x;
	y *= point.y;
	return *this;
}
Point& Point::operator/=(const Point& point)
{
	if (point.x == 0 || point.y == 0)
	{
		throw "Division by zero";
	}
	x /= point.x;
	y /= point.y;
	return *this;
}
Point& Point::operator%=(const Point& point)
{
	if (point.x == 0 || point.y == 0)
	{
		throw "Division by zero";
	}
	x %= point.x;
	y %= point.y;
	return *this;
}
//Stream Operators: <<, >>
ostream& operator<< (ostream& output, const Point& point) {
	output << "[" << point.x << " : " << point.y << "]";
	return output;
}
istream& operator>> (istream& input, Point& point) {
	cout << "Enter x: "; input >> point.x;
	cout << "Enter y: "; input >> point.y;
	return input;
}
//Miscellaneous Operators:(), [], ->, ,, new, delete, sizeof
Point& Point::operator()()
{
	return *this;
}
int Point::operator[](int index)
{
	if (index == 0)
	{
		return x;
	}
	else if (index == 1)
	{
		return y;
	}
	else
	{
		throw "Index out of range";
	}
}
Point* Point::operator->()
{
	return this;
}
Point& Point::operator,(Point& point)
{
	return point;
}
void* Point::operator new(size_t size)
{
	return (Point*)malloc(size);
}
void Point::operator delete(void* point)
{
	free(point);
}
size_t Point::size()
{
	return sizeof(Point);
}

