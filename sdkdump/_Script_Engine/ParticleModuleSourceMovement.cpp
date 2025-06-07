#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleLocationBase.hpp"
#include "ParticleModuleSourceMovement.hpp"
void* _Script_Engine::ParticleModuleSourceMovement::get_SourceMovementScale() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleSourceMovement::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleSourceMovement");
    return result;
}
