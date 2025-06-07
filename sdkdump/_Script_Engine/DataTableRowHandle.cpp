#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DataTable.hpp"
#include "DataTableRowHandle.hpp"
_Script_Engine::DataTable*& _Script_Engine::DataTableRowHandle::get_DataTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::DataTableRowHandle::get_RowName() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::DataTableRowHandle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.DataTableRowHandle");
    return result;
}
