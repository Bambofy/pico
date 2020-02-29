Call "%cd%/llvm/clang++.exe" -cc1 -emit-llvm-bc -triple=wasm32-unknown-unknown-wasm -std=c++98 -Weverything -fvisibility hidden %cd%/pico_src/*.cpp %cd%/app/src/*.cpp


Call "%cd%/llvm/llvm-link.exe" -o wasmprog.bc pico_src/*.bc app/src/*.bc
Call "%cd%/llvm/llc.exe" -O3 -filetype=obj wasmprog.bc -o wasm.o
Call "%cd%/llvm/wasm-ld.exe" --no-entry wasm.o -o picobin.wasm --strip-all -allow-undefined-file pico.syms --import-memory --export-dynamic