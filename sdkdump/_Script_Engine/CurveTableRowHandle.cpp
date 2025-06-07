#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveTable.hpp"
#include "CurveTableRowHandle.hpp"
_Script_Engine::CurveTable*& _Script_Engine::CurveTableRowHandle::get_CurveTable() {
    return *(_Script_Engine::CurveTable**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::CurveTableRowHandle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CurveTableRowHandle");
    return result;
}
void* _Script_Engine::CurveTableRowHandle::get_RowName() {
    return (void*)((uintptr_t)this + 0x8);
}
