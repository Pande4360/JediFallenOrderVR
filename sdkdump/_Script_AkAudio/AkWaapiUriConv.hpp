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
struct AkWaapiUri;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkWaapiUriConv : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void* Conv_FAkWaapiUriToText(_Script_AkAudio::AkWaapiUri& INAkWaapiUri);
    void* Conv_FAkWaapiUriToString(_Script_AkAudio::AkWaapiUri& INAkWaapiUri);
}; // Size: 0x28
#pragma pack(pop)
}
