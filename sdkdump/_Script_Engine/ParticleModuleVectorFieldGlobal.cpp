#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleVectorFieldBase.hpp"
#include "ParticleModuleVectorFieldGlobal.hpp"
bool _Script_Engine::ParticleModuleVectorFieldGlobal::get_bOverrideGlobalVectorFieldTightness() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
float& _Script_Engine::ParticleModuleVectorFieldGlobal::get_GlobalVectorFieldScale() {
    return *(float*)((uintptr_t)this + 0x34);
}
void _Script_Engine::ParticleModuleVectorFieldGlobal::set_bOverrideGlobalVectorFieldTightness(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::ParticleModuleVectorFieldGlobal::get_GlobalVectorFieldTightness() {
    return *(float*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleVectorFieldGlobal::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleVectorFieldGlobal");
    return result;
}
