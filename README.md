# WorkingWithC++
Just random code I am writing to learn C++. I am using the book "Problem solving with C++" (8th edition)

## Types

### Number
(will vary across machines)

| Type        | Mem (byte) | Size              | Precision |
|-------------|------------|-------------------|-----------|
| short       | 2          | +/- 32,768        | NA        |
| int         | 4          | +/-  2.15 Billion | NA        |
| long        | 4          | +/- 2.15 Billion  | NA        |
| float       | 4          | +/- 10^38         | 7 digits  |
| double      | 8          | +/- 10^308        | 15 digits |
| long double | 10         | +/- 10^4932       | 19 digits |

* operations with different types matter int 7 / int 3 =3, where int 7 / double 3.0 = 3.5, and int 6 / double 3.0 = 2.0
* int operations are not rounded, everything after the decimal is discarded (10/3 =3)
  * to spit out decimal number with limited number of decimals, use something like
```cpp
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
```
* use const int/double to create a variable values that can't be changed
* If const is declared in beginning of program outside of the body it will be a global named constant

## Other types
* Type char can only hold single character like 'a' or 'A' 
* Type string double quotes makes a string type. (so 'a' != "a")


## Flow control
* You can increment variable with ++var or var++ to go up by one or --var/var-- to go down by one
    * keep in mind that ++var/--var function differntly the var++/var-- since var-- returns number first then goes down by one instead of going down by one then returning it
### if else
```cpp
if (something)
{
    run this command;
    then this one;
}
else
{
    run this command;
    then this one;
}
```

## while loop
```cpp
while (x > 10)
{
    run this command;
    then this one;
}

//Or a do while
do
{
    run this command
    then this one
} while (x > 10);
```

## switch
```cpp
switch (controllingExpression)
{
    // Case can be int or anything else
    case 'A':
        run this command;
        break;
    case 'B':
        run this one instead;
        break;
    // if nothing else is met
    default:
        run this command;
}
```
* break statements can be used to exit loops (see above example)

### for loop
```cpp
// for (Initialization_Action; Boolean_Expression; Update Action)
int n;
n = 1;
// notice no semicolon after parenthesis
for (n; n <= 10;  ++n)
    sum = sum +n;
```
* you can increment by any number instead of just one
```cpp
for (n; n <= 10; n = n + 2)
```
* When designing a loop, you need to design three things
    * The body of the loop
    * The initializing statement
    * The condition for ending the loop
* Four common methods for ending an INPUT loop
    * List headed by size
    * Ask before iterating
    * List ended with a sentinel value
    * Running out of input
* General techniques for ending loops
    * Count-controll
    * Ask before iterating
    * Exit on a flag condition
    

### Block
A block is some C== code enclosed in brackets. Any variable declared in a block are local to the block so that variable name can be used outside the block for something else. When you declare a local variable within a block is local to the bock so if you have a block within a block, the local variable only exists in the block it was called in. 

```cpp
    if ((sale_type == 'R') || (sale_type == 'r'))
    {
        total = price * number;
    }
    else if ((sale_type == 'W') || (sale_type == 'w'))
    {
        double subtotal;
        subtotal = price * number;
        total = subtotal + subtotal * TAX_RATE;
    }
```

### Block Scopr
The socpe of a local variable refers to the part of a program that can directly access that variable
* global scope is anything outside the body of the function (normally at the beginning)
* scope rules stat that identifiers declared within thier block are local to that vlock and accessible only from the point they are defined to the end of that block

```cpp
#include <iostream>
using namespace std;

// A variable can only be accessed directly within its scope
const double GLOBAL_CONST = 1.0; // this is global to entire script

int function(int param);

int main()                     // Local scope to main
{
    int x;
    double d = GLOBA_CONST;

    for (int i =0; i < 10; i++) // Block scopt to variable i 
    {
        x = function1(i);       // End block scopt to variable i
    }
    return 0,
}                               // End local scope to main

int function1(int param) // Local scope to function one
{
    double y = GLOBAL_CONST;
    ...
    return 0;
}
```

## Boolean
* Type Bool self-explanitory
    * Two statements must be true (2 < x) && (x < 7)
    * Either can be true (2 < x) || (x < 7)
    * To negate an expression !(x < 2) which is the same as (x >= 2)
    * int can be boolens 1 for true 0 for false
    
| Precedence Rules   | Types       | Priority |
|--------------------|-------------|----------|
| Unary operators    | +.-,++,--,! | High     |
| Binary arithmetic  | *,/,%       |          |
| Binary arithmetic  | +,-         |          |
| Boolean operations | <,>, <=, >= |          |
| Boolean operations | ==,!=       |          |
| Boolean operations | &&          |          |
| Boolean operations | \|\|          | Low      |

## Function calls
* Function can have multiple arguments but can only reuturn one value
    * If function takes multiple args then they are seperated by commas
    * Function calls can return a boolean value
* Function declarations are normally plaved before the main part of your program
* Function definitions are normally placed at the end of the main program
* A function must have a return statement
* Variables called with body of function are local to the function

```cpp
//Function declare
Type_to_Return Function_Name(Params);
// Put comments on function declaration here

//Function definition
Type_to_Return Function_Name(Params)
{    
    Declaration1
    Declaration2
    ...
    Executable_Statement1
    Executable_Statement2
    return (some_thing)
}
```
### Overloading functions
* You give twor or more different definitions for the same funcitons in C++ (overloading)
* when you overload a function name, the function delarations for the two different definitions must differ in thier formal parameters
* C++ will automatically overload a function if for instance you define funtion with type double, but use input an int
```cpp
double ave (double n1, double n2)
{
    return ((n1 + n2)/2.0);
}

double ave (double n1, double n2, double n3)
{
    return ((n1 + n2 + n3)/3.0);
}

```

## Void Functions
* functions normally return one or no value at all
    * You can make a subtask that produces several different values but set it up as if it was a function that returns no value
* a void function is define in almost the same way as a function that returns a value
    * The voud function implements only the subtask for outputting the results of the calculations
```cpp
// just and example void function
void show_results(double f_degrees, double c_degrees)
{
    using namespace std;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << f_degrees
         << " degrees Fahrenheit is equivalent to\n"
         << c_degrees << " degrees Celsius\n";
    return;
}
```
* Two differences compared to function call
    * When we call void this tells compiler that it won't return any value
    * The return statement does not contain an expression for a value to be returned
* A void function call is an executable statement (ends with semicolon)
* When a void function is called, the arguments are substituted for the formal parameters and the statements in the function body are executed
* void functions can have no return statement (still need () after to call it)
* A return statement in void function simply ends the function call
    * It does not require a return statement it will end after runnign code in the function body
    * return statements are usful in if else statments to end void early
```cpp
// This void sends a newline command to the screen
void initialize_screen()
{
    using namespace std;
    cout << endl;
    return;
}
```
```cpp
show_results(32.5, 0.3);

// you would call it by doing
initialize_screen();
```

```cpp
// Using return statement to finish void funtion early
void ice_cream_division(int number, double total_weight);

void ice_cream_division(int number, double total_weight)
{
    using namespace std;
    double portion;

    if (number == 0);
        return; // This will end void function early
    portion = total_weight/number;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Each one receives "
         << protion << " ounces of ice cream." << endl;
}
```


### Type casting
* You can convert value of type int to type double using 
```cpp
static_cast<double>(9)
```

## Namespaces
* Start of the file is not always the best place for namespaces
* Using using namespace within a function makes it local to that function
