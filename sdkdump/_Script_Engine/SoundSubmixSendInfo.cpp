#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundSubmix.hpp"
#include "SoundSubmixSendInfo.hpp"
float& _Script_Engine::SoundSubmixSendInfo::get_SendLevel() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_Engine::SoundSubmix*& _Script_Engine::SoundSubmixSendInfo::get_SoundSubmix() {
    return *(_Script_Engine::SoundSubmix**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::SoundSubmixSendInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundSubmixSendInfo");
    return result;
}
