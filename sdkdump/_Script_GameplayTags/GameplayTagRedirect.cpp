#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameplayTagRedirect.hpp"
void* _Script_GameplayTags::GameplayTagRedirect::get_OldTagName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_GameplayTags::GameplayTagRedirect::get_NewTagName() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_GameplayTags::GameplayTagRedirect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GameplayTags.GameplayTagRedirect");
    return result;
}
