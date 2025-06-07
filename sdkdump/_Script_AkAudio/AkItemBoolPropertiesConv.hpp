#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
struct AkBoolPropertyToControl;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkItemBoolPropertiesConv : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void* Conv_FAkBoolPropertyToControlToText(_Script_AkAudio::AkBoolPropertyToControl& INAkBoolPropertyToControl);
    void* Conv_FAkBoolPropertyToControlToString(_Script_AkAudio::AkBoolPropertyToControl& INAkBoolPropertyToControl);
}; // Size: 0x28
#pragma pack(pop)
}
