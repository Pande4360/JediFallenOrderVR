#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BlackboardKeyType.hpp"
namespace _Script_CoreUObject {
struct Enum;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BlackboardKeyType_NativeEnum : public BlackboardKeyType {
    private: char pad_30[0x18]; public:
    void* get_EnumName();
    _Script_CoreUObject::Enum*& get_EnumType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
