#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LightmassPrimitiveSettings.hpp"
bool _Script_Engine::LightmassPrimitiveSettings::get_bUseTwoSidedLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::LightmassPrimitiveSettings::set_bUseTwoSidedLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::LightmassPrimitiveSettings::get_bShadowIndirectOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
void _Script_Engine::LightmassPrimitiveSettings::set_bUseVertexNormalForHemisphereGather(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::LightmassPrimitiveSettings::set_bShadowIndirectOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::LightmassPrimitiveSettings::get_bUseEmissiveForStaticLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 4 != 0;
}
void _Script_Engine::LightmassPrimitiveSettings::set_bUseEmissiveForStaticLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::LightmassPrimitiveSettings::get_bUseVertexNormalForHemisphereGather() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 8 != 0;
}
float& _Script_Engine::LightmassPrimitiveSettings::get_EmissiveLightFalloffExponent() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::LightmassPrimitiveSettings::get_EmissiveLightExplicitInfluenceRadius() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::LightmassPrimitiveSettings::get_EmissiveBoost() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::LightmassPrimitiveSettings::get_DiffuseBoost() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::LightmassPrimitiveSettings::get_FullyOccludedSamplesFraction() {
    return *(float*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_Engine::LightmassPrimitiveSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LightmassPrimitiveSettings");
    return result;
}
