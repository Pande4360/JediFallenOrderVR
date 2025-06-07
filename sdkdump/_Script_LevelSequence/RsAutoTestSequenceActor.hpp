#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "LevelSequenceActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LevelSequence {
#pragma pack(push, 1)
struct RsAutoTestSequenceActor : public LevelSequenceActor {
    private: char pad_410[0x18]; public:
    float& get_DesiredCameraSpeed();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x428
#pragma pack(pop)
}
