#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct SectionEvaluationData {
    private: char pad_0[0xc]; public:
    int32_t& get_ImplIndex();
    void* get_ForcedTime();
    void* get_Flags();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
