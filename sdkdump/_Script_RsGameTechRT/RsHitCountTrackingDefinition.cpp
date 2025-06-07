#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsHitCountTrackingDefinition.hpp"
bool _Script_RsGameTechRT::RsHitCountTrackingDefinition::get_bTrackHitsWhenDead() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 1 != 0;
}
int32_t& _Script_RsGameTechRT::RsHitCountTrackingDefinition::get_HitCountThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsHitCountTrackingDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsHitCountTrackingDefinition");
    return result;
}
float& _Script_RsGameTechRT::RsHitCountTrackingDefinition::get_HitCountResetTime() {
    return *(float*)((uintptr_t)this + 0x34);
}
bool _Script_RsGameTechRT::RsHitCountTrackingDefinition::get_ResetAfterThresholdReached() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsHitCountTrackingDefinition::set_ResetAfterThresholdReached(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsHitCountTrackingDefinition::set_bTrackHitsWhenDead(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsHitCountTrackingDefinition::get_IgnoredDamageTypes() {
    return (void*)((uintptr_t)this + 0x40);
}
