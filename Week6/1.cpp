/// (i) Multiple catch statements

#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

void divide(int x, int y) {
    try {
        if (y == 0) {
            throw runtime_error("Division by zero!");
        }
        cout << "Result: " << x / y << endl;
    }
    catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }
    catch (const exception& e) {
        cout << "Unknown error occurred: " << e.what() << endl;
    }
}

int main() {
    divide(10, 0);
    divide(10, 2);
    return 0;
}


/// (ii) Re-throwing an exception

#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

void divide(int x, int y) {
    try {
        if (y == 0) {
            throw runtime_error("Division by zero!");
        }
        cout << "Result: " << x / y << endl;
    }
    catch (const exception& e) {
        cout << "An error occurred: " << e.what() << endl;
        throw;
    }
}

int main() {
    try {
        divide(10, 0);
    }
    catch (const exception& e) {
        cout << "Caught exception: " << e.what() << endl;
    }

    return 0;
}


/// (iii) By specifying exceptions

#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

void divide(int x, int y) throw(runtime_error) {
    if (y == 0) {
        throw runtime_error("Division by zero!");
    }
    cout << "Result: " << x / y << endl;
}

int main() {
    try {
        divide(10, 0);
    }
    catch (const exception& e) {
        cout << "Caught exception: " << e.what() << endl;
    }

    return 0;
}

/// (iv) By invoking a function that generates exception:

#include <iostream>
using namespace std;

void Function() {
   throw "Exception in Function!";
}

int main() {
   try {
      Function();
   }
   catch (const char* msg) {
      cout << "Exception caught: " << msg << endl;
   }

   return 0;
}
