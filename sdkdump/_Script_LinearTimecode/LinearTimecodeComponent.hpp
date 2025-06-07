#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_MediaAssets {
struct MediaPlayer;
}
namespace _Script_LinearTimecode {
struct DropTimecode;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LinearTimecode {
#pragma pack(push, 1)
struct LinearTimecodeComponent : public _Script_Engine::SceneComponent {
    private: char pad_2d0[0x60]; public:
    _Script_MediaAssets::MediaPlayer*& get_MediaPlayer();
    void* get_DropTimecode();
    void* get_OnTimecodeChange();
    static _Script_CoreUObject::Class* static_class();
    void SetDropTimecodeFrameNumber(_Script_LinearTimecode::DropTimecode& Timecode, int32_t FrameNumber, _Script_LinearTimecode::DropTimecode& OutTimecode);
    void GetDropTimeCodeFrameNumber(_Script_LinearTimecode::DropTimecode& Timecode, int32_t& FrameNumber);
    int32_t GetDropFrameNumber();
}; // Size: 0x330
#pragma pack(pop)
}
