#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "WmfMediaSettings.hpp"
_Script_CoreUObject::Class* _Script_WmfMediaFactory::WmfMediaSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/WmfMediaFactory.WmfMediaSettings");
    return result;
}
void _Script_WmfMediaFactory::WmfMediaSettings::set_NativeAudioOut(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_WmfMediaFactory::WmfMediaSettings::get_AllowNonStandardCodecs() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_WmfMediaFactory::WmfMediaSettings::set_AllowNonStandardCodecs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_WmfMediaFactory::WmfMediaSettings::get_LowLatency() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
bool _Script_WmfMediaFactory::WmfMediaSettings::get_NativeAudioOut() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a + 0)) & 1 != 0;
}
void _Script_WmfMediaFactory::WmfMediaSettings::set_LowLatency(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
