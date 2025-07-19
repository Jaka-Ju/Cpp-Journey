# Cheat sheet
### Preperations
-Download a compiler(gcc) otherwise your code is just **worthless** text (I won't explain how a compiler works in detail, but remember-- you **need** a compiler to translate between you and your computer)
- #include <iostream> 

### Syntax (Variables)
int age = 30;                    // Integer a whole number
float height = 1.75f;            // Floating-point number
double pi = 3.14159;             // Double precision: better precision than float
char grade = 'A';                // Character: this can be nearly everything 
bool isActive = true;            // Boolean: true or false

## Extended Integer Types
| Type              | Description                           |
| ------------------| --------------------------------------|
| short / short int | Small integer (usually 2 bytes)       |
| long / long int   | Large integer (at least 4 bytes)      |
| long long         | Very large integer (usually 8 bytes)  |
| unsigned          | Only positive values (no negative)    |
| signed            | negative or positive (default for int)|

## Strings
-There are two options
# Option 1
char name[] = "Alice";

# Option 2
#include <string>    //use this library
std::string greeting = "Hello, world!";

## User-Defined Types
| Type   | Description                                           |
| -------| ----------------------------------------------------- |
| struct | Group of variables (like a record)                    |
| class  | Same as struct but with methods and private members   | //this will be a later topic
| enum   | Named set of constant values                          |
| union  | Multiple variables sharing the same memory            | //this will be referenced at later stages of our journey 


struct Person {           //used to group variables 
    std::string name;
    int age;
};

enum Day { Monday, Tuesday, Wednesday }; //Readability 
// Monday=1,Tuesday=2 ....  
//You can use it like an Int

union UnionName {  //They share the same memory space 
    int i;
    float f;
    char c;
};
//**Use it carefully** 

## Special Variable Types and Keywords 
| Keyword/Type  | Meaning                                           |
| ------------- | ------------------------------------------------- |
|  auto         | Automatically deduce the variable type            |
|  decltype(x)  | Gets the type of a variable   x                   | 
|  nullptr_t    | Type of  nullptr  (null pointer)                  | //Later topic
|  const        | Makes a variable constant (cannot be changed)     | 
|  volatile     | Tells compiler the variable may change externally |
|  static       | Keeps the variable alive between function calls   | //stop variables from reseting after every funtioncall 
|  extern       | Declares a variable defined elsewhere             | //Share global variables or functions between different .cpp files

###
