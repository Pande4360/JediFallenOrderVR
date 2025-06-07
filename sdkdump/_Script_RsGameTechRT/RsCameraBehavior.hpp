#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCameraInputs;
}
namespace _Script_RsGameTechRT {
struct RsCameraOutputs;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsCameraBehavior : public _Script_CoreUObject::Object {
    private: char pad_28[0x8]; public:
    bool get_bEnabled();
    void set_bEnabled(bool value);
    static _Script_CoreUObject::Class* static_class();
    bool IsFirstUpdate();
    float GetRotationSpeedYaw(_Script_RsGameTechRT::RsCameraInputs& Inputs);
    float GetRotationSpeedPitch(_Script_RsGameTechRT::RsCameraInputs& Inputs);
    void BlueprintUpdate(_Script_RsGameTechRT::RsCameraInputs& Inputs, _Script_RsGameTechRT::RsCameraOutputs& PreviousOutputs, _Script_RsGameTechRT::RsCameraOutputs& Outputs);
    void BlueprintEnd(_Script_RsGameTechRT::RsCameraInputs& Inputs, _Script_RsGameTechRT::RsCameraOutputs& PreviousOutputs, _Script_RsGameTechRT::RsCameraOutputs& Outputs);
    void BlueprintBegin(_Script_RsGameTechRT::RsCameraInputs& Inputs, _Script_RsGameTechRT::RsCameraOutputs& PreviousOutputs, _Script_RsGameTechRT::RsCameraOutputs& Outputs);
}; // Size: 0x30
#pragma pack(pop)
}
