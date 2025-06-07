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
struct AkWaapiFieldNames;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct SAkWaapiFieldNamesConv : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void* Conv_FAkWaapiFieldNamesToText(_Script_AkAudio::AkWaapiFieldNames& INAkWaapiFieldNames);
    void* Conv_FAkWaapiFieldNamesToString(_Script_AkAudio::AkWaapiFieldNames& INAkWaapiFieldNames);
}; // Size: 0x28
#pragma pack(pop)
}
