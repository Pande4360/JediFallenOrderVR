#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Game_Characters__Shared_Logic_INT_AI {
#pragma pack(push, 1)
struct INT_AI_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void GetAIMesh(_Script_Engine::SkeletalMeshComponent*& Mesh);
    void GetNameText(void*& AIName);
    void GetAggroToHeroCounter(int32_t& Counter);
    void ShowIcon(void* InputName);
    void HideIcon();
    void ClearAttackHit();
    void UnsheatheWeaponCall(bool Unsheathe, void* WeaponAttachSocketR, void* WeaponAttachSocketL);
    void BlockEnter(bool& bLock);
    void OnZUntargeted();
    void OnZTargeted();
}; // Size: 0x28
#pragma pack(pop)
}
