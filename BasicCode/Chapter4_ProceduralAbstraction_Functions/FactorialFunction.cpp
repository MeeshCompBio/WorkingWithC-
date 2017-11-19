int factorial(int n);

// Returns the factorial of n
// This argument should be non-negative

int factorial(int n)
{
    int product = 1;
    while (n> 0 )
    {
        product = n * product;
        n--; // formal parameter n used a local var
    }
    return product;
}