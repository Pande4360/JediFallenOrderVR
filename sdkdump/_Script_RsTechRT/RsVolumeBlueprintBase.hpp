#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_Engine\Volume.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsVolumeBlueprintBase : public _Script_Engine::Volume {
    static _Script_CoreUObject::Class* static_class();
    void SetVolumeColor(_Script_CoreUObject::Color newVolumeColor);
}; // Size: 0x398
#pragma pack(pop)
}
