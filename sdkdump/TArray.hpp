#pragma once

#include <cstdint>

template<typename T>
class TArray {
public:
    T* data;
    int32_t count;
    int32_t capacity;
};