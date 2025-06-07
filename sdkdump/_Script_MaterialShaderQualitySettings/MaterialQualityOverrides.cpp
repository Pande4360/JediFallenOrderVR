#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialQualityOverrides.hpp"
bool _Script_MaterialShaderQualitySettings::MaterialQualityOverrides::get_bDiscardQualityDuringCook() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_MaterialShaderQualitySettings::MaterialQualityOverrides::set_bDiscardQualityDuringCook(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_MaterialShaderQualitySettings::MaterialQualityOverrides::set_bForceNonMetal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MaterialShaderQualitySettings::MaterialQualityOverrides::get_bEnableOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
bool _Script_MaterialShaderQualitySettings::MaterialQualityOverrides::get_bForceNonMetal() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 1 != 0;
}
void _Script_MaterialShaderQualitySettings::MaterialQualityOverrides::set_bEnableOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MaterialShaderQualitySettings::MaterialQualityOverrides::get_bForceFullyRough() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
void _Script_MaterialShaderQualitySettings::MaterialQualityOverrides::set_bForceFullyRough(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MaterialShaderQualitySettings::MaterialQualityOverrides::get_bForceDisableLMDirectionality() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
void _Script_MaterialShaderQualitySettings::MaterialQualityOverrides::set_bForceDisableLMDirectionality(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MaterialShaderQualitySettings::MaterialQualityOverrides::get_bForceLQReflections() {
    return (*(uint8_t*)((uintptr_t)this + 0x5 + 0)) & 1 != 0;
}
void _Script_MaterialShaderQualitySettings::MaterialQualityOverrides::set_bForceLQReflections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MaterialShaderQualitySettings::MaterialQualityOverrides::get_bDisableMaterialNormalCalculation() {
    return (*(uint8_t*)((uintptr_t)this + 0x6 + 0)) & 1 != 0;
}
void _Script_MaterialShaderQualitySettings::MaterialQualityOverrides::set_bDisableMaterialNormalCalculation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MaterialShaderQualitySettings::MaterialQualityOverrides::get_MobileCSMQuality() {
    return (void*)((uintptr_t)this + 0x7);
}
_Script_CoreUObject::Class* _Script_MaterialShaderQualitySettings::MaterialQualityOverrides::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MaterialShaderQualitySettings.MaterialQualityOverrides");
    return result;
}
