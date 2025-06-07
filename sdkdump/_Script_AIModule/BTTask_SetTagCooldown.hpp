#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BTTaskNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTTask_SetTagCooldown : public BTTaskNode {
    private: char pad_70[0x10]; public:
    void* get_CooldownTag();
    bool get_bAddToExistingDuration();
    void set_bAddToExistingDuration(bool value);
    float& get_CooldownDuration();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
