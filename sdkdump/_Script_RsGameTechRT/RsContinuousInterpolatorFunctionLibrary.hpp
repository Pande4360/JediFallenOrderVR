#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsContinuousInterpolatorFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Vector RsContinuousInterpVector(_Script_CoreUObject::Vector CurrentValue, _Script_CoreUObject::Vector TargetValue, float DeltaTime, float SmoothTime, float SmoothTimeInterpPercentage);
    _Script_CoreUObject::Rotator RsContinuousInterpRotator(_Script_CoreUObject::Rotator CurrentValue, _Script_CoreUObject::Rotator TargetValue, float DeltaTime, float SmoothTime, float SmoothTimeInterpPercentage);
    float RsContinuousInterpFloat(float CurrentValue, float TargetValue, float DeltaTime, float SmoothTime, float SmoothTimeInterpPercentage);
}; // Size: 0x28
#pragma pack(pop)
}
