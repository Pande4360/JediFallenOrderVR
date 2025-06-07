#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DataTable.hpp"
#include "DataTableCategoryHandle.hpp"
void* _Script_Engine::DataTableCategoryHandle::get_RowContents() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_Engine::DataTable*& _Script_Engine::DataTableCategoryHandle::get_DataTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::DataTableCategoryHandle::get_ColumnName() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::DataTableCategoryHandle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.DataTableCategoryHandle");
    return result;
}
