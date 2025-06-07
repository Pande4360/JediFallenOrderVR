#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SignificanceManager.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SignificanceManager {
#pragma pack(push, 1)
struct RsSignificanceManager : public SignificanceManager {
    private: char pad_118[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x128
#pragma pack(pop)
}
