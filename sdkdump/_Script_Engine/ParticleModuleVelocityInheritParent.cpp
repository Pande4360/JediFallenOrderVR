#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleVelocityBase.hpp"
#include "ParticleModuleVelocityInheritParent.hpp"
void* _Script_Engine::ParticleModuleVelocityInheritParent::get_Scale() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleVelocityInheritParent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleVelocityInheritParent");
    return result;
}
