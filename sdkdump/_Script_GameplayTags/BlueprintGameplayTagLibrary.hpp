#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "GameplayTag.hpp"
#include "GameplayTagContainer.hpp"
#include "GameplayTagQuery.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_GameplayTags {
#pragma pack(push, 1)
struct BlueprintGameplayTagLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool RemoveGameplayTag(_Script_GameplayTags::GameplayTagContainer& TagContainer, _Script_GameplayTags::GameplayTag Tag);
    bool NotEqual_TagTag(_Script_GameplayTags::GameplayTag A, void* B);
    bool NotEqual_TagContainerTagContainer(_Script_GameplayTags::GameplayTagContainer A, void* B);
    bool NotEqual_GameplayTagContainer(_Script_GameplayTags::GameplayTagContainer& A, _Script_GameplayTags::GameplayTagContainer& B);
    bool NotEqual_GameplayTag(_Script_GameplayTags::GameplayTag A, _Script_GameplayTags::GameplayTag B);
    bool MatchesTag(_Script_GameplayTags::GameplayTag TagOne, _Script_GameplayTags::GameplayTag TagTwo, bool bExactMatch);
    bool MatchesAnyTags(_Script_GameplayTags::GameplayTag TagOne, _Script_GameplayTags::GameplayTagContainer& OtherContainer, bool bExactMatch);
    _Script_GameplayTags::GameplayTagContainer MakeLiteralGameplayTagContainer(_Script_GameplayTags::GameplayTagContainer Value);
    _Script_GameplayTags::GameplayTag MakeLiteralGameplayTag(_Script_GameplayTags::GameplayTag Value);
    _Script_GameplayTags::GameplayTagQuery MakeGameplayTagQuery(_Script_GameplayTags::GameplayTagQuery TagQuery);
    _Script_GameplayTags::GameplayTagContainer MakeGameplayTagContainerFromTag(_Script_GameplayTags::GameplayTag SingleTag);
    _Script_GameplayTags::GameplayTagContainer MakeGameplayTagContainerFromArray(void*& GameplayTags);
    bool IsLeafTag(_Script_GameplayTags::GameplayTag Tag);
    bool IsGameplayTagValid(_Script_GameplayTags::GameplayTag GameplayTag);
    bool HasTag(_Script_GameplayTags::GameplayTagContainer& TagContainer, _Script_GameplayTags::GameplayTag Tag, bool bExactMatch);
    bool HasAnyTags(_Script_GameplayTags::GameplayTagContainer& TagContainer, _Script_GameplayTags::GameplayTagContainer& OtherContainer, bool bExactMatch);
    bool HasAllTags(_Script_GameplayTags::GameplayTagContainer& TagContainer, _Script_GameplayTags::GameplayTagContainer& OtherContainer, bool bExactMatch);
    bool HasAllMatchingGameplayTags(void* TagContainerInterface, _Script_GameplayTags::GameplayTagContainer& OtherContainer);
    void* GetTagName(_Script_GameplayTags::GameplayTag& GameplayTag);
    void GetParentTag(_Script_GameplayTags::GameplayTag Tag, bool& OutHasParent, _Script_GameplayTags::GameplayTag& OutParentTag);
    int32_t GetNumGameplayTagsInContainer(_Script_GameplayTags::GameplayTagContainer& TagContainer);
    _Script_GameplayTags::GameplayTagContainer GetDirectChildTags(_Script_GameplayTags::GameplayTag ParentTag);
    void* GetDebugStringFromGameplayTagContainer(_Script_GameplayTags::GameplayTagContainer& TagContainer);
    void* GetDebugStringFromGameplayTag(_Script_GameplayTags::GameplayTag GameplayTag);
    _Script_GameplayTags::GameplayTagContainer GetAllChildTags(_Script_GameplayTags::GameplayTag ParentTag, bool bLeafTagsOnly);
    void GetAllActorsOfClassMatchingTagQuery(_Script_CoreUObject::Object* WorldContextObject, void* ActorClass, _Script_GameplayTags::GameplayTagQuery& GameplayTagQuery, void*& OutActors);
    bool EqualEqual_GameplayTagContainer(_Script_GameplayTags::GameplayTagContainer& A, _Script_GameplayTags::GameplayTagContainer& B);
    bool EqualEqual_GameplayTag(_Script_GameplayTags::GameplayTag A, _Script_GameplayTags::GameplayTag B);
    bool DoesTagAssetInterfaceHaveTag(void* TagContainerInterface, _Script_GameplayTags::GameplayTag Tag);
    bool DoesContainerMatchTagQuery(_Script_GameplayTags::GameplayTagContainer& TagContainer, _Script_GameplayTags::GameplayTagQuery& TagQuery);
    void BreakGameplayTagContainer(_Script_GameplayTags::GameplayTagContainer& GameplayTagContainer, void*& GameplayTags);
    void AppendGameplayTagContainers(_Script_GameplayTags::GameplayTagContainer& InOutTagContainer, _Script_GameplayTags::GameplayTagContainer& InTagContainer);
    void AddGameplayTag(_Script_GameplayTags::GameplayTagContainer& TagContainer, _Script_GameplayTags::GameplayTag Tag);
}; // Size: 0x28
#pragma pack(pop)
}
