#include "..\FUObjectArray.hpp"
#include "AkAudioBank.hpp"
#include "AkAuxBus.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_AkAudio::AkAudioBank*& _Script_AkAudio::AkAuxBus::get_RequiredBank() {
    return *(_Script_AkAudio::AkAudioBank**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkAuxBus::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkAuxBus");
    return result;
}
