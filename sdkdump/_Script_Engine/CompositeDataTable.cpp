#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CompositeDataTable.hpp"
#include "DataTable.hpp"
void* _Script_Engine::CompositeDataTable::get_ParentTables() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_Engine::CompositeDataTable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CompositeDataTable");
    return result;
}
void* _Script_Engine::CompositeDataTable::get_OldParentTables() {
    return (void*)((uintptr_t)this + 0xc8);
}
