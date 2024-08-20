# BASICS
## EXPERIMENT 2
## AIM: -
To study and implement C++ Program Structure (Data Types)

## Theory: -

In C++, variables are declared using data type to restrict storage type. The compiler allocates memory based on the data type, which requires different memory allocations. C++ supports various data types, including Character (char), Integer (int), Boolean (bool), Floating point (float), Double Floating point (double), Void (), and Wide Character sizeof() operator. These data types can have modifiers, such as Short Long Signed Unsigned, which can increase or decrease the variable's size. For example, Long can extend an integer to 4 bytes. The storage representation and machine instructions for each data type differ from machine to machine. 

Variables in C language can be stored in different storage classes, such as Auto, extern, static, and register. Auto variables are the default storage class for variables declared within a function or block, and can only be accessed within the block. Extern variables are global variables initialized with a legal value and can be overwritten or changed in different blocks.

Static variables are used to declare static variables, which preserve their value even after they are out of their scope. They are initialized once and exist until the program's termination, without new memory being allocated. Global static variables can be accessed anywhere in the program and are assigned 0 by the compiler.

Register variables are declared with the same functionality as auto variables, but the compiler attempts to store them in the microprocessor's registers if a free register is available. This makes them faster to access than variables stored in memory during program runtime. Register variables are typically declared with the register keyword to improve program runtime efficiency.

Data types can have modifiers, such as Short Long Signed Unsigned, which can make variables either increase or decrease in size. For example, Long can extend an integer to be 4 bytes.


### DATA TYPES: - THEIR SIZES AND RANGE 
### Data Type	Size (in bytes)	Range
#### short int
(2 bytes )
#### unsigned short int 
(2 bytes) 	
#### unsigned int
(4 bytes)
#### int
(4 bytes)	
#### long int 
(4 bytes)
#### unsigned long int
(4 bytes)  
#### long long int
(8 bytes) 
#### unsigned long long int
(8 bytes)	
#### signed char
(1 byte)	
#### unsigned char
(1 byte) 	
#### float
(4 bytes)	
#### double
(8 bytes) 
#### long double
(12 bytes)	


## CODE 
```
#include <iostream>
using namespace std;

int main(){

    int a,b;
    cout <<"Enter the value of first number " << endl;
    cin >> a;

    cout <<"Enter the value of Second number " << endl;
    cin >> b;

    int sum = a + b;
    cout << "The sum of the two numbers entered is " << sum << endl;

    int prod = a*b;
    cout << "The product of the two numbers entered is " << prod << endl;

    int c;
    cout << "Enter a number " << endl;
    cin >> c;

    if(c%2==0){
        cout << "The number entered is an even number " << endl;
    }else {
        cout << "The number entered is an odd number " << endl;
    }

    int d;
    cout << "Enter the year you want to check it is a leap year or not " << endl;
    cin >> d;
    if((d% 400 == 0)||(d % 100 != 0) && (d % 4 == 0)){
        cout << "The year entered is a leap year " << endl;
    }else {
        cout << "The year entered is not a leap year " << endl;
    }
    
}
```

## OUTPUT
![image](https://github.com/user-attachments/assets/ce6bce57-01e8-4111-94b9-1c2ca1b63d3d)


## CONCLUSION
Learnt different types of data type and how to use them in c++.
