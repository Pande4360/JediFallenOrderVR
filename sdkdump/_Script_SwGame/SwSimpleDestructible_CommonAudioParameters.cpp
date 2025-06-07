#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwSimpleDestructible_CommonAudioParameters.hpp"
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwSimpleDestructible_CommonAudioParameters::get_ProjectileHitSoundIfNotDestructed() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwSimpleDestructible_CommonAudioParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwSimpleDestructible_CommonAudioParameters");
    return result;
}
