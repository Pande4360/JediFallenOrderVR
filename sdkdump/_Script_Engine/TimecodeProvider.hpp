#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\FrameRate.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Timecode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct TimecodeProvider : public _Script_CoreUObject::Object {
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Timecode GetTimecode();
    void* GetSynchronizationState();
    _Script_CoreUObject::FrameRate GetFrameRate();
}; // Size: 0x28
#pragma pack(pop)
}
