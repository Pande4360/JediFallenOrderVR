#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GameplayTagsManager.hpp"
_Script_CoreUObject::Class* _Script_GameplayTags::GameplayTagsManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayTags.GameplayTagsManager");
    return result;
}
void* _Script_GameplayTags::GameplayTagsManager::get_TagSources() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_GameplayTags::GameplayTagsManager::get_GameplayTagTables() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_GameplayTags::GameplayTagsManager::get_RestrictedGameplayTagTables() {
    return (void*)((uintptr_t)this + 0x120);
}
