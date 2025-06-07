#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleSizeBase.hpp"
#include "ParticleModuleSizeScaleBySpeed.hpp"
void* _Script_Engine::ParticleModuleSizeScaleBySpeed::get_SpeedScale() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleSizeScaleBySpeed::get_MaxScale() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleSizeScaleBySpeed::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleSizeScaleBySpeed");
    return result;
}
