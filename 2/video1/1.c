#include <stdio.h>

/* 
Input/output (I/O) operations refer to the communication between a computer system and external devices or networks. In computing, I/O operations are used to transfer data between the central processing unit (CPU) and external devices such as keyboards, printers, disk drives, and network connections.

Input operations involve receiving data from external devices and storing it in the computer's memory for processing. For example, when a user types on a keyboard, the data is input into the computer and stored in its memory. Similarly, when data is read from a disk drive, it is input into the computer's memory for processing.

Output operations involve sending data from the computer's memory to external devices. For example, when a user prints a document, the data is output from the computer's memory to the printer. Similarly, when data is written to a disk drive, it is output from the computer's memory to the disk drive.

Overall, input/output operations are critical for the functioning of a computer system as they enable communication between the computer and external devices, making it possible to interact with the world around us.
*/

/*
In C programming, I/O operations are performed using standard input/output functions provided by the language. These functions are part of the C standard library, and they allow you to read data from input devices and write data to output devices.
*/

/*
The most commonly used functions for performing input operations in C are:

scanf() - used to read input data from the standard input stream (usually the keyboard) and store it in variables specified by the programmer.
fgets() - used to read input data from a file or from the standard input stream and store it in a character array.
getchar() - used to read a single character from the standard input stream.
The most commonly used functions for performing output operations in C are:

printf() - used to print output data to the standard output stream (usually the console or terminal).
puts() - used to print a string to the standard output stream.
putchar() - used to print a single character to the standard output stream.
*/

/*
In C, standard I/O functions are declared in the standard input/output header file stdio.h. This header file contains declarations for functions like printf(), scanf(), fgets(), and many other functions that are used for input and output operations in C.

When you include stdio.h in your C program using the preprocessor directive #include, you are essentially telling the compiler that you want to use these I/O functions in your program. This allows you to use the standard I/O functions and perform input and output operations in your program.
*/

/* This function returns a int - denoting success or failure */
int main() {
    /*
        C does not have the String DataType, so 
        "Hello world" is technically a character array
        and the double quotes are used for character array.
        Single quotes '' show characters.

        '\n' is the new character line.

        The newline character ( \n ) is called an escape sequence, 
        and it forces the cursor to change its position to the 
        beginning of the next line on the screen. This results in a 
        new line.

        Essentially in C, a new line must be added explicitely
    */
    printf("Hello world\n");

    /*
        The below character array is a character array with an 
        embedded "format codes".

        Format codes start with %.

        %d says there is a corresponding int number and I want to 
        convert that into a string and print it out.

        So the %d will match the int 42 as the second argurment to 
        the printf function.
    */
    printf("Answer %d\n", 42);


    /*
        If you want a "string" you go with %s
        The "string" "Sarah" below is actally just a character array
        and it is not just 5 chars but 6.
        There is always a terminating 0 in the end, which is 
        an "end of string indicator".
    */
    printf("Name %s\n", "Sarah");

    /*
        %.1f is replaced by a floating point number with one digit 
        of precision.
    */
    printf("x %.1f i %d\n", 3.5, 100);