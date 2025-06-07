#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCameraInputs;
}
namespace _Script_RsGameTechRT {
struct RsCameraOutputs;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsCameraConditional : public _Script_CoreUObject::Object {
    static _Script_CoreUObject::Class* static_class();
    void BlueprintEnd(_Script_RsGameTechRT::RsCameraInputs& Inputs, _Script_RsGameTechRT::RsCameraOutputs& Outputs);
    bool BlueprintConditional(_Script_RsGameTechRT::RsCameraInputs& Inputs, _Script_RsGameTechRT::RsCameraOutputs& Outputs);
    void BlueprintBegin(_Script_RsGameTechRT::RsCameraInputs& Inputs, _Script_RsGameTechRT::RsCameraOutputs& Outputs);
}; // Size: 0x28
#pragma pack(pop)
}
