#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "EnvQueryTest.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EnvQueryTest_Overlap : public EnvQueryTest {
    private: char pad_1c0[0x20]; public:
    void* get_OverlapData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1e0
#pragma pack(pop)
}
