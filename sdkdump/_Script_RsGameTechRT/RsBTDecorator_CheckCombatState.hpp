#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTDecorator_BlackboardBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTDecorator_CheckCombatState : public _Script_AIModule::BTDecorator_BlackboardBase {
    private: char pad_90[0x20]; public:
    void* get_CombatState();
    void* get_CombatStateMask();
    static _Script_CoreUObject::Class* static_class();
    void OnCombatStateChanged(_Script_RsGameTechRT::RsCharacter* Character, void* PreviousCombatState, void* NewCombatState);
}; // Size: 0xb0
#pragma pack(pop)
}
