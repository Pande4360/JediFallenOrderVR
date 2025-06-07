#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIPOIInteractionData.hpp"
bool _Script_RsGameTechRT::RsAIPOIInteractionData::get_bUseCharacterTypeFilter() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIPOIInteractionData::set_bUseCharacterTypeFilter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsAIPOIInteractionData::get_CharacterType() {
    return (void*)((uintptr_t)this + 0x1);
}
void _Script_RsGameTechRT::RsAIPOIInteractionData::set_bUseCustomBehaviorTree(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x118 + 0);
    *(uint8_t*)((uintptr_t)this + 0x118 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsAIPOIInteractionData::get_BehaviorData() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_RsGameTechRT::RsAIPOIInteractionData::get_CharacterTypeFilter() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_RsGameTechRT::RsAIPOIInteractionData::get_MotionParmName() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_RsGameTechRT::RsAIPOIInteractionData::get_bUseCustomBehaviorTree() {
    return (*(uint8_t*)((uintptr_t)this + 0x118 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsAIPOIInteractionData::get_CustomBehaviorTreeAsset() {
    return (void*)((uintptr_t)this + 0x120);
}
bool _Script_RsGameTechRT::RsAIPOIInteractionData::get_bInjectCustomBehaviorTreeAsRoot() {
    return (*(uint8_t*)((uintptr_t)this + 0x138 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIPOIInteractionData::set_bInjectCustomBehaviorTreeAsRoot(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x138 + 0);
    *(uint8_t*)((uintptr_t)this + 0x138 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsAIPOIInteractionData::get_CustomBehaviorData() {
    return (void*)((uintptr_t)this + 0x140);
}
bool _Script_RsGameTechRT::RsAIPOIInteractionData::get_bHasPropagatedCharacterTypeFilter() {
    return (*(uint8_t*)((uintptr_t)this + 0x168 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIPOIInteractionData::set_bHasPropagatedCharacterTypeFilter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x168 + 0);
    *(uint8_t*)((uintptr_t)this + 0x168 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAIPOIInteractionData::get_bHasPropagatedMotionParmName() {
    return (*(uint8_t*)((uintptr_t)this + 0x169 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIPOIInteractionData::set_bHasPropagatedMotionParmName(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x169 + 0);
    *(uint8_t*)((uintptr_t)this + 0x169 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAIPOIInteractionData::get_bHasPropagatedCustomBehaviorData() {
    return (*(uint8_t*)((uintptr_t)this + 0x16a + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIPOIInteractionData::set_bHasPropagatedCustomBehaviorData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x16a + 0);
    *(uint8_t*)((uintptr_t)this + 0x16a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIPOIInteractionData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIPOIInteractionData");
    return result;
}
