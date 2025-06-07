#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "SwStaminaMeterRow.hpp"
_Script_Engine::DataTable*& _Script_SwGame::SwStaminaMeterRow::get_DataTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x0);
}
void* _Script_SwGame::SwStaminaMeterRow::get_RowName() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwStaminaMeterRow::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwStaminaMeterRow");
    return result;
}
