0x00. C - Hello, World

0. gcc -E $CFILE -o c - Run a script that runs a C file through the preprocessor and saves the result into another file. The C file name will be saved in the variable $CFILE; The output should be saved in the file c using gcc $CFILE -E -o c
1. gcc $CFILE -o ${CFILE%.c}.o -c - if you are using GCC compiler, you can use the command gcc $CFILE -o ${CFILE%.c}.o -c to compile $CFILE without linking. This will create an object file named ${CFILE%.c}.o 
2. gcc -S $CFILE -  a script that generates the assembly code of a C code and save it in an output file.
The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .s instead of .c.
3. gcc $CFILE -o cisfun - This command will compile the C file saved in the variable $CFILE and create an executable named cisfun.
4. This program uses the function puts to print the desired string. The first puts statement prints the first half of the string, while the second puts statement prints the second half of the string. The \n character is not needed since puts automatically adds a newline character at the end of the string.
5. This program uses the function printf to print the string “with proper grammar, but the outcome is a piece of art,” followed by a new line character. The program returns 0 and compiles without warning when using the -Wall gcc option.
6. This program will produce the exact same output as in the example you provided. It will print the size of various types on the computer it is compiled and run on.
