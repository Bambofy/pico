# Change this parameter to the path to your llvm >9.0.1 /bin/ directory.
llvmbindir=/usr/local/Cellar/llvm/9.0.1/bin			# (remember to use /'s, make sure it doesn't end with /)



#https://aransentin.github.io/cwasm/

# Build Source and header files
$llvmbindir/clang++ -cc1 -emit-llvm-bc -triple=wasm32-unknown-unknown-wasm -std=c++98 -Weverything -fvisibility hidden pico_src/*\.cpp app/src/*\.cpp

# Combine all the compiled .BC files together.
$llvmbindir/llvm-link -o wasmprog.bc pico_src/*\.bc app/src/*\.bc

# Optimize the resulting .BC
opt -O3 wasmprog.bc -o wasmprog.bc

# Compile the .BC to .O
$llvmbindir/llc -O3 -filetype=obj wasmprog.bc -o wasm.o

# Link the resulting obj (with the .syms) 
$llvmbindir/wasm-ld --no-entry wasm.o -o picobin.wasm --strip-all -allow-undefined-file pico.syms --import-memory --export-dynamic