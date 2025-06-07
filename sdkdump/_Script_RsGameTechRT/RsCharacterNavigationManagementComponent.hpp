#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsHeroComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsCharacterNavigationManagementComponent : public RsHeroComponent {
    private: char pad_180[0x108]; public:
    void* get_ConstraintBoneName();
    static _Script_CoreUObject::Class* static_class();
    void UpdateTransitionProgression(float Progression);
    bool TrySetNavState(void* navState, bool forceNavStateChange, void* navStateChangeTag);
    void TriggerTransition(void* targetNavComponent);
    bool ResetToBestNavState(bool forceNavStateChange, void* navStateChangeTag);
    void OnHeroStateChanged(void* NewState, void* PrevState);
}; // Size: 0x288
#pragma pack(pop)
}
