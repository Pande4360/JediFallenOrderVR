#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameplayTag.hpp"
_Script_CoreUObject::Class* _Script_GameplayTags::GameplayTag::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GameplayTags.GameplayTag");
    return result;
}
void* _Script_GameplayTags::GameplayTag::get_TagName() {
    return (void*)((uintptr_t)this + 0x0);
}
