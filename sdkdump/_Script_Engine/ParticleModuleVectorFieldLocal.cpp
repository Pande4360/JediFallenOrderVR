#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleVectorFieldBase.hpp"
#include "ParticleModuleVectorFieldLocal.hpp"
#include "VectorField.hpp"
void _Script_Engine::ParticleModuleVectorFieldLocal::set_bIgnoreComponentTransform(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x64 + 0);
    *(uint8_t*)((uintptr_t)this + 0x64 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::VectorField*& _Script_Engine::ParticleModuleVectorFieldLocal::get_VectorField() {
    return *(_Script_Engine::VectorField**)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleVectorFieldLocal::get_RelativeTranslation() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_Engine::ParticleModuleVectorFieldLocal::get_bIgnoreComponentTransform() {
    return (*(uint8_t*)((uintptr_t)this + 0x64 + 0)) & 1 != 0;
}
void* _Script_Engine::ParticleModuleVectorFieldLocal::get_RelativeScale3D() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_Engine::ParticleModuleVectorFieldLocal::get_Intensity() {
    return *(float*)((uintptr_t)this + 0x5c);
}
void* _Script_Engine::ParticleModuleVectorFieldLocal::get_RelativeRotation() {
    return (void*)((uintptr_t)this + 0x44);
}
float& _Script_Engine::ParticleModuleVectorFieldLocal::get_Tightness() {
    return *(float*)((uintptr_t)this + 0x60);
}
bool _Script_Engine::ParticleModuleVectorFieldLocal::get_bTileX() {
    return (*(uint8_t*)((uintptr_t)this + 0x64 + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleVectorFieldLocal::set_bTileX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x64 + 0);
    *(uint8_t*)((uintptr_t)this + 0x64 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleModuleVectorFieldLocal::get_bTileY() {
    return (*(uint8_t*)((uintptr_t)this + 0x64 + 0)) & 4 != 0;
}
void _Script_Engine::ParticleModuleVectorFieldLocal::set_bTileY(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x64 + 0);
    *(uint8_t*)((uintptr_t)this + 0x64 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::ParticleModuleVectorFieldLocal::get_bTileZ() {
    return (*(uint8_t*)((uintptr_t)this + 0x64 + 0)) & 8 != 0;
}
void _Script_Engine::ParticleModuleVectorFieldLocal::set_bTileZ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x64 + 0);
    *(uint8_t*)((uintptr_t)this + 0x64 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::ParticleModuleVectorFieldLocal::get_bUseFixDT() {
    return (*(uint8_t*)((uintptr_t)this + 0x64 + 0)) & 16 != 0;
}
void _Script_Engine::ParticleModuleVectorFieldLocal::set_bUseFixDT(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x64 + 0);
    *(uint8_t*)((uintptr_t)this + 0x64 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleVectorFieldLocal::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleVectorFieldLocal");
    return result;
}
