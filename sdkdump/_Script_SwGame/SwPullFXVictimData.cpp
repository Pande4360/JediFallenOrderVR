#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwPullFXVictimData.hpp"
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwPullFXVictimData::get_ForcePullEnterStartEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x0);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwPullFXVictimData::get_ForcePullFoleyEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x18);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwPullFXVictimData::get_ForcePullEnterStopEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x8);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwPullFXVictimData::get_ForcePullVOEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SwGame::SwPullFXVictimData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwPullFXVictimData");
    return result;
}
