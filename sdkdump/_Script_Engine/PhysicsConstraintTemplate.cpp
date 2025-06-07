#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PhysicsConstraintTemplate.hpp"
void* _Script_Engine::PhysicsConstraintTemplate::get_DefaultInstance() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::PhysicsConstraintTemplate::get_ProfileHandles() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Script_Engine::PhysicsConstraintTemplate::get_DefaultProfile() {
    return (void*)((uintptr_t)this + 0x1f8);
}
_Script_CoreUObject::Class* _Script_Engine::PhysicsConstraintTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PhysicsConstraintTemplate");
    return result;
}
