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
struct SwBTTask_BuddyAttachToHeroAndWait : public _Script_AIModule::BTTaskNode {
    private: char pad_70[0x8]; public:
    float& get_WaitTime();
    bool get_bInfiniteWaitTime();
    void set_bInfiniteWaitTime(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
