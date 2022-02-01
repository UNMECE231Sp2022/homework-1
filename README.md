# homework-1
Assigned 2/1/2022, due 2/5/2022 11:59 pm.
## Context
For this homework you will be creating three `Makefiles` for three folders. These folders are:
    
    MatrixDynamicMemAllocation
    VectorDynamicMemAllocation
    FnPointers
    
You will the appropriate `Makefile` for each folder. Each folder will have its own difficulty in creating a Makefile. `MatrixDynamicMemAllocation` will be the easiest (but not easy), `VectorDynamicMemAllocation` will be the second easiest, and `FnPointers` will be the least easiest. 

For every Makefile in the three folders you need to follow the syntax:

    all: program1.o program2.o ... programN.o
        gcc program1.o program2.o ... programN.o -o executable_name
        
    program1.o: program1.c program_header_1A.h ... program_header_1Z.h
        gcc -c program1.c
        
    program2.o: program2.c program_header_2A.h ... program_header_2Z.h
        gcc -c program2.c
    .
    .
    .
    
    programN.o: programN.c program_headerNA.h ... program_header_NZ.h
        gcc -c programN.c
        
    clean:
        rm *.o
        rm executable_name
        
# YOU WILL NOT WRITE ANY C CODE IN THIS HOMEWORK!

## MatrixDynamicMemAllocation

You will create a Makefile to compile the files in the `MatrixDynamicMemAllocation` folder. The name of the executable must be `test_matrix`.

## VectorDynamicMemAllocation

You will create a Makefile to compile the files in the `VectorDynamicMemAllocation` folder. The name of the executable must be `run_vector_run`.

## FnPointers

You will create a Makefile to compile the file in the `FnPointers` folder. The name of the executable must be `test_pointer`.

### You cannot use automatic variables in any of the makefiles in this assignment!

# Rubric
|Requirement                             |Score  |
|    :---:                               | :---: |
|Makefile for MatrixDynamicMemAllocation | 20%   |
|Makefile for VectorDynamicMemAllocation | 25%   |
|Makefile for FnPointers                 | 30%   |
|Makefile syntax same as Context above   | 25%   |
|Total                                   | 100%  |
