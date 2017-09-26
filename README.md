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

