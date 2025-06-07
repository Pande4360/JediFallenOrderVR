#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleParameterBase.hpp"
#include "ParticleModuleParameterDynamic.hpp"
void* _Script_Engine::ParticleModuleParameterDynamic::get_DynamicParams() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_Engine::ParticleModuleParameterDynamic::set_bUsesVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::ParticleModuleParameterDynamic::get_UpdateFlags() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
bool _Script_Engine::ParticleModuleParameterDynamic::get_bUsesVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleParameterDynamic::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleParameterDynamic");
    return result;
}
