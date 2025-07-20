# Cheat sheet
# Preperations
-Download a compiler(gcc) otherwise your code is just **worthless** text (I won't explain how a compiler works in detail, but remember-- you **need** a compiler to translate between you and your computer)<br>
-#include `<iostream>` 

# Syntax 

## main method 
-The start of ervery Programm<br>
-You need that<br>
### example
int main() <br>
{<br>
//your code<br>
return 0;<br>
} 


# Variables
int age = 30;                    // Integer a whole number <br> 
float height = 1.75f;            // Floating-point number <br> 
double pi = 3.14159;             // Double precision: better precision than float <br>  
char grade = 'A';                // Character: this can be nearly everything <br> 
bool isActive = true;            // Boolean: true or false <br> 
   
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
### Option 1
char name[] = "Alice";

### Option 2
#include `<string>`    //use this library <br> 
std::string greeting = "Hello, world!";<br> 

## User-Defined Types
| Type   | Description                                           |
| -------| ----------------------------------------------------- |
| struct | Group of variables (like a record)                    |  
| class  | Same as struct but with methods and private members   | //this will be a later topic  
| enum   | Named set of constant values                          |  
| union  | Multiple variables sharing the same memory            | //this will be referenced at later stages of our journey 


struct Person {           //used to group variables 
    std::string name;<br> 
    int age;<br> 
};

enum Day { Monday, Tuesday, Wednesday }; //Readability 
// Monday=1,Tuesday=2 ....<br> 
//You can use it like an Int<br> 

union UnionName {  //They share the same memory space 
    int i;<br> 
    float f;<br> 
    char c;<br> 
};<br> 
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

## Cout & Cin
-Needed for displaying messages in the terminal and reading from the terminal<br> 

### Cout
int main() {
    std::cout << "Hello, world!" << endl; //Writes Hello, World into the Terminal<br>
    return 0;                        // << is the similar as a +  <br>
}<br>

| Concept                   | Example                                   |<br>
| ------------------------- | ------------------------------------------|<br>
| Basic output              | cout << "Hello!";                         |<br>
| New lines                 |cout << "Line 1\nLine 2";`                 |<br>
| Using  endl               | cout << "Hello" << endl;                  |<br>
| Printing variables        | int x = 5; cout << "x = " << x << endl;   |<br>
| Output formatting (later) | setw, setprecision, etc. (from <iomanip>) |//Later topic<br>

### Cin

int main(){<br>
<br>
int age;<br>       
std::cout << "Enter your age: ";<br> 
std::cin >> age;//Saves your input into the variable age<br>
<br>
return 0;<br>
}<br>

# Time for your first mission 
-Write a program to read your name, age and your favourite character on your keyboard