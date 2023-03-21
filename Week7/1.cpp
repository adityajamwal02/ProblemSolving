/*
Create user defined manipulator to provide a following output specification for printing float value.
i. 12 column width
ii. left justified
iii. Two precision
iv. Filling unused place with sign '*'
v. Trailing zeros shown are display + sign as first position.
*/

#include <iostream>
#include <iomanip>
// Define the custom manipulator
std::ostream& float_format(std::ostream& os) {
    os << std::left << std::setw(12) << std::setfill('*') << std::fixed << std::setprecision(2) << std::showpoint;
    return os;
}
int main() {
    float f = 123.45;
    std::cout << float_format << f << std::endl;
    return 0;
}



/*
In this implementation, the float_format function is defined to apply the desired formatting to the float value.
The std::left and std::setw(12) manipulators set the field width to 12 characters and left-justify the value in the field. The std::setfill('*') 
manipulator fills any unused field space with asterisks. The std::fixed and std::setprecision(2) manipulators format the float value with two decimal places. 
Finally, the std::showpoint manipulator ensures that trailing zeros are displayed, including a leading sign if necessary.
To use the custom manipulator, simply pass it as an argument to the output stream before the float value. In the example above, 
we use the float_format manipulator to format the f variable before printing it.
*/
