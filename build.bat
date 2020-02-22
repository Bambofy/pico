set llvmbindir=C:\Program Files\LLVM\bin
set thisid

Call "%llvmbindir%\clang++.exe" -cc1 -emit-llvm-bc -triple=wasm32-unknown-unknown-wasm -std=c++98 -Weverything -fvisibility hidden %cd%/pico_src/*.cpp %cd%/app/src/*.cpp



Call "%llvmbindir%\llvm-link.exe" -o wasmprog.bc pico_src/*\.bc app/src/*\.bc
Call "%llvmbindir%\llc.exe" -O3 -filetype=obj wasmprog.bc -o wasm.o
Call "%llvmbindir%\wasm-ld.exe" --no-entry wasm.o -o picobin.wasm --strip-all -allow-undefined-file pico.syms --import-memory --export-dynamic