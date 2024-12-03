# Here is an explanation of commands:

## cmake --build .

This command builds the project in the current directory (.) using CMake.

It compiles the source files (.cpp files) and generates an executable (or other specified output) based on the build configuration set up by the CMakeLists.txt file.

If the project was configured to use a specific compiler (e.g., GCC) or parallelization libraries like OpenMP or CUDA, this command will ensure the build includes those settings.

## ./farao

This command runs the compiled executable named farao in the current directory.

It assumes that cmake --build . successfully created the farao executable, and this command executes it.

The ./ indicates that the executable is located in the current directory.

## Summary:
The first command compiles the program, and the second command runs the resulting executable.
