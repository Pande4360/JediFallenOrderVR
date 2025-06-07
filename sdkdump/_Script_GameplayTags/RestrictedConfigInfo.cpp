#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RestrictedConfigInfo.hpp"
void* _Script_GameplayTags::RestrictedConfigInfo::get_RestrictedConfigName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_GameplayTags::RestrictedConfigInfo::get_Owners() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_GameplayTags::RestrictedConfigInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GameplayTags.RestrictedConfigInfo");
    return result;
}
