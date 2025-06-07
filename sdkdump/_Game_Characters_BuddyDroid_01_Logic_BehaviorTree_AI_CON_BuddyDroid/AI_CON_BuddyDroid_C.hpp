#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwAIBuddyDroidController.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_BuddyDroid_01_Logic_BehaviorTree_AI_CON_BuddyDroid {
#pragma pack(push, 1)
struct AI_CON_BuddyDroid_C : public _Script_SwGame::SwAIBuddyDroidController {
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
}; // Size: 0x8a0
#pragma pack(pop)
}
