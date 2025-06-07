#include "..\FUObjectArray.hpp"
#include "AkMidiEventBase.hpp"
#include "AkMidiNoteOnOff.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AkAudio::AkMidiNoteOnOff::get_Note() {
    return (void*)((uintptr_t)this + 0x2);
}
void* _Script_AkAudio::AkMidiNoteOnOff::get_Velocity() {
    return (void*)((uintptr_t)this + 0x3);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkMidiNoteOnOff::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.AkMidiNoteOnOff");
    return result;
}
