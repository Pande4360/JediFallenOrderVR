#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StreamedAudioPlatformData.hpp"
_Script_CoreUObject::Class* _Script_Engine::StreamedAudioPlatformData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StreamedAudioPlatformData");
    return result;
}
