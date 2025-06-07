#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCameraInputs;
}
namespace _Script_RsGameTechRT {
struct RsCameraOutputs;
}
namespace _Game_GlobalData_Camera_Behaviors_AddRotOffsetBasedOnLookInput {
#pragma pack(push, 1)
struct AddRotOffsetBasedOnLookInput_C : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x10]; public:
    float& get_MaxRotationalDistance();
    void* get_PreviousRotation();
    static _Script_CoreUObject::Class* static_class();
    void ClampAngleHelper(float InputAngle, float BaseAngle, float AngleLimit, float& OutputAngle);
    void BlueprintUpdate0(_Script_RsGameTechRT::RsCameraInputs& Inputs, _Script_RsGameTechRT::RsCameraOutputs& PreviousOutputs, _Script_RsGameTechRT::RsCameraOutputs& Outputs);
}; // Size: 0x40
#pragma pack(pop)
}
