#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#pragma pack(push, 1)
struct FName {
    int32_t Index; // 0x0
    int32_t Number; // 0x4
    std::wstring ToString();
}; // Size: 0x8
#pragma pack(pop)
