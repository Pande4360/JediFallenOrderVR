#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Timespan.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_BinkMediaPlayer {
#pragma pack(push, 1)
struct BinkFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Timespan BinkLoadingMovie_GetTime();
    _Script_CoreUObject::Timespan BinkLoadingMovie_GetDuration();
    void Bink_DrawOverlays();
}; // Size: 0x28
#pragma pack(pop)
}
