#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "LightComponentBase.hpp"
#include "SceneComponent.hpp"
void* _Script_Engine::LightComponentBase::get_LightGuid() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void _Script_Engine::LightComponentBase::set_CastShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::LightComponentBase::get_bAffectsWorld() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e4 + 0)) & 1 != 0;
}
float& _Script_Engine::LightComponentBase::get_Brightness() {
    return *(float*)((uintptr_t)this + 0x2d8);
}
void _Script_Engine::LightComponentBase::set_bAffectsWorld(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::LightComponentBase::get_Intensity() {
    return *(float*)((uintptr_t)this + 0x2dc);
}
bool _Script_Engine::LightComponentBase::get_CastShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e4 + 0)) & 2 != 0;
}
void* _Script_Engine::LightComponentBase::get_LightColor() {
    return (void*)((uintptr_t)this + 0x2e0);
}
bool _Script_Engine::LightComponentBase::get_CastStaticShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e4 + 0)) & 4 != 0;
}
void _Script_Engine::LightComponentBase::set_CastStaticShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e4 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::LightComponentBase::get_CastDynamicShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e4 + 0)) & 8 != 0;
}
void _Script_Engine::LightComponentBase::set_CastDynamicShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e4 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::LightComponentBase::get_bAffectTranslucentLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e4 + 0)) & 16 != 0;
}
void _Script_Engine::LightComponentBase::set_bAffectTranslucentLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e4 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::LightComponentBase::get_bTransmission() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e4 + 0)) & 32 != 0;
}
void _Script_Engine::LightComponentBase::set_bTransmission(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e4 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::LightComponentBase::get_bCastVolumetricShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e4 + 0)) & 64 != 0;
}
void _Script_Engine::LightComponentBase::set_bCastVolumetricShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e4 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::LightComponentBase::get_bBakeDirectToVolumetricLightmap() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e4 + 0)) & 128 != 0;
}
void _Script_Engine::LightComponentBase::set_bBakeDirectToVolumetricLightmap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e4 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
float& _Script_Engine::LightComponentBase::get_MaxDynamicShadowDistance() {
    return *(float*)((uintptr_t)this + 0x2e8);
}
float& _Script_Engine::LightComponentBase::get_IndirectLightingIntensity() {
    return *(float*)((uintptr_t)this + 0x2ec);
}
float& _Script_Engine::LightComponentBase::get_VolumetricScatteringIntensity() {
    return *(float*)((uintptr_t)this + 0x2f0);
}
_Script_CoreUObject::Class* _Script_Engine::LightComponentBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LightComponentBase");
    return result;
}
void _Script_Engine::LightComponentBase::SetCastVolumetricShadow(bool bNewValue) {
    return;
}
void _Script_Engine::LightComponentBase::SetCastShadows(bool bNewValue) {
    return;
}
_Script_CoreUObject::LinearColor _Script_Engine::LightComponentBase::GetLightColor() {
    return;
}
