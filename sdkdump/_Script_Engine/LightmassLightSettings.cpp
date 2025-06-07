#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LightmassLightSettings.hpp"
float& _Script_Engine::LightmassLightSettings::get_IndirectLightingSaturation() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::LightmassLightSettings::get_ShadowExponent() {
    return *(float*)((uintptr_t)this + 0x4);
}
void _Script_Engine::LightmassLightSettings::set_bUseAreaShadowsForStationaryLight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::LightmassLightSettings::get_bUseAreaShadowsForStationaryLight() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
float& _Script_Engine::LightmassLightSettings::get_VLMLightingScale() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Engine::LightmassLightSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LightmassLightSettings");
    return result;
}
