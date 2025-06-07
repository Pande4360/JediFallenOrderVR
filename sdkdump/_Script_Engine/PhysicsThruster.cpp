#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PhysicsThruster.hpp"
#include "PhysicsThrusterComponent.hpp"
#include "RigidBodyBase.hpp"
_Script_Engine::PhysicsThrusterComponent*& _Script_Engine::PhysicsThruster::get_ThrusterComponent() {
    return *(_Script_Engine::PhysicsThrusterComponent**)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_Engine::PhysicsThruster::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PhysicsThruster");
    return result;
}
