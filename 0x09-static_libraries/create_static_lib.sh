#!/bin/bash

# Compile all .c files in the current directory into separate executables

for source_file in *.c; do
    object_file="${source_file%.c}.o"  # Generate the corresponding object file name
    gcc -c "$source_file" -o "$object_file"
done

ar rc liball.a *.o
