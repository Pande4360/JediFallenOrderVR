#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_InputCore\Key.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwUIBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    float GetProgressBarScrollPercent(float Fraction, float ScrollFraction, float DeltaTime, float RateFactor, float MinimumRate);
    void* GetInputKeyName(_Script_InputCore::Key InputKey);
}; // Size: 0x28
#pragma pack(pop)
}
