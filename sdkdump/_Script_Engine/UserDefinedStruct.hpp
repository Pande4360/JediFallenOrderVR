#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\ScriptStruct.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct UserDefinedStruct : public _Script_CoreUObject::ScriptStruct {
    private: char pad_98[0x48]; public:
    void* get_Status();
    void* get_Guid();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
