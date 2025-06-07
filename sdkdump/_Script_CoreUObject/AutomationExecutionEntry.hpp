#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
#pragma pack(push, 1)
struct AutomationExecutionEntry {
    private: char pad_0[0x58]; public:
    void* get_Event();
    void* get_Filename();
    int32_t& get_LineNumber();
    void* get_Timestamp();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
