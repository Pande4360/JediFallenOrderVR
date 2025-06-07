#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LightmassMaterialInterfaceSettings.hpp"
bool _Script_Engine::LightmassMaterialInterfaceSettings::get_bOverrideCastShadowAsMasked() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
bool _Script_Engine::LightmassMaterialInterfaceSettings::get_bCastShadowAsMasked() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::LightmassMaterialInterfaceSettings::set_bCastShadowAsMasked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::LightmassMaterialInterfaceSettings::get_bCastShadowAsTranslucent() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
void _Script_Engine::LightmassMaterialInterfaceSettings::set_bCastShadowAsTranslucent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::LightmassMaterialInterfaceSettings::get_EmissiveBoost() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::LightmassMaterialInterfaceSettings::get_DiffuseBoost() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::LightmassMaterialInterfaceSettings::get_ExportResolutionScale() {
    return *(float*)((uintptr_t)this + 0xc);
}
void _Script_Engine::LightmassMaterialInterfaceSettings::set_bOverrideDiffuseBoost(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::LightmassMaterialInterfaceSettings::set_bOverrideCastShadowAsMasked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::LightmassMaterialInterfaceSettings::get_bOverrideCastShadowAsTranslucent() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 2 != 0;
}
void _Script_Engine::LightmassMaterialInterfaceSettings::set_bOverrideCastShadowAsTranslucent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::LightmassMaterialInterfaceSettings::get_bOverrideEmissiveBoost() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 4 != 0;
}
void _Script_Engine::LightmassMaterialInterfaceSettings::set_bOverrideEmissiveBoost(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::LightmassMaterialInterfaceSettings::get_bOverrideDiffuseBoost() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 8 != 0;
}
bool _Script_Engine::LightmassMaterialInterfaceSettings::get_bOverrideExportResolutionScale() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 16 != 0;
}
void _Script_Engine::LightmassMaterialInterfaceSettings::set_bOverrideExportResolutionScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::LightmassMaterialInterfaceSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LightmassMaterialInterfaceSettings");
    return result;
}
