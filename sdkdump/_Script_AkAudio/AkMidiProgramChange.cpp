#include "..\FUObjectArray.hpp"
#include "AkMidiEventBase.hpp"
#include "AkMidiProgramChange.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AkAudio::AkMidiProgramChange::get_ProgramNum() {
    return (void*)((uintptr_t)this + 0x2);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkMidiProgramChange::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.AkMidiProgramChange");
    return result;
}
