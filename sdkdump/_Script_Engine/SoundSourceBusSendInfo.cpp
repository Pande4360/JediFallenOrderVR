#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundSourceBus.hpp"
#include "SoundSourceBusSendInfo.hpp"
float& _Script_Engine::SoundSourceBusSendInfo::get_SendLevel() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_Engine::SoundSourceBus*& _Script_Engine::SoundSourceBusSendInfo::get_SoundSourceBus() {
    return *(_Script_Engine::SoundSourceBus**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::SoundSourceBusSendInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundSourceBusSendInfo");
    return result;
}
