## Pico
Pico is a spartan framework that allows you to write websites in C++ and C.

#### [website](https://bambofy.github.io/pico/)

## About
Pico provides a straightforward way to compile a C++ project to a webassembly based webpage. It does not provide system libraries, not even dynamic memory allocation!

Pico's goal is to give C++/C programmers a library that provides useful features that are wanted when experimenting with C/C++, for example:
- A simple GUI function set that you can use to create games, like text based roguelikes.
- A simple events function set that you can use to interact with the code.
- A set of useful helper functions like "ToCharArray" that converts any value to a string,

## Features
- Access div elements.
- Access text area elements.
- Access button events.
- Access window events.
- Create alerts.
- Print to the console.
- Invoke console errors.

## Examples
Examples of how to use Pico are held in the /examples/ folder.

## Setting up LLVM
### OS X
1. LLVM "brew install llvm"
2. Python 3 (or some other web server script)
### Windows
1. Python 3
Note: The binaries for windows are provided in the /llvm/ directory, so no further installation is required.

## Getting Started
1. Download the repository.
2. Edit the build.bat (windows) or build.sh (os x) to point to your LLVM installation.
3. Run a local web server at this directory by using start_web.bat or start_web.sh (requires Python).
4. Open the /app/ directory and create your C++ Pico app.
5. Edit the index.html with your HTML elements.
6. Build your app by running build.bat or build.sh.
7. Open your web browser and navigate to localhost:8000 (see step 3).

## Changes
28/02/2020  - Open sourced the code repository.
29/02/2020  - Added more information to the readme about
            - Added LLVM binaries for windows.
#### Credits
<div>Icons made by <a  href="https://www.flaticon.com/authors/freepik"  title="Freepik">Freepik</a> from <a  href="https://www.flaticon.com/"  title="Flaticon">www.flaticon.com</a></div>
