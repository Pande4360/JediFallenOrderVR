#include "..\FUObjectArray.hpp"
#include "AkMidiEventBase.hpp"
#include "AkMidiNoteAftertouch.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AkAudio::AkMidiNoteAftertouch::get_Note() {
    return (void*)((uintptr_t)this + 0x2);
}
void* _Script_AkAudio::AkMidiNoteAftertouch::get_Value() {
    return (void*)((uintptr_t)this + 0x3);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkMidiNoteAftertouch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.AkMidiNoteAftertouch");
    return result;
}
