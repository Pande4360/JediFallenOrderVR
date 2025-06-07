#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "BlueprintGameplayTagLibrary.hpp"
#include "GameplayTag.hpp"
#include "GameplayTagContainer.hpp"
#include "GameplayTagQuery.hpp"
bool _Script_GameplayTags::BlueprintGameplayTagLibrary::NotEqual_GameplayTagContainer(_Script_GameplayTags::GameplayTagContainer& A, _Script_GameplayTags::GameplayTagContainer& B) {
    return;
}
_Script_CoreUObject::Class* _Script_GameplayTags::BlueprintGameplayTagLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayTags.BlueprintGameplayTagLibrary");
    return result;
}
bool _Script_GameplayTags::BlueprintGameplayTagLibrary::RemoveGameplayTag(_Script_GameplayTags::GameplayTagContainer& TagContainer, _Script_GameplayTags::GameplayTag Tag) {
    return;
}
bool _Script_GameplayTags::BlueprintGameplayTagLibrary::NotEqual_TagContainerTagContainer(_Script_GameplayTags::GameplayTagContainer A, void* B) {
    return;
}
bool _Script_GameplayTags::BlueprintGameplayTagLibrary::NotEqual_TagTag(_Script_GameplayTags::GameplayTag A, void* B) {
    return;
}
bool _Script_GameplayTags::BlueprintGameplayTagLibrary::MatchesTag(_Script_GameplayTags::GameplayTag TagOne, _Script_GameplayTags::GameplayTag TagTwo, bool bExactMatch) {
    return;
}
bool _Script_GameplayTags::BlueprintGameplayTagLibrary::NotEqual_GameplayTag(_Script_GameplayTags::GameplayTag A, _Script_GameplayTags::GameplayTag B) {
    return;
}
bool _Script_GameplayTags::BlueprintGameplayTagLibrary::MatchesAnyTags(_Script_GameplayTags::GameplayTag TagOne, _Script_GameplayTags::GameplayTagContainer& OtherContainer, bool bExactMatch) {
    return;
}
_Script_GameplayTags::GameplayTagContainer _Script_GameplayTags::BlueprintGameplayTagLibrary::MakeLiteralGameplayTagContainer(_Script_GameplayTags::GameplayTagContainer Value) {
    return;
}
void* _Script_GameplayTags::BlueprintGameplayTagLibrary::GetTagName(_Script_GameplayTags::GameplayTag& GameplayTag) {
    return;
}
_Script_GameplayTags::GameplayTag _Script_GameplayTags::BlueprintGameplayTagLibrary::MakeLiteralGameplayTag(_Script_GameplayTags::GameplayTag Value) {
    return;
}
bool _Script_GameplayTags::BlueprintGameplayTagLibrary::HasAnyTags(_Script_GameplayTags::GameplayTagContainer& TagContainer, _Script_GameplayTags::GameplayTagContainer& OtherContainer, bool bExactMatch) {
    return;
}
_Script_GameplayTags::GameplayTagQuery _Script_GameplayTags::BlueprintGameplayTagLibrary::MakeGameplayTagQuery(_Script_GameplayTags::GameplayTagQuery TagQuery) {
    return;
}
_Script_GameplayTags::GameplayTagContainer _Script_GameplayTags::BlueprintGameplayTagLibrary::MakeGameplayTagContainerFromTag(_Script_GameplayTags::GameplayTag SingleTag) {
    return;
}
void _Script_GameplayTags::BlueprintGameplayTagLibrary::AppendGameplayTagContainers(_Script_GameplayTags::GameplayTagContainer& InOutTagContainer, _Script_GameplayTags::GameplayTagContainer& InTagContainer) {
    return;
}
_Script_GameplayTags::GameplayTagContainer _Script_GameplayTags::BlueprintGameplayTagLibrary::MakeGameplayTagContainerFromArray(void*& GameplayTags) {
    return;
}
bool _Script_GameplayTags::BlueprintGameplayTagLibrary::IsLeafTag(_Script_GameplayTags::GameplayTag Tag) {
    return;
}
bool _Script_GameplayTags::BlueprintGameplayTagLibrary::IsGameplayTagValid(_Script_GameplayTags::GameplayTag GameplayTag) {
    return;
}
int32_t _Script_GameplayTags::BlueprintGameplayTagLibrary::GetNumGameplayTagsInContainer(_Script_GameplayTags::GameplayTagContainer& TagContainer) {
    return;
}
bool _Script_GameplayTags::BlueprintGameplayTagLibrary::HasTag(_Script_GameplayTags::GameplayTagContainer& TagContainer, _Script_GameplayTags::GameplayTag Tag, bool bExactMatch) {
    return;
}
bool _Script_GameplayTags::BlueprintGameplayTagLibrary::HasAllTags(_Script_GameplayTags::GameplayTagContainer& TagContainer, _Script_GameplayTags::GameplayTagContainer& OtherContainer, bool bExactMatch) {
    return;
}
bool _Script_GameplayTags::BlueprintGameplayTagLibrary::HasAllMatchingGameplayTags(void* TagContainerInterface, _Script_GameplayTags::GameplayTagContainer& OtherContainer) {
    return;
}
void _Script_GameplayTags::BlueprintGameplayTagLibrary::GetParentTag(_Script_GameplayTags::GameplayTag Tag, bool& OutHasParent, _Script_GameplayTags::GameplayTag& OutParentTag) {
    return;
}
_Script_GameplayTags::GameplayTagContainer _Script_GameplayTags::BlueprintGameplayTagLibrary::GetDirectChildTags(_Script_GameplayTags::GameplayTag ParentTag) {
    return;
}
void* _Script_GameplayTags::BlueprintGameplayTagLibrary::GetDebugStringFromGameplayTagContainer(_Script_GameplayTags::GameplayTagContainer& TagContainer) {
    return;
}
void* _Script_GameplayTags::BlueprintGameplayTagLibrary::GetDebugStringFromGameplayTag(_Script_GameplayTags::GameplayTag GameplayTag) {
    return;
}
_Script_GameplayTags::GameplayTagContainer _Script_GameplayTags::BlueprintGameplayTagLibrary::GetAllChildTags(_Script_GameplayTags::GameplayTag ParentTag, bool bLeafTagsOnly) {
    return;
}
void _Script_GameplayTags::BlueprintGameplayTagLibrary::GetAllActorsOfClassMatchingTagQuery(_Script_CoreUObject::Object* WorldContextObject, void* ActorClass, _Script_GameplayTags::GameplayTagQuery& GameplayTagQuery, void*& OutActors) {
    return;
}
bool _Script_GameplayTags::BlueprintGameplayTagLibrary::EqualEqual_GameplayTagContainer(_Script_GameplayTags::GameplayTagContainer& A, _Script_GameplayTags::GameplayTagContainer& B) {
    return;
}
bool _Script_GameplayTags::BlueprintGameplayTagLibrary::EqualEqual_GameplayTag(_Script_GameplayTags::GameplayTag A, _Script_GameplayTags::GameplayTag B) {
    return;
}
bool _Script_GameplayTags::BlueprintGameplayTagLibrary::DoesTagAssetInterfaceHaveTag(void* TagContainerInterface, _Script_GameplayTags::GameplayTag Tag) {
    return;
}
bool _Script_GameplayTags::BlueprintGameplayTagLibrary::DoesContainerMatchTagQuery(_Script_GameplayTags::GameplayTagContainer& TagContainer, _Script_GameplayTags::GameplayTagQuery& TagQuery) {
    return;
}
void _Script_GameplayTags::BlueprintGameplayTagLibrary::BreakGameplayTagContainer(_Script_GameplayTags::GameplayTagContainer& GameplayTagContainer, void*& GameplayTags) {
    return;
}
void _Script_GameplayTags::BlueprintGameplayTagLibrary::AddGameplayTag(_Script_GameplayTags::GameplayTagContainer& TagContainer, _Script_GameplayTags::GameplayTag Tag) {
    return;
}
