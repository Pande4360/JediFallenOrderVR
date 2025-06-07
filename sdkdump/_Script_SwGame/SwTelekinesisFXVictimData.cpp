#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwTelekinesisFXVictimData.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwTelekinesisFXVictimData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwTelekinesisFXVictimData");
    return result;
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwTelekinesisFXVictimData::get_ForceTelekinesisLoopAudio() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x0);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwTelekinesisFXVictimData::get_ForceTelekinesisLoopStopAudio() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x8);
}
