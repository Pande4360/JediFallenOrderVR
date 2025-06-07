#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RadialForceActor.hpp"
#include "RadialForceComponent.hpp"
#include "RigidBodyBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::RadialForceActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RadialForceActor");
    return result;
}
_Script_Engine::RadialForceComponent*& _Script_Engine::RadialForceActor::get_ForceComponent() {
    return *(_Script_Engine::RadialForceComponent**)((uintptr_t)this + 0x360);
}
void _Script_Engine::RadialForceActor::EnableForce() {
    return;
}
void _Script_Engine::RadialForceActor::ToggleForce() {
    return;
}
void _Script_Engine::RadialForceActor::FireImpulse() {
    return;
}
void _Script_Engine::RadialForceActor::DisableForce() {
    return;
}
