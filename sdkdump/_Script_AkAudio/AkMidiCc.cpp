#include "..\FUObjectArray.hpp"
#include "AkMidiCc.hpp"
#include "AkMidiEventBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AkAudio::AkMidiCc::get_Cc() {
    return (void*)((uintptr_t)this + 0x2);
}
void* _Script_AkAudio::AkMidiCc::get_Value() {
    return (void*)((uintptr_t)this + 0x3);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkMidiCc::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.AkMidiCc");
    return result;
}
