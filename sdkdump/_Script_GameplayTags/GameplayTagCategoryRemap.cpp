#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameplayTagCategoryRemap.hpp"
void* _Script_GameplayTags::GameplayTagCategoryRemap::get_BaseCategory() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_GameplayTags::GameplayTagCategoryRemap::get_RemapCategories() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_GameplayTags::GameplayTagCategoryRemap::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GameplayTags.GameplayTagCategoryRemap");
    return result;
}
