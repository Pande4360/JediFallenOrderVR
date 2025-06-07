#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "GameplayTag.hpp"
#include "GameplayTagAssetInterface.hpp"
#include "GameplayTagContainer.hpp"
_Script_CoreUObject::Class* _Script_GameplayTags::GameplayTagAssetInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayTags.GameplayTagAssetInterface");
    return result;
}
bool _Script_GameplayTags::GameplayTagAssetInterface::HasMatchingGameplayTag(_Script_GameplayTags::GameplayTag TagToCheck) {
    return;
}
bool _Script_GameplayTags::GameplayTagAssetInterface::HasTarget() {
    return;
}
bool _Script_GameplayTags::GameplayTagAssetInterface::HasAnyMatchingGameplayTags(_Script_GameplayTags::GameplayTagContainer& TagContainer) {
    return;
}
bool _Script_GameplayTags::GameplayTagAssetInterface::HasAllMatchingGameplayTags(_Script_GameplayTags::GameplayTagContainer& TagContainer) {
    return;
}
void _Script_GameplayTags::GameplayTagAssetInterface::GetTargetOwnedGameplayTags(_Script_GameplayTags::GameplayTagContainer& TagContainer) {
    return;
}
void _Script_GameplayTags::GameplayTagAssetInterface::GetOwnedGameplayTags(_Script_GameplayTags::GameplayTagContainer& TagContainer) {
    return;
}
