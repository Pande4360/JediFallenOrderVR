#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RestrictedGameplayTagsList.hpp"
void* _Script_GameplayTags::RestrictedGameplayTagsList::get_RestrictedGameplayTagList() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_GameplayTags::RestrictedGameplayTagsList::get_ConfigFileName() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_GameplayTags::RestrictedGameplayTagsList::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayTags.RestrictedGameplayTagsList");
    return result;
}
