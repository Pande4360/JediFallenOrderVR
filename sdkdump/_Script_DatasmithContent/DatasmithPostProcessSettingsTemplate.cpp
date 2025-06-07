#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithPostProcessSettingsTemplate.hpp"
bool _Script_DatasmithContent::DatasmithPostProcessSettingsTemplate::get_bOverride_VignetteIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 4 != 0;
}
bool _Script_DatasmithContent::DatasmithPostProcessSettingsTemplate::get_bOverride_WhiteTemp() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_DatasmithContent::DatasmithPostProcessSettingsTemplate::set_bOverride_WhiteTemp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_DatasmithContent::DatasmithPostProcessSettingsTemplate::get_bOverride_ColorSaturation() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
float& _Script_DatasmithContent::DatasmithPostProcessSettingsTemplate::get_CameraISO() {
    return *(float*)((uintptr_t)this + 0x34);
}
void _Script_DatasmithContent::DatasmithPostProcessSettingsTemplate::set_bOverride_ColorSaturation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_DatasmithContent::DatasmithPostProcessSettingsTemplate::set_bOverride_VignetteIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_DatasmithContent::DatasmithPostProcessSettingsTemplate::get_bOverride_FilmWhitePoint() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 8 != 0;
}
void _Script_DatasmithContent::DatasmithPostProcessSettingsTemplate::set_bOverride_FilmWhitePoint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_DatasmithContent::DatasmithPostProcessSettingsTemplate::get_bOverride_AutoExposureMethod() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 16 != 0;
}
void _Script_DatasmithContent::DatasmithPostProcessSettingsTemplate::set_bOverride_AutoExposureMethod(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_DatasmithContent::DatasmithPostProcessSettingsTemplate::get_bOverride_CameraISO() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 32 != 0;
}
void _Script_DatasmithContent::DatasmithPostProcessSettingsTemplate::set_bOverride_CameraISO(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
float& _Script_DatasmithContent::DatasmithPostProcessSettingsTemplate::get_WhiteTemp() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_DatasmithContent::DatasmithPostProcessSettingsTemplate::get_VignetteIntensity() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_DatasmithContent::DatasmithPostProcessSettingsTemplate::get_FilmWhitePoint() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_DatasmithContent::DatasmithPostProcessSettingsTemplate::get_ColorSaturation() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_DatasmithContent::DatasmithPostProcessSettingsTemplate::get_AutoExposureMethod() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithPostProcessSettingsTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/DatasmithContent.DatasmithPostProcessSettingsTemplate");
    return result;
}
