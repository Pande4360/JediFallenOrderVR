#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleLocationBase.hpp"
#include "ParticleModulePivotOffset.hpp"
void* _Script_Engine::ParticleModulePivotOffset::get_PivotOffset() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModulePivotOffset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModulePivotOffset");
    return result;
}
