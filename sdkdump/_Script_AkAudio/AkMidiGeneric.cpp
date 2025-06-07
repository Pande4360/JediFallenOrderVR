#include "..\FUObjectArray.hpp"
#include "AkMidiEventBase.hpp"
#include "AkMidiGeneric.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AkAudio::AkMidiGeneric::get_Param1() {
    return (void*)((uintptr_t)this + 0x2);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkMidiGeneric::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.AkMidiGeneric");
    return result;
}
void* _Script_AkAudio::AkMidiGeneric::get_Param2() {
    return (void*)((uintptr_t)this + 0x3);
}
