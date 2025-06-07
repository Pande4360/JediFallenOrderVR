#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "RAPLineStartedEventData.hpp"
void* _Script_RsGameTechRT::RAPLineStartedEventData::get_Speaker() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RAPLineStartedEventData::get_Actor() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_Engine::AnimationAsset*& _Script_RsGameTechRT::RAPLineStartedEventData::get_FacialAnim() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x90);
}
void* _Script_RsGameTechRT::RAPLineStartedEventData::get_LineContent() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_RsGameTechRT::RAPLineStartedEventData::get_UID() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
void* _Script_RsGameTechRT::RAPLineStartedEventData::get_Gesture() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RAPLineStartedEventData::get_LookatTarget() {
    return (void*)((uintptr_t)this + 0x88);
}
bool _Script_RsGameTechRT::RAPLineStartedEventData::get_bIsRadio() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RAPLineStartedEventData::set_bIsRadio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RAPLineStartedEventData::get_bNotSpatialized() {
    return (*(uint8_t*)((uintptr_t)this + 0x99 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RAPLineStartedEventData::set_bNotSpatialized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x99 + 0);
    *(uint8_t*)((uintptr_t)this + 0x99 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_RsGameTechRT::RAPLineStartedEventData::get_SubtitleAttenuationRange() {
    return *(int32_t*)((uintptr_t)this + 0x9c);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RAPLineStartedEventData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RAPLineStartedEventData");
    return result;
}
