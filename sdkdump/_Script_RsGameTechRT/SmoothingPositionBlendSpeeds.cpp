#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SmoothingPositionBlendSpeeds.hpp"
float& _Script_RsGameTechRT::SmoothingPositionBlendSpeeds::get_Speed() {
    return *(float*)((uintptr_t)this + 0x0);
}
bool _Script_RsGameTechRT::SmoothingPositionBlendSpeeds::get_bScaleByDistanceToTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::SmoothingPositionBlendSpeeds::set_bScaleByDistanceToTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::SmoothingPositionBlendSpeeds::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.SmoothingPositionBlendSpeeds");
    return result;
}
