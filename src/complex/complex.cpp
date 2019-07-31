// complex.cpp
// Multiplying complex numbers

#include <iostream>	// contains the definition of cout, endl
#include <complex>	// contains the complex class definition

using namespace std; // cout, endl, complex are all part of this namespace

int main()
{
    using complexType = complex<float>; // Used aliasing HERE

	auto num1 = complexType {2.0, 2.0};  // use auto for type deduction
	auto num2 = complexType {4.0, -2.0}; // use uniform initialisation syntax (curly braces)

	auto answer = num1 * num2; // type deduced for 'answer' is: complex<float>

	cout << "The answer is: " << answer << endl;
	cout << "Or in a more familiar form: " << answer.real()
			<< " + " << answer.imag() << "j"
			<< endl	<< endl;

	// answer++;

	return 0;
}

/* Answer to Exercise 3.1
  - The compiler is programmed to ignore every line that comes after // notation in a single line
  - Every thing inside /* notation in the whole code
*/
