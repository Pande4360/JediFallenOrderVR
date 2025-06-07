#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\InterpTrackVectorBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct InterpTrackAkAudioEvent : public _Script_Engine::InterpTrackVectorBase {
    private: char pad_90[0x18]; public:
    void* get_Events();
    bool get_bContinueEventOnMatineeEnd();
    void set_bContinueEventOnMatineeEnd(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
