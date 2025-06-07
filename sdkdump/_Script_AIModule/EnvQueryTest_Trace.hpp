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
struct EnvQueryTest_Trace : public EnvQueryTest {
    private: char pad_1c0[0xc8]; public:
    void* get_TraceData();
    void* get_TraceFromContext();
    void* get_ItemHeightOffset();
    void* get_ContextHeightOffset();
    void* get_Context();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x288
#pragma pack(pop)
}
