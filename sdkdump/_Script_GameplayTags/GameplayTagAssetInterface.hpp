#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
#include "GameplayTag.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayTags {
struct GameplayTagContainer;
}
namespace _Script_GameplayTags {
#pragma pack(push, 1)
struct GameplayTagAssetInterface : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    bool HasTarget();
    bool HasMatchingGameplayTag(_Script_GameplayTags::GameplayTag TagToCheck);
    bool HasAnyMatchingGameplayTags(_Script_GameplayTags::GameplayTagContainer& TagContainer);
    bool HasAllMatchingGameplayTags(_Script_GameplayTags::GameplayTagContainer& TagContainer);
    void GetTargetOwnedGameplayTags(_Script_GameplayTags::GameplayTagContainer& TagContainer);
    void GetOwnedGameplayTags(_Script_GameplayTags::GameplayTagContainer& TagContainer);
}; // Size: 0x28
#pragma pack(pop)
}
