#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameplayTagContainer.hpp"
_Script_CoreUObject::Class* _Script_GameplayTags::GameplayTagContainer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GameplayTags.GameplayTagContainer");
    return result;
}
void* _Script_GameplayTags::GameplayTagContainer::get_GameplayTags() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_GameplayTags::GameplayTagContainer::get_ParentTags() {
    return (void*)((uintptr_t)this + 0x10);
}
