#include <vector>
#include <fmt/core.h>
#include <typeof.hpp>

class MyType {
    int i;
};

template <typename T> class MyTemplatedType {
    T i;
};

int main() {
    float f = 6.023f;
    fmt::print("float: \n\t{}\n---\n", typeof(f));

    std::vector<float> v1{f};
    fmt::print("vector of floats: \n\t{}\n---\n", typeof(v1));
    
    std::vector<bool> v2;
    fmt::print("vector of bool: \n\t{}\n---\n", typeof(v2));
    
    MyType var1;
    fmt::print("MyType: \n\t{}\n---\n", typeof(var1));
    
    MyTemplatedType<int> var2;
    fmt::print("MyTemplatedType: \n\t{}\n---\n", typeof(var2));

    return 0;                                        
}
