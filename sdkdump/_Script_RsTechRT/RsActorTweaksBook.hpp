#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsTweaksBook.hpp"
namespace _Script_RsTechRT {
struct RsMotionParmTweaksBook;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsActorTweaksBook : public RsTweaksBook {
    private: char pad_40[0x78]; public:
    void* get_UsingTweaks();
    void* get_AnalysisTweaks();
    _Script_RsTechRT::RsMotionParmTweaksBook*& get_MotionTweaks();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
