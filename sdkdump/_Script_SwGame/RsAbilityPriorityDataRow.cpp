#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAbilityPriorityDataRow.hpp"
void* _Script_SwGame::RsAbilityPriorityDataRow::get_RowName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SwGame::RsAbilityPriorityDataRow::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.RsAbilityPriorityDataRow");
    return result;
}
