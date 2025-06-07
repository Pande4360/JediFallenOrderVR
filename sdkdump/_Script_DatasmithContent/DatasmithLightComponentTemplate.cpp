#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithLightComponentTemplate.hpp"
#include "DatasmithObjectTemplate.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\TextureLightProfile.hpp"
void _Script_DatasmithContent::DatasmithLightComponentTemplate::set_bUseTemperature(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_DatasmithContent::DatasmithLightComponentTemplate::get_bVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
bool _Script_DatasmithContent::DatasmithLightComponentTemplate::get_bUseIESBrightness() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 4 != 0;
}
_Script_Engine::TextureLightProfile*& _Script_DatasmithContent::DatasmithLightComponentTemplate::get_IESTexture() {
    return *(_Script_Engine::TextureLightProfile**)((uintptr_t)this + 0x58);
}
void _Script_DatasmithContent::DatasmithLightComponentTemplate::set_bVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_DatasmithContent::DatasmithLightComponentTemplate::get_CastShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 1 != 0;
}
void _Script_DatasmithContent::DatasmithLightComponentTemplate::set_bUseIESBrightness(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_DatasmithContent::DatasmithLightComponentTemplate::set_CastShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_DatasmithContent::DatasmithLightComponentTemplate::get_bUseTemperature() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 2 != 0;
}
float& _Script_DatasmithContent::DatasmithLightComponentTemplate::get_Intensity() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_DatasmithContent::DatasmithLightComponentTemplate::get_Temperature() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_DatasmithContent::DatasmithLightComponentTemplate::get_IESBrightnessScale() {
    return *(float*)((uintptr_t)this + 0x38);
}
void* _Script_DatasmithContent::DatasmithLightComponentTemplate::get_LightColor() {
    return (void*)((uintptr_t)this + 0x3c);
}
_Script_Engine::MaterialInterface*& _Script_DatasmithContent::DatasmithLightComponentTemplate::get_LightFunctionMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithLightComponentTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithLightComponentTemplate");
    return result;
}
