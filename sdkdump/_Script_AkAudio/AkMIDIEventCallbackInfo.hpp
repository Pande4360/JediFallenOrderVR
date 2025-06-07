#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AkEventCallbackInfo.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
struct AkMidiProgramChange;
}
namespace _Script_AkAudio {
struct AkMidiPitchBend;
}
namespace _Script_AkAudio {
struct AkMidiNoteOnOff;
}
namespace _Script_AkAudio {
struct AkMidiNoteAftertouch;
}
namespace _Script_AkAudio {
struct AkMidiGeneric;
}
namespace _Script_AkAudio {
struct AkMidiChannelAftertouch;
}
namespace _Script_AkAudio {
struct AkMidiCc;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkMIDIEventCallbackInfo : public AkEventCallbackInfo {
    private: char pad_38[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
    void* GetType();
    bool GetProgramChange(_Script_AkAudio::AkMidiProgramChange& AsProgramChange);
    bool GetPitchBend(_Script_AkAudio::AkMidiPitchBend& AsPitchBend);
    bool GetNoteOn(_Script_AkAudio::AkMidiNoteOnOff& AsNoteOn);
    bool GetNoteOff(_Script_AkAudio::AkMidiNoteOnOff& AsNoteOff);
    bool GetNoteAftertouch(_Script_AkAudio::AkMidiNoteAftertouch& AsNoteAftertouch);
    bool GetGeneric(_Script_AkAudio::AkMidiGeneric& AsGeneric);
    bool GetChannelAftertouch(_Script_AkAudio::AkMidiChannelAftertouch& AsChannelAftertouch);
    void* GetChannel();
    bool GetCc(_Script_AkAudio::AkMidiCc& AsCc);
}; // Size: 0x40
#pragma pack(pop)
}
