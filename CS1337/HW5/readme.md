<!-- To preview this markdown file in VSCode: Ctrl+Shift+V -->

# CS1 Portfolio | HW5: The Singleton Design Pattern
## Author: Bushra Rahman
This is the repository for [`CS 1337/HW5/`](/CS1337/HW5).

## Compilation & Execution Instructions
Open terminal in `CS1-portfolio` and run:
<!-- CODE START -->
```
cd CS1337/HW5
mkdir build
g++ src/LogSingleton-Driver.cpp src/AbstractLogger.cpp src/FileLogger.cpp src/ScreenLogger.cpp src/LogSingleton.cpp -o build/HW5
# Or use the *.cpp wildcard for a conciser compilation instruction:
g++ src/*.cpp -o build/HW5
build/HW5
```
<!-- CODE END -->

## Homework Instructions
* [HW 5: The Singleton Design Pattern](/CS1337/HW5/HW5_Singleton_Design_Pattern.pdf)

## `src/` Folder
### Source Files
* [LogSingleton-Driver.cpp](/CS1337/HW5/src/LogSingleton-Driver.cpp): program driver containing `main()` and 4 helper functions
* [AbstractLogger.cpp](/CS1337/HW5/src/AbstractLogger.cpp): defines 4 of 6 functions for the abstract base class
* [FileLogger.cpp](/CS1337/HW5/src/FileLogger.cpp): defines 4 functions for a subclass
* [ScreenLogger.cpp](/CS1337/HW5/src/ScreenLogger.cpp): defines 4 functions for a subclass
* [LogSingleton.cpp](/CS1337/HW5/src/LogSingleton.cpp): defines 4 of 5 functions for a class

### Header Files
* [AbstractLogger.h](/CS1337/HW5/src/AbstractLogger.h): contains the class definition of the abstract base class, including 2 inline functions and 1 pure virtual function defined in subclasses
* [FileLogger.h](/CS1337/HW5/src/FileLogger.h): contains the class definition of a subclass
* [ScreenLogger.h](/CS1337/HW5/src/ScreenLogger.h): contains the class definition of a subclass
* [LogSingleton.h](/CS1337/HW5/src/LogSingleton.h): contains the class definition of a class, including 1 inline function

## Output File
* [Log.txt](/CS1337/HW5/Log.txt): output file
