0x00. C - Hello, World

0. gcc -E $CFILE -o c - Run a script that runs a C file through the preprocessor and saves the result into another file. The C file name will be saved in the variable $CFILE; The output should be saved in the file c using gcc $CFILE -E -o c
1. gcc $CFILE -o ${CFILE%.c}.o -c - if you are using GCC compiler, you can use the command gcc $CFILE -o ${CFILE%.c}.o -c to compile $CFILE without linking. This will create an object file named ${CFILE%.c}.o 
2. gcc -S -fverbose-asm -g -O2 $CFILE -o ${CFILE%.c}.s - -S option tells GCC to generate assembly code instead of object code. -fverbose-asm option tells GCC to include extra information in the assembly code. -g option tells GCC to include debugging information in the assembly code. -O2 option tells GCC to optimize the assembly code.
The ${CFILE%.c}.s expression is used to generate the output file name. ${CFILE%.c} removes the .c extension from the C file name and .s adds the .s extension to it.
