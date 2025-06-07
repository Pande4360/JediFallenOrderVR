#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_GameplayTags\GameplayTagAssetInterface.hpp"
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayTags {
struct GameplayTagQuery;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAttributeTagAssetInterface : public _Script_GameplayTags::GameplayTagAssetInterface {
    static _Script_CoreUObject::Class* static_class();
    void RemoveAttributeTags(_Script_GameplayTags::GameplayTagContainer& Tags);
    void RemoveAttributeTag(_Script_GameplayTags::GameplayTag Tag);
    bool MatchesAttributeTagsQuery(_Script_GameplayTags::GameplayTagQuery& TagQuery);
    bool HasMatchingAttributeTag(_Script_GameplayTags::GameplayTag TagToCheck);
    bool HasAnyMatchingAttributeTags(_Script_GameplayTags::GameplayTagContainer& TagContainer);
    bool HasAllMatchingAttributeTags(_Script_GameplayTags::GameplayTagContainer& TagContainer);
    _Script_GameplayTags::GameplayTagContainer GetTargetAttributeTags();
    _Script_GameplayTags::GameplayTagContainer GetAttributeTags();
    int32_t GetAttributeTagCount(_Script_GameplayTags::GameplayTag TagToCheck);
    void AddAttributeTags(_Script_GameplayTags::GameplayTagContainer& Tags);
    void AddAttributeTag(_Script_GameplayTags::GameplayTag Tag);
}; // Size: 0x28
#pragma pack(pop)
}
