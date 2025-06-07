#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "FrameGrabberProtocol.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneCapture {
#pragma pack(push, 1)
struct ImageSequenceProtocol : public FrameGrabberProtocol {
    private: char pad_68[0x70]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
