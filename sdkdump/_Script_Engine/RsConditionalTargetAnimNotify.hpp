#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsConditionalAnimNotify.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsConditionalTargetAnimNotify : public RsConditionalAnimNotify {
    private: char pad_80[0x48]; public:
    void* get_RequiredTargetTagQuery();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
