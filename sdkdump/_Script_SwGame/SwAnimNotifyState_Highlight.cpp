#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "SwAnimNotifyState_Highlight.hpp"
void* _Script_SwGame::SwAnimNotifyState_Highlight::get_HighlightType() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_SwGame::SwAnimNotifyState_Highlight::get_RequiredTagQuery() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_Engine::CurveFloat*& _Script_SwGame::SwAnimNotifyState_Highlight::get_BlendCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x38);
}
bool _Script_SwGame::SwAnimNotifyState_Highlight::get_bShouldPlayAudio() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_SwGame::SwAnimNotifyState_Highlight::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAnimNotifyState_Highlight");
    return result;
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwAnimNotifyState_Highlight::get_AudioEnd() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x50);
}
void _Script_SwGame::SwAnimNotifyState_Highlight::set_bShouldPlayAudio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwAnimNotifyState_Highlight::get_AudioStart() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x48);
}
