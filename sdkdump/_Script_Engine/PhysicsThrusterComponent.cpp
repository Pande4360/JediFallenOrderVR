#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PhysicsThrusterComponent.hpp"
#include "SceneComponent.hpp"
float& _Script_Engine::PhysicsThrusterComponent::get_ThrustStrength() {
    return *(float*)((uintptr_t)this + 0x2c8);
}
_Script_CoreUObject::Class* _Script_Engine::PhysicsThrusterComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PhysicsThrusterComponent");
    return result;
}
