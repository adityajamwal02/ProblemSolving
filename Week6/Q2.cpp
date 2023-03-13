#include <iostream>
#include <exception>
#include <string>

using namespace std;

// Define a custom exception class that inherits from std::exception
class MyException : public exception {
public:
    // Constructor that takes a message string as input
    MyException(const string& message) : m_message(message) {}

    // Override the what() function to return the message string
    const char* what() const noexcept override {
        return m_message.c_str();
    }

private:
    string m_message;
};

int main() {
    try {
        int x, y;
        cout << "Enter two integers: ";
        cin >> x >> y;

        // Throw a MyException if the second number is zero
        if (y == 0) {
            throw MyException("Division by zero!");
        }

        cout << "Result: " << x / y << endl;
    }
    catch (const exception& e) {
        // Handle any exception that is derived from std::exception
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}

/*
In this program, we define a custom exception class called MyException that inherits from std::exception. 
The MyException class has a constructor that takes a message string as input and stores it in a member variable.
We also override the what() function to return the message string when the exception is thrown.
In the main() function, we prompt the user to enter two integers and then check if the second number is zero. 
If it is, we throw a MyException with the message "Division by zero!". If any exception is thrown (including our MyException).
we catch it and print the error message using the what() function. Note that we use the noexcept keyword when overriding the what() function. 
This tells the compiler that the function will never throw an exception, which can improve performance in some cases.
*/
