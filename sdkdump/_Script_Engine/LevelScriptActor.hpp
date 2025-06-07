#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\IntVector.hpp"
#include "Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LevelScriptActor : public Actor {
    private: char pad_360[0x8]; public:
    bool get_bInputEnabled();
    void set_bInputEnabled(bool value);
    static _Script_CoreUObject::Class* static_class();
    void WorldOriginLocationChanged(_Script_CoreUObject::IntVector OldOriginLocation, _Script_CoreUObject::IntVector NewOriginLocation);
    void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
    bool RemoteEvent(void* EventName);
    void ReceiveLevelVisible();
    void ReceiveLevelHidden();
    void LevelReset();
}; // Size: 0x368
#pragma pack(pop)
}
