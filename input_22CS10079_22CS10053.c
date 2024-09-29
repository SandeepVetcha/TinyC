// input_roll1_roll2.c
int global_var = 10;// global variable declaration
// Function declaration with parameters and compound statement
int add(int a, int b) { return a + b; /* return statement with expression*/ } 

int main() {
    // 1. Declarations
    int x = 5;
    unsigned int y;
    const int z = 20;
    long int result;
    float pi = 3.14;
    char c = 'A';

    // Array and pointer declarations
    int arr[10];
    int *ptr = &x;

    // 2. Expressions
    x = (y + z) * 3; // assignment, arithmetic, and grouping
    x += 10;         // compound assignment
    y = x > 5 ? x : z; // conditional expression
    *ptr = x;        // dereferencing pointer
    ++x;             // prefix increment
    x--;             // postfix decrement

    // 3. Statements
    if (x < 20) { // if-else statement
        y = 2 * x;
    } else {
        y = x / 2;
    }

    // switch-case
    switch (x) {
        case 5:
            x = 100;
            break;
        default:
            x = 0;
    }

    // while loop
    while (x > 0) {
        x--;
    }

    // do-while loop
    do {
        y++;
    } while (y < 20);

    // for loop with declarations
    for (int i = 0; i < 5; i++) {
        arr[i] = i;
    }

    // labeled statement
    goto skip;
    x = 99; // should be skipped by goto
    skip:
    y = 100;

    // sizeof operator
    result = sizeof(x) + sizeof(arr);

    // Function call and array access
    result = add(arr[1], arr[2]);

    // return from main
    return 0;
}

// Function definition (external definition)
int multiply(int a, int b) {
    return a * b;
}
