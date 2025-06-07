#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct VOIPStatics : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void SetMicThreshold(float InThreshold);
}; // Size: 0x28
#pragma pack(pop)
}
