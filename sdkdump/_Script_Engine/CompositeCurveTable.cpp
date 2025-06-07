#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CompositeCurveTable.hpp"
#include "CurveTable.hpp"
void* _Script_Engine::CompositeCurveTable::get_ParentTables() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_Engine::CompositeCurveTable::get_OldParentTables() {
    return (void*)((uintptr_t)this + 0xa8);
}
_Script_CoreUObject::Class* _Script_Engine::CompositeCurveTable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CompositeCurveTable");
    return result;
}
