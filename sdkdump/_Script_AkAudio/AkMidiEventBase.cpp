#include "..\FUObjectArray.hpp"
#include "AkMidiEventBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AkAudio::AkMidiEventBase::get_Type() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AkAudio::AkMidiEventBase::get_Chan() {
    return (void*)((uintptr_t)this + 0x1);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkMidiEventBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.AkMidiEventBase");
    return result;
}
