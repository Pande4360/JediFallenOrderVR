#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
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
namespace _Game_GlobalData_Camera_Behaviors_DialogueOffsetModifier {
#pragma pack(push, 1)
struct DialogueOffsetModifier_C : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x8]; public:
    float& get_XOffsetExtra();
    float& get_YOffsetExtra();
    static _Script_CoreUObject::Class* static_class();
    void CalculateOffset(_Script_CoreUObject::Vector FocusLocation, _Script_CoreUObject::Vector ViewTargetLocation, _Script_CoreUObject::Vector AnchorPos, _Script_CoreUObject::Rotator CameraRotation, float& XOffset, float& YOffset);
    void AngleBetweenTwoVectors(_Script_CoreUObject::Vector Vector_A, _Script_CoreUObject::Vector Vector_B, _Script_CoreUObject::Vector Vector_B_Right, float& Angle, float& Sign);
    void BlueprintUpdate0(_Script_RsGameTechRT::RsCameraInputs& Inputs, _Script_RsGameTechRT::RsCameraOutputs& PreviousOutputs, _Script_RsGameTechRT::RsCameraOutputs& Outputs);
}; // Size: 0x38
#pragma pack(pop)
}
