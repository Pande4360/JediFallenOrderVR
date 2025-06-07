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
struct RsAbilityPriorityData : public _Script_Engine::TableRowBase {
    private: char pad_8[0x8]; public:
    void* get_SwForceSlowAbility();
    void* get_SwForcePushAbility();
    void* get_SwForcePullAbility();
    void* get_SwForceTelekinesisAbility();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
