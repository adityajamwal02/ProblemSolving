/*
Problem1

The output of the code will be "Infinite -10".

Explanation:
The code tries to calculate the value of 'd' as 'z' divided by the difference of 'x' and 'y'. However, if the difference of 'x' and 'y' is zero, the code throws an exception with the value of 'x' minus 'y' as the argument.
In this case, the difference of 'x' and 'y' is not zero, so the code calculates the value of 'd' as 'z' divided by (10-20)=-10, which is equal to -3. The value of 'd' is then printed, which is -3.
So, the output will be "Infinite -10" because the catch block will catch the exception thrown by the else block and print "Infinite" followed by the value of the argument passed to the throw statement, which is '-10'.


Problem2

When we run this code, the output will be "Base Exception".
Explanation:
In this code, we create an object 'd' of the derived class D and throw it using the throw statement. We then use two catch blocks to catch the exception. The first catch block catches an object of the base class B, while the second catch block catches an object of the derived class D.
Since the object 'd' that was thrown is of the derived class D, we might expect the second catch block to be executed and print "Derived Exception". However, this is not what happens. Instead, the first catch block is executed and prints "Base Exception".
This happens because when we catch an object by value, a copy of the object is made. In this case, when we catch the object using the B class, only the base part of the object is copied. The derived part of the object is sliced off and discarded. So, even though the object that was thrown is of the derived class D, when it is caught by the B class catch block, only the base part of the object is considered. Therefore, the first catch block is executed and the output is "Base Exception".


Problem3

Creating object 1
Creating object 2
Creating object 3
Creating object 4
Deleting object 4
Deleting object 3
Deleting object 2
Deleting object 1
Caught 4

Explanation:

In this code, we create an array of 5 objects of the class T. When each object is created, its constructor is called and the value of the static variable 'c' is incremented. The constructor also prints a message indicating which object is being created. If the value of 'i' (which is equal to 'c') is 4, the constructor throws an exception with the value 4.
When the array of objects is created, the constructor is called for each object in the array. The first four objects are created successfully and their creation messages are printed to the console. However, when the constructor for the fourth object is called, it throws an exception with the value 4.
Since the exception is thrown inside the constructor, the remaining objects are not created. The catch block in the main function catches the exception and prints the message "Caught 4" to the console.
After the exception is caught, the program continues with the execution of the destructor for each of the previously created objects. The destructor is called in reverse order of creation, so the message "Deleting object" is printed for each object in reverse order.
*/

