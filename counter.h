#pragma once
class Counter {
public:
    void up();
    void down();
    void print();
    Counter(const int& tmp);
    Counter();
private:
    int count_;
};

