#include "..\FUObjectArray.hpp"
#include "PlatformRuntimeAudioCompressionOverrides.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_AudioPlatformConfiguration::PlatformRuntimeAudioCompressionOverrides::get_bOverrideCompressionTimes() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
float& _Script_AudioPlatformConfiguration::PlatformRuntimeAudioCompressionOverrides::get_DurationThreshold() {
    return *(float*)((uintptr_t)this + 0x4);
}
void _Script_AudioPlatformConfiguration::PlatformRuntimeAudioCompressionOverrides::set_bOverrideCompressionTimes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AudioPlatformConfiguration::PlatformRuntimeAudioCompressionOverrides::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides");
    return result;
}
int32_t& _Script_AudioPlatformConfiguration::PlatformRuntimeAudioCompressionOverrides::get_MaxNumRandomBranches() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_AudioPlatformConfiguration::PlatformRuntimeAudioCompressionOverrides::get_SoundCueQualityIndex() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
