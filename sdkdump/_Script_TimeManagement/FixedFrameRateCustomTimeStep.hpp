#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\EngineCustomTimeStep.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_TimeManagement {
#pragma pack(push, 1)
struct FixedFrameRateCustomTimeStep : public _Script_Engine::EngineCustomTimeStep {
    private: char pad_28[0x8]; public:
    void* get_FixedFrameRate();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
