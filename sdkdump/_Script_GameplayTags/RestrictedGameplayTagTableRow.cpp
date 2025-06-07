#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameplayTagTableRow.hpp"
#include "RestrictedGameplayTagTableRow.hpp"
bool _Script_GameplayTags::RestrictedGameplayTagTableRow::get_bAllowNonRestrictedChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void _Script_GameplayTags::RestrictedGameplayTagTableRow::set_bAllowNonRestrictedChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_GameplayTags::RestrictedGameplayTagTableRow::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GameplayTags.RestrictedGameplayTagTableRow");
    return result;
}
