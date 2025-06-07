#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsConditionalAnimNotifyState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsConditionalTargetAnimNotifyState : public RsConditionalAnimNotifyState {
    private: char pad_78[0x48]; public:
    void* get_RequiredTargetTagQuery();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
