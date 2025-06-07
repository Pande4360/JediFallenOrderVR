#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTTaskNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwBTTask_BuddyDetachToLocation : public _Script_AIModule::BTTaskNode {
    private: char pad_70[0x50]; public:
    void* get_TargetLocationKey();
    void* get_TargetRotationKey();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
