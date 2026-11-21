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
* [AbstractLogger.cpp](/CS1337/HW5/src/AbstractLogger.cpp): defines 4 of 6 member functions for an abstract base class
* [FileLogger.cpp](/CS1337/HW5/src/FileLogger.cpp): defines 4 member functions for an AbstractLogger subclass
* [ScreenLogger.cpp](/CS1337/HW5/src/ScreenLogger.cpp): defines 4 member functions for an AbstractLogger subclass
* [LogSingleton.cpp](/CS1337/HW5/src/LogSingleton.cpp): defines 4 of 5 member functions for a helper class

### Header Files
* [AbstractLogger.h](/CS1337/HW5/src/AbstractLogger.h): contains the class definition of an abstract base class, including 2 inline member functions and 1 pure virtual member function defined in subclasses
* [FileLogger.h](/CS1337/HW5/src/FileLogger.h): contains the class definition of an AbstractLogger subclass
* [ScreenLogger.h](/CS1337/HW5/src/ScreenLogger.h): contains the class definition of an AbstractLogger subclass
* [LogSingleton.h](/CS1337/HW5/src/LogSingleton.h): contains the class definition of a helper class, including 1 inline member function

## Output File
* [Log.txt](/CS1337/HW5/Log.txt): output file
