#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameplayTagSource.hpp"
#include "GameplayTagsList.hpp"
#include "RestrictedGameplayTagsList.hpp"
void* _Script_GameplayTags::GameplayTagSource::get_SourceType() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_GameplayTags::GameplayTagSource::get_SourceName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_GameplayTags::GameplayTagsList*& _Script_GameplayTags::GameplayTagSource::get_SourceTagList() {
    return *(_Script_GameplayTags::GameplayTagsList**)((uintptr_t)this + 0x10);
}
_Script_GameplayTags::RestrictedGameplayTagsList*& _Script_GameplayTags::GameplayTagSource::get_SourceRestrictedTagList() {
    return *(_Script_GameplayTags::RestrictedGameplayTagsList**)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_GameplayTags::GameplayTagSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GameplayTags.GameplayTagSource");
    return result;
}
