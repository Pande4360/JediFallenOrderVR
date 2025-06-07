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
struct BlendSampleData {
    private: char pad_0[0x40]; public:
    int32_t& get_SampleDataIndex();
    _Script_Engine::AnimSequence*& get_Animation();
    float& get_TotalWeight();
    float& get_Time();
    float& get_PreviousTime();
    float& get_SamplePlayRate();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
