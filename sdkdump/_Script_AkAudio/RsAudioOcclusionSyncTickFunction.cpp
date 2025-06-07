#include "..\FUObjectArray.hpp"
#include "RsAudioOcclusionSyncTickFunction.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TickFunction.hpp"
_Script_CoreUObject::Class* _Script_AkAudio::RsAudioOcclusionSyncTickFunction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.RsAudioOcclusionSyncTickFunction");
    return result;
}
