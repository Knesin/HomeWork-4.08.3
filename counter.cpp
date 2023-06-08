#include "counter.h"
#include <iostream>

void Counter::up() { ++count_; }
void Counter::down() { --count_; }
void Counter::print() { std::cout << count_ << std::endl; }
Counter::Counter(const int& tmp) { count_ = tmp; }
Counter::Counter() { count_ = 1; }
