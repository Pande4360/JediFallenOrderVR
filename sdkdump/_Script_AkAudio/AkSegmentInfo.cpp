#include "..\FUObjectArray.hpp"
#include "AkSegmentInfo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_AkAudio::AkSegmentInfo::get_CurrentPosition() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
float& _Script_AkAudio::AkSegmentInfo::get_BeatDuration() {
    return *(float*)((uintptr_t)this + 0x14);
}
int32_t& _Script_AkAudio::AkSegmentInfo::get_PreEntryDuration() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_AkAudio::AkSegmentInfo::get_PostExitDuration() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
int32_t& _Script_AkAudio::AkSegmentInfo::get_ActiveDuration() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_AkAudio::AkSegmentInfo::get_RemainingLookAheadTime() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
float& _Script_AkAudio::AkSegmentInfo::get_GridDuration() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_AkAudio::AkSegmentInfo::get_BarDuration() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_AkAudio::AkSegmentInfo::get_GridOffset() {
    return *(float*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkSegmentInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.AkSegmentInfo");
    return result;
}
