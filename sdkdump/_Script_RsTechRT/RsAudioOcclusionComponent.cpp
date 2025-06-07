#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "RsAudioOcclusionComponent.hpp"
float& _Script_RsTechRT::RsAudioOcclusionComponent::get_ObstructionPerMeterOverride() {
    return *(float*)((uintptr_t)this + 0x170);
}
bool _Script_RsTechRT::RsAudioOcclusionComponent::get_IsObstruction() {
    return (*(uint8_t*)((uintptr_t)this + 0x174 + 0)) & 1 != 0;
}
void _Script_RsTechRT::RsAudioOcclusionComponent::set_IsObstruction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x174 + 0);
    *(uint8_t*)((uintptr_t)this + 0x174 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsTechRT::RsAudioOcclusionComponent::get_IsPerMeter() {
    return (*(uint8_t*)((uintptr_t)this + 0x175 + 0)) & 1 != 0;
}
void _Script_RsTechRT::RsAudioOcclusionComponent::set_IsPerMeter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x175 + 0);
    *(uint8_t*)((uintptr_t)this + 0x175 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsAudioOcclusionComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsAudioOcclusionComponent");
    return result;
}
