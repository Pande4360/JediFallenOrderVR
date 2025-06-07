#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwPushFXVictimData.hpp"
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwPushFXVictimData::get_ForcePushFoley() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x8);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwPushFXVictimData::get_ForcePushSoundEffectOverride() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x0);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwPushFXVictimData::get_ForcePushVO() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x10);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwPushFXVictimData::get_ForcePushOverridenSoundEffectOverride() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x18);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwPushFXVictimData::get_ForcePushOverridenFoley() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x20);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwPushFXVictimData::get_ForcePushOverridenVO() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_SwGame::SwPushFXVictimData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwPushFXVictimData");
    return result;
}
