if [ ! -d "./build" ]; then
    mkdir ./build
fi
cd build
cmake .. -DCMAKE_CXX_STANDARD=14 -DCMAKE_EXPORT_COMPILE_COMMANDS=1
mv ./compile_commands.json ../
make -j