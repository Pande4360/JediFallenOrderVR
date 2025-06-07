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
struct BlendSample {
    private: char pad_0[0x18]; public:
    _Script_Engine::AnimSequence*& get_Animation();
    void* get_SampleValue();
    float& get_RateScale();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
