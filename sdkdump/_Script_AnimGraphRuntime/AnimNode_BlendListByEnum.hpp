#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_BlendListBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_BlendListByEnum : public AnimNode_BlendListBase {
    private: char pad_c8[0x18]; public:
    void* get_EnumToPoseIndex();
    void* get_ActiveEnumValue();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
