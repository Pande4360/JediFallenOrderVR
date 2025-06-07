#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PhysicsConstraintProfileHandle.hpp"
void* _Script_Engine::PhysicsConstraintProfileHandle::get_ProfileProperties() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::PhysicsConstraintProfileHandle::get_ProfileName() {
    return (void*)((uintptr_t)this + 0x108);
}
_Script_CoreUObject::Class* _Script_Engine::PhysicsConstraintProfileHandle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PhysicsConstraintProfileHandle");
    return result;
}
