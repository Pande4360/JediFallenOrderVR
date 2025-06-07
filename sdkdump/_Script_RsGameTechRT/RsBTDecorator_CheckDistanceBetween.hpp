#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsBTDecorator_RelativeToLocationBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTDecorator_CheckDistanceBetween : public RsBTDecorator_RelativeToLocationBase {
    private: char pad_90[0x38]; public:
    void* get_Comparison();
    float& get_Distance();
    void* get_DistanceKey();
    bool get_bUseDistanceBlackboardKey();
    void set_bUseDistanceBlackboardKey(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
