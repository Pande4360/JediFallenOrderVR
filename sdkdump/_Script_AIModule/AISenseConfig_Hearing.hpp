#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AISenseConfig.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AISenseConfig_Hearing : public AISenseConfig {
    private: char pad_48[0x18]; public:
    void* get_Implementation();
    float& get_HearingRange();
    float& get_LoSHearingRange();
    bool get_bUseLoSHearing();
    void set_bUseLoSHearing(bool value);
    void* get_DetectionByAffiliation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
