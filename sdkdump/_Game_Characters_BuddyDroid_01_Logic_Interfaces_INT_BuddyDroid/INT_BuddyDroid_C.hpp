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
namespace _Game_Characters_BuddyDroid_01_Logic_Interfaces_INT_BuddyDroid {
#pragma pack(push, 1)
struct INT_BuddyDroid_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void GetBD1SkeletalMesh(_Script_Engine::SkeletalMeshComponent*& SkelMeshComponent);
    void SetHealingState(bool bIsHealing);
}; // Size: 0x28
#pragma pack(pop)
}
