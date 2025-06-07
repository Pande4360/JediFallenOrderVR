#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwForcePullUpgradeData.hpp"
bool _Script_SwGame::SwForcePullUpgradeData::get_bShouldUseYankBubbleOnTractorBeam() {
    return (*(uint8_t*)((uintptr_t)this + 0x21 + 0)) & 1 != 0;
}
void* _Script_SwGame::SwForcePullUpgradeData::get_EffectType() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePullUpgradeData::get_ForcePullCastCharacterEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x8);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePullUpgradeData::get_ForcePullCastCharacterStopEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x10);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePullUpgradeData::get_ForcePullYankCharacterEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x18);
}
bool _Script_SwGame::SwForcePullUpgradeData::get_bShouldUseYankBubbleOnYank() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void _Script_SwGame::SwForcePullUpgradeData::set_bShouldUseYankBubbleOnYank(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::SwForcePullUpgradeData::set_bShouldUseYankBubbleOnTractorBeam(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x21 + 0);
    *(uint8_t*)((uintptr_t)this + 0x21 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwForcePullUpgradeData::get_BubbleRadius() {
    return *(float*)((uintptr_t)this + 0x24);
}
_Script_CoreUObject::Class* _Script_SwGame::SwForcePullUpgradeData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwForcePullUpgradeData");
    return result;
}
