#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTTaskNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTTask_PlayAnimationBase : public _Script_AIModule::BTTaskNode {
    private: char pad_70[0x20]; public:
    void* get_BlendspaceInputSource();
    bool get_bLockCurrentGoal();
    void set_bLockCurrentGoal(bool value);
    bool get_bLockCurrentTarget();
    void set_bLockCurrentTarget(bool value);
    bool get_bMaintainCharacterMotion();
    void set_bMaintainCharacterMotion(bool value);
    static _Script_CoreUObject::Class* static_class();
    void OnCombatStateChange(_Script_RsGameTechRT::RsCharacter* Character, void* PreviousCombatState, void* NewCombatState);
}; // Size: 0x90
#pragma pack(pop)
}
