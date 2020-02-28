Pico
====
Pico is an simple, spartan and experimental framework that allows you to write websites in C++ and C.

About
======
Pico provides a simple and easy way to compile C++ code to a webassembly binary and bundles it with an index.html for simple viewing. It does not provide system libraries, not even dynamic memory allocation, in this reguard it is spartan. You must make your app within the limits of the environment!

It's goal is to give C++/C programmers a library that isn't too complicated and that provides features that are wanted when C++ programming, for example:
- A simple GUI function set that you can use to create games, like text based roguelikes.
- A simple events function set that you can use to interact with the code.
- A set of useful helper functions like "ToCharArray" that converts any value to a string,


Features
========
- Access div elements.
- Access text area elements.
- Access button events.
- Access window events.
- Create alerts.
- Print to the console.
- Invoke console errors.

Examples
=========
Examples of how to use Pico are held in the /examples/ folder.

Requirements
===========
1. LLVM
2. Python 3 (or some other web server script)

How to use
=========
1. Download the repository.
2. Edit the build.bat (windows) or build.sh (os x) to point to your LLVM installation.
3. Run a local web server at this directory by using start_web.bat or start_web.sh (requires Python 3).
4. Open the workspace.code-workspace in Visual Studio Code.
5. Open the /app/ directory and create your C++ Pico app.
6. Edit the index.html with your HTML elements.
6. Build your app by running build.bat or build.sh.
7. Open your web browser and navigate to 127.0.0.1:8000 (see step 3).

The Pico functions are described in the examples files, however, please browse pico_inc and pico_src to get a good view of the api.


Changes
========
28/02/2020 - Open sourced the code repository.

Attribution
===========
Icons made by <a href="https://www.flaticon.com/authors/good-ware" title="Good Ware">Good Ware</a> from <a href="https://www.flaticon.com/" title="Flaticon">www.flaticon.com</a></div>