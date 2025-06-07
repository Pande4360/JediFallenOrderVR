#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\UniqueNetIdWrapper.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct UniqueNetIdRepl : public _Script_CoreUObject::UniqueNetIdWrapper {
    private: char pad_1[0x27]; public:
    void* get_ReplicationBytes();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
