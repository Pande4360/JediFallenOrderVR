#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GeomSelection.hpp"
int32_t& _Script_Engine::GeomSelection::get_Type() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::GeomSelection::get_Index() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_Engine::GeomSelection::get_SelectionIndex() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::GeomSelection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.GeomSelection");
    return result;
}
