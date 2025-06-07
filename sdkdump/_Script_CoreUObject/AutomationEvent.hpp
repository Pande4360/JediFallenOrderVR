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
struct AutomationEvent {
    private: char pad_0[0x38]; public:
    void* get_Type();
    void* get_Message();
    void* get_Context();
    void* get_Artifact();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
