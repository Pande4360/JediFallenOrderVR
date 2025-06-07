#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimControlTrackKey {
    private: char pad_0[0x20]; public:
    float& get_StartTime();
    _Script_Engine::AnimSequence*& get_AnimSeq();
    float& get_AnimStartOffset();
    float& get_AnimEndOffset();
    float& get_AnimPlayRate();
    bool get_bLooping();
    void set_bLooping(bool value);
    bool get_bReverse();
    void set_bReverse(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
