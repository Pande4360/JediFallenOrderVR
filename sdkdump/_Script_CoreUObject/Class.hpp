#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Struct.hpp"
namespace _Script_CoreUObject {
#pragma pack(push, 1)
struct Class : public Struct {
    private: char pad_88[0x188]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x210
#pragma pack(pop)
}
