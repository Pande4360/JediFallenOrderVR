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
struct AkPropertyToControl;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkItemPropertiesConv : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void* Conv_FAkPropertyToControlToText(_Script_AkAudio::AkPropertyToControl& INAkPropertyToControl);
    void* Conv_FAkPropertyToControlToString(_Script_AkAudio::AkPropertyToControl& INAkPropertyToControl);
}; // Size: 0x28
#pragma pack(pop)
}
