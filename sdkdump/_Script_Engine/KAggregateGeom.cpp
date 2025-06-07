#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "KAggregateGeom.hpp"
void* _Script_Engine::KAggregateGeom::get_SphereElems() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::KAggregateGeom::get_SphylElems() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::KAggregateGeom::get_BoxElems() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::KAggregateGeom::get_ConvexElems() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::KAggregateGeom::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.KAggregateGeom");
    return result;
}
void* _Script_Engine::KAggregateGeom::get_TaperedCapsuleElems() {
    return (void*)((uintptr_t)this + 0x40);
}
