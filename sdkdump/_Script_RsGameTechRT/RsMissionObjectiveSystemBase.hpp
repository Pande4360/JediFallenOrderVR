#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsMissionObjectiveSystemBase : public _Script_Engine::Actor {
    static _Script_CoreUObject::Class* static_class();
    void SetMissionCompleted(void* MissionKey, bool bNotifyPlayer);
    void SetMissionActive(void* MissionKey, bool bNotifyPlayer);
    void SetMissionAcquired(void* MissionKey, bool bNotifyPlayer);
    void PopulateMissionKeyList(_Script_CoreUObject::Object* ContextObject, void*& Options);
}; // Size: 0x360
#pragma pack(pop)
}
