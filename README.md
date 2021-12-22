# typeof() for C++

`typeof` header-only library. A very small collection of boost headers + 1 header (typeof.hpp) with a convenience function.
It comes woth aCMakeLists.txt so you can add it to your project just by adding the folder into you project's folder and these 2 lines in your main CMakeLists.txt:

```
add_subdirectory(include/typeof)
target_link_libraries(sample TYPEOF)
```

## example compilation and run

On `typeof`s root folder build and run the example:
```
cmake -B build .
cd build
make
./sample
```
