#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "RsNuMagnitude.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsTweaks : public _Script_CoreUObject::Object {
    private: char pad_28[0x30]; public:
    void* get_TweaksPath();
    static _Script_CoreUObject::Class* static_class();
    _Script_RsTechRT::RsTweaks* MakeRsTweaks(void* tweaksFilePath);
    _Script_CoreUObject::Vector GetVector(bool& Success, void* tweakName);
    _Script_RsTechRT::RsTweaks* GetTweaks(void* tweakName);
    void* GetString(bool& Success, void* tweakName);
    _Script_CoreUObject::Rotator GetRotator(bool& Success, void* tweakName);
    _Script_RsTechRT::RsNuMagnitude GetNonUniformMagnitude(bool& Success, void* tweakName);
    void* GetNameString(bool& Success, void* tweakName);
    int32_t GetIntegerValue(bool& Success, void* tweakName);
    float GetFloatValue(bool& Success, void* tweakName);
    bool GetBooleanValue(bool& Success, void* tweakName);
}; // Size: 0x58
#pragma pack(pop)
}
