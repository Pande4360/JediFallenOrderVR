#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsCameraOutputs {
    private: char pad_0[0x5c0]; public:
    void* get_Location();
    void* get_Rotation();
    float& get_FOV();
    void* get_LocationOffsetCS();
    void* get_LocationOffsetCSYawOnly();
    void* get_LocationOffsetWS();
    void* get_RotationOffsetCS();
    void* get_RotationOffsetWS();
    void* get_FocusLocationOffset();
    float& get_FOVOffset();
    void* get_FloorNormal();
    float& get_PostProcessBlendWeight();
    void* get_PostProcessSettings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x5c0
#pragma pack(pop)
}
