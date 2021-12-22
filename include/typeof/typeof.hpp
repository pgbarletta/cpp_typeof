#include <typeinfo>
#include <myboost/core/demangle.hpp>

template <typename T> std::string typeof(T &var) {

    return boost::core::demangle(typeid(var).name());
}

