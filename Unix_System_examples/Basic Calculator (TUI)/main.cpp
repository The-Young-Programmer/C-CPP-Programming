#include <iostream>
#include <string>
#include <sstream>

// Parse Float
float parseFloat( const std::string &str ) {

        std::stringstream ss(str);
        float num;
        ss >> num;
        return num;

}


int main( int argc, char** argv ) {

	const std::string Operation(argv[2]); // take the second argument before the "./calculator"
	
	if (Operation == "plus") std::cout << parseFloat(argv[1]) + parseFloat(argv[3]) << '\n'; // Plus
	else if (Operation == "minus") std::cout << parseFloat(argv[1]) - parseFloat(argv[3]) << '\n'; // Minus
	else if (Operation == "times") std::cout << parseFloat(argv[1]) * parseFloat(argv[3]) << '\n'; // Times
	else if (Operation == "divide") std::cout << parseFloat(argv[1]) / parseFloat(argv[3]) << '\n'; // Divide
	else std::cout << "Invalid operation\n"; // Invalid operation message

	return 0;

}
