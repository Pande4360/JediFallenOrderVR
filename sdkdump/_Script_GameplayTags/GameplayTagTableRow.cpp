#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "GameplayTagTableRow.hpp"
void* _Script_GameplayTags::GameplayTagTableRow::get_Tag() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_GameplayTags::GameplayTagTableRow::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GameplayTags.GameplayTagTableRow");
    return result;
}
void* _Script_GameplayTags::GameplayTagTableRow::get_DevComment() {
    return (void*)((uintptr_t)this + 0x10);
}
