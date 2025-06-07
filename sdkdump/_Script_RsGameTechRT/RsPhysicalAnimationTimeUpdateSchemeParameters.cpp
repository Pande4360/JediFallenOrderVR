#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsPhysicalAnimationTimeUpdateSchemeParameters.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPhysicalAnimationTimeUpdateSchemeParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsPhysicalAnimationTimeUpdateSchemeParameters");
    return result;
}
bool _Script_RsGameTechRT::RsPhysicalAnimationTimeUpdateSchemeParameters::get_UseFixedFrameTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationTimeUpdateSchemeParameters::set_UseFixedFrameTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationTimeUpdateSchemeParameters::get_UsePrediction() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationTimeUpdateSchemeParameters::set_UsePrediction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationTimeUpdateSchemeParameters::get_OverrideFixedFrameTimeValue() {
    return *(float*)((uintptr_t)this + 0x4);
}
