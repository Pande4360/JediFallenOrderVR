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
struct BlackboardKeyType_Enum : public BlackboardKeyType {
    private: char pad_30[0x20]; public:
    _Script_CoreUObject::Enum*& get_EnumType();
    void* get_EnumName();
    bool get_bIsEnumNameValid();
    void set_bIsEnumNameValid(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
