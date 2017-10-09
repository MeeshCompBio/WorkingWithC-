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

## Other types
* Type char can only hold single character like 'a' or 'A' 
* Type string double quotes makes a string type. (so 'a' != "a")


## Flow control
* You can increment variable with ++var or var++ to go up by one or --var/var-- to go down by one
    *keep in mind that ++var/--var function differntly the var++/var-- since var-- returns number first then goes down by one instead of going down by one then returning it
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

### Type casting
* You can convert value of type int to type double using 
```cpp
static_cast<double>(9)
```

