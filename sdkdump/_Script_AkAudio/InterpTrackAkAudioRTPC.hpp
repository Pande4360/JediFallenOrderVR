#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\InterpTrackFloatBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct InterpTrackAkAudioRTPC : public _Script_Engine::InterpTrackFloatBase {
    private: char pad_90[0x18]; public:
    void* get_Param();
    bool get_bPlayOnReverse();
    void set_bPlayOnReverse(bool value);
    bool get_bContinueRTPCOnMatineeEnd();
    void set_bContinueRTPCOnMatineeEnd(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
