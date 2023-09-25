#ifndef template_hpp
#define template_hpp

#include <utility>
#include <cassert>
#include <iostream>
#include <stdexcept>

template<size_t N>
class Example {
public:
  Example();
private:
  size_t sz_;
};

template<size_t N>
Example<N>::Example() : sz_(N) {}


#endif /* template_hpp */
