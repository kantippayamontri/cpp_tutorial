#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Usage: $0 <cpp_file>"
    echo "Example: $0 main.cpp"
    exit 1
fi

cpp_file="$1"
output_file="${cpp_file%.*}"

echo "Compiling $cpp_file..."
clang++ -std=c++17 -Wall -Wextra "$cpp_file" -o "$output_file"

if [ $? -eq 0 ]; then
    echo "Compilation successful. Running $output_file..."
    echo "--- Output ---"
    ./"$output_file"
    echo "--- End Output ---"
    echo "Cleaning up..."
    rm "$output_file"
else
    echo "Compilation failed."
    exit 1
fi
