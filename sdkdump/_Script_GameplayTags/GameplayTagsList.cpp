#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GameplayTagsList.hpp"
void* _Script_GameplayTags::GameplayTagsList::get_ConfigFileName() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_GameplayTags::GameplayTagsList::get_GameplayTagList() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_GameplayTags::GameplayTagsList::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayTags.GameplayTagsList");
    return result;
}
