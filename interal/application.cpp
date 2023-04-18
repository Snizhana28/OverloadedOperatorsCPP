#include "../domain/provaiders/operators_overload.h"

int main()
{
	try
	{
	    Point p1(3, 4);
	    Point p2(5, 6);
		p1.print();
		p2.print();
		cout << endl;
		
		cout << "Arithmetic Operators : +, -, *, /";
		Point p3 = p1 + p2;
		Point p4 = p2 - p1;
		Point p5 = p1 * p2;
		Point p6 = p2 / p1;
		p3.print();
		p4.print();
		p5.print();
		p6.print();
		cout << endl;

		cout << "Relational Operators: <, >, <=, >=, ==, !=";
		bool is_p1_smaller = (p1 < p2);
		bool is_p2_bigger = (p2 > p1);
		bool are_p1_and_p2_equal = (p1 == p2);
		bool are_p1_and_p2_different = (p1 != p2);
		cout << is_p1_smaller << endl << is_p2_bigger << endl << are_p1_and_p2_equal << endl << are_p1_and_p2_different << endl << endl;

		cout << "Logical Operators: &&, ||, !";
		bool and_result = (is_p1_smaller && are_p1_and_p2_equal);
		bool or_result = (is_p1_smaller || are_p1_and_p2_equal);
		bool not_result = !are_p1_and_p2_equal;
		cout << and_result << endl << or_result << endl << not_result << endl << endl;

		cout << "Increment and Decrement Operators: ++, --" << endl;
		Point p7(1, 2);
		Point temp = p7++;
		cout << temp << endl; temp.print();
		cout << p7 << endl; p7.print();
		cout << (p7==temp) << endl;

		

		cout << "Stream Operators: <<, >>" << endl;
		Point p8;
		Point p9;
		cin >> p8;
		cin >> p9;
		cout << p8 << endl;
		cout << p9 << endl;

		cout << "Assignment Operators: =, +=, -= , *=, /=, %=";
		p1 = p2;
		p2 += p1;
		p1 -= p2;
		p2 *= p1;
		p1 /= p2;
		p2 %= p1;
		p1.print();
		p2.print();
		cout << endl;
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}

	return 0;
}
