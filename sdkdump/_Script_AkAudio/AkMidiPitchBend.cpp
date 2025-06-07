#include "..\FUObjectArray.hpp"
#include "AkMidiEventBase.hpp"
#include "AkMidiPitchBend.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AkAudio::AkMidiPitchBend::get_ValueLsb() {
    return (void*)((uintptr_t)this + 0x2);
}
void* _Script_AkAudio::AkMidiPitchBend::get_ValueMsb() {
    return (void*)((uintptr_t)this + 0x3);
}
int32_t& _Script_AkAudio::AkMidiPitchBend::get_FullValue() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkMidiPitchBend::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.AkMidiPitchBend");
    return result;
}
