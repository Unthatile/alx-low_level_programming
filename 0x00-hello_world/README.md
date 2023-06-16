0x00. C - Hello, World

0. gcc -E $CFILE -o c - Run a script that runs a C file through the preprocessor and saves the result into another file. The C file name will be saved in the variable $CFILE; The output should be saved in the file c using gcc $CFILE -E -o c
1. gcc $CFILE -o ${CFILE%.c}.o -c - if you are using GCC compiler, you can use the command gcc $CFILE -o ${CFILE%.c}.o -c to compile $CFILE without linking. This will create an object file named ${CFILE%.c}.o 
2. gcc -S $CFILE -  a script that generates the assembly code of a C code and save it in an output file.
The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .s instead of .c.
