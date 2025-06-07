#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "RsAIPOIBehaviorData.hpp"
_Script_Engine::AnimSequenceBase*& _Script_RsGameTechRT::RsAIPOIBehaviorData::get_OverrideDeathAnim() {
    return *(_Script_Engine::AnimSequenceBase**)((uintptr_t)this + 0xa8);
}
bool _Script_RsGameTechRT::RsAIPOIBehaviorData::get_bRandomStartTimeForLoopSection() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIPOIBehaviorData::set_bRandomStartTimeForLoopSection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsAIPOIBehaviorData::get_AnimData() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_RsGameTechRT::RsAIPOIBehaviorData::get_MontageExitSectionName() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_RsGameTechRT::RsAIPOIBehaviorData::get_ExitAnimData() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_RsGameTechRT::RsAIPOIBehaviorData::get_bUseOverrideDeathAnim() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIPOIBehaviorData::set_bUseOverrideDeathAnim(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsAIPOIBehaviorData::get_MotionParmName() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIPOIBehaviorData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIPOIBehaviorData");
    return result;
}
