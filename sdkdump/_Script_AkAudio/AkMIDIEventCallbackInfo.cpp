#include "..\FUObjectArray.hpp"
#include "AkEventCallbackInfo.hpp"
#include "AkMIDIEventCallbackInfo.hpp"
#include "AkMidiCc.hpp"
#include "AkMidiChannelAftertouch.hpp"
#include "AkMidiGeneric.hpp"
#include "AkMidiNoteAftertouch.hpp"
#include "AkMidiNoteOnOff.hpp"
#include "AkMidiPitchBend.hpp"
#include "AkMidiProgramChange.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_AkAudio::AkMIDIEventCallbackInfo::GetNoteOff(_Script_AkAudio::AkMidiNoteOnOff& AsNoteOff) {
    return;
}
bool _Script_AkAudio::AkMIDIEventCallbackInfo::GetNoteOn(_Script_AkAudio::AkMidiNoteOnOff& AsNoteOn) {
    return;
}
_Script_CoreUObject::Class* _Script_AkAudio::AkMIDIEventCallbackInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkMIDIEventCallbackInfo");
    return result;
}
void* _Script_AkAudio::AkMIDIEventCallbackInfo::GetType() {
    return;
}
bool _Script_AkAudio::AkMIDIEventCallbackInfo::GetProgramChange(_Script_AkAudio::AkMidiProgramChange& AsProgramChange) {
    return;
}
bool _Script_AkAudio::AkMIDIEventCallbackInfo::GetNoteAftertouch(_Script_AkAudio::AkMidiNoteAftertouch& AsNoteAftertouch) {
    return;
}
bool _Script_AkAudio::AkMIDIEventCallbackInfo::GetPitchBend(_Script_AkAudio::AkMidiPitchBend& AsPitchBend) {
    return;
}
bool _Script_AkAudio::AkMIDIEventCallbackInfo::GetGeneric(_Script_AkAudio::AkMidiGeneric& AsGeneric) {
    return;
}
bool _Script_AkAudio::AkMIDIEventCallbackInfo::GetChannelAftertouch(_Script_AkAudio::AkMidiChannelAftertouch& AsChannelAftertouch) {
    return;
}
bool _Script_AkAudio::AkMIDIEventCallbackInfo::GetCc(_Script_AkAudio::AkMidiCc& AsCc) {
    return;
}
void* _Script_AkAudio::AkMIDIEventCallbackInfo::GetChannel() {
    return;
}
