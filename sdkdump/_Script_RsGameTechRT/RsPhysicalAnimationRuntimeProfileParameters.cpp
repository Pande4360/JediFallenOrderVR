#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsPhysicalAnimationRuntimeProfileParameters.hpp"
float& _Script_RsGameTechRT::RsPhysicalAnimationRuntimeProfileParameters::get_ActivationDelayTime() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationRuntimeProfileParameters::get_FadeInTime() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationRuntimeProfileParameters::get_FadeOutTime() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPhysicalAnimationRuntimeProfileParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsPhysicalAnimationRuntimeProfileParameters");
    return result;
}
bool _Script_RsGameTechRT::RsPhysicalAnimationRuntimeProfileParameters::get_StopAnyPreviousPhysicalAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationRuntimeProfileParameters::set_StopAnyPreviousPhysicalAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
