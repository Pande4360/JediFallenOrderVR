#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialProxySettings.hpp"
float& _Script_Engine::MaterialProxySettings::get_OpacityConstant() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_Engine::MaterialProxySettings::get_MetallicConstant() {
    return *(float*)((uintptr_t)this + 0x14);
}
void _Script_Engine::MaterialProxySettings::set_bMetallicMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11 + 0);
    *(uint8_t*)((uintptr_t)this + 0x11 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::MaterialProxySettings::get_RoughnessTextureSize() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::MaterialProxySettings::get_TextureSize() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::MaterialProxySettings::get_TextureSizingType() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::MaterialProxySettings::get_NormalTextureSize() {
    return (void*)((uintptr_t)this + 0x48);
}
float& _Script_Engine::MaterialProxySettings::get_GutterSpace() {
    return *(float*)((uintptr_t)this + 0xc);
}
bool _Script_Engine::MaterialProxySettings::get_bNormalMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialProxySettings::set_bNormalMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MaterialProxySettings::get_bMetallicMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x11 + 0)) & 1 != 0;
}
void* _Script_Engine::MaterialProxySettings::get_BlendMode() {
    return (void*)((uintptr_t)this + 0x89);
}
bool _Script_Engine::MaterialProxySettings::get_bRoughnessMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialProxySettings::set_bRoughnessMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::MaterialProxySettings::get_RoughnessConstant() {
    return *(float*)((uintptr_t)this + 0x1c);
}
bool _Script_Engine::MaterialProxySettings::get_bSpecularMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialProxySettings::set_bSpecularMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::MaterialProxySettings::get_SpecularConstant() {
    return *(float*)((uintptr_t)this + 0x24);
}
bool _Script_Engine::MaterialProxySettings::get_bEmissiveMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
bool _Script_Engine::MaterialProxySettings::get_bOpacityMaskMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialProxySettings::set_bEmissiveMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MaterialProxySettings::get_bOpacityMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialProxySettings::set_bOpacityMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::MaterialProxySettings::set_bOpacityMaskMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::MaterialProxySettings::get_DiffuseTextureSize() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_Engine::MaterialProxySettings::get_OpacityMaskConstant() {
    return *(float*)((uintptr_t)this + 0x34);
}
bool _Script_Engine::MaterialProxySettings::get_bAmbientOcclusionMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialProxySettings::set_bAmbientOcclusionMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::MaterialProxySettings::get_AmbientOcclusionConstant() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void* _Script_Engine::MaterialProxySettings::get_MetallicTextureSize() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::MaterialProxySettings::get_SpecularTextureSize() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::MaterialProxySettings::get_EmissiveTextureSize() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::MaterialProxySettings::get_OpacityTextureSize() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::MaterialProxySettings::get_OpacityMaskTextureSize() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::MaterialProxySettings::get_AmbientOcclusionTextureSize() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Engine::MaterialProxySettings::get_MaterialMergeType() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialProxySettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MaterialProxySettings");
    return result;
}
