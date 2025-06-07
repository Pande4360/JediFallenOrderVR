#include "..\FUObjectArray.hpp"
#include "AkMidiChannelAftertouch.hpp"
#include "AkMidiEventBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AkAudio::AkMidiChannelAftertouch::get_Value() {
    return (void*)((uintptr_t)this + 0x2);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkMidiChannelAftertouch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.AkMidiChannelAftertouch");
    return result;
}
