#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwProjectileDamageData : public _Script_Engine::TableRowBase {
    private: char pad_8[0x10]; public:
    float& get_BaseDamage();
    float& get_FriendlyDamage();
    float& get_ReflectedDamage();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
