#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwHybridTargetData {
    private: char pad_0[0x38]; public:
    float& get_StickHalfAngle();
    float& get_StickRadius();
    float& get_StickStartRadius();
    float& get_StickProximityWeight();
    float& get_StickAdditiveScore();
    float& get_StickMultiplicativeScore();
    float& get_StickOffscreenPenalty();
    float& get_CameraHalfAngle();
    float& get_CameraRadius();
    float& get_CameraStartRadius();
    float& get_CameraProximityWeight();
    float& get_CameraAdditiveScore();
    float& get_CameraMultiplicativeScore();
    float& get_CameraOffscreenPenalty();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
