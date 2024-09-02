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


## CODE :
```
//Aditya Agarwal
//23070123162
//ENTC B3
//Experiment 2 Finding the sizes of primitive datatypes 
#include <iostream>
using namespace std;

int main() 
{
    char a = 's';
    cout << "The size of a character is: "<< sizeof(a) << endl;
    int b = 123456;
    cout << "The size of an integer is: "<< sizeof(b) << endl;
    short int c = 1233;
    cout << "The size of a short integer is: "<< sizeof(c) << endl;
    long int d = 12739482;
    cout << "The size of a long integer is: "<< sizeof(d) << endl;
    long long int e = 122388728;
    cout << "The size of a long long integer is: "<< sizeof(e) << endl;
    float f = 27168.5;
    cout << "The sie of a float is: " << sizeof(f) << endl;
    double g = 84273923.89877;
    cout <<"The size of a double floating point is: "<< sizeof(g) << endl;
    long double h = 8742980.789793;
    cout<< "The size of long double floating point is: "<<sizeof(h) << endl;
    cout<< "The size of a wide character is: "<<sizeof(wchar_t) << endl;
    return 0;
}


/*output

The size of a character is: 1
The size of an integer is: 4
The size of a short integer is: 2
The size of a long integer is: 4
The size of a long long integer is: 8
The sie of a float is: 4
The size of a double floating point is: 8
The size of long double floating point is: 16
The size of a wide character is: 2


*/


```

## OUTPUT

![image](https://github.com/user-attachments/assets/89180832-d919-46ea-b73c-d2d3e765b1e8)

## Code for Storage Class

```
#include<iostream>
using namespace std;

extern int extern_variable =30;


int main()
{
    auto a = 8;
    register int registered_variable = 100;
    static int s = 7;
    cout << "The local variable: "<< a << std::endl;
    cout <<"The variable in register: "<<registered_variable<<endl;
    std::cout<<"External variable: "<<extern_variable<<endl;
    s = 10;
    cout<<"The static variable: "<<s<<endl;

}

```

## Output :
![image](https://github.com/user-attachments/assets/5d871c27-4120-44f7-9a0a-404852803561)



## CONCLUSION :
Learnt different types of data type and how to use them in c++.
