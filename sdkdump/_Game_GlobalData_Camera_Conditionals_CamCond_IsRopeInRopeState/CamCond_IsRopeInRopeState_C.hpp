#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\RsCameraConditional.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCameraInputs;
}
namespace _Script_RsGameTechRT {
struct RsCameraOutputs;
}
namespace _Game_GlobalData_Camera_Conditionals_CamCond_IsRopeInRopeState {
#pragma pack(push, 1)
struct CamCond_IsRopeInRopeState_C : public _Script_SwGame::RsCameraConditional {
    private: char pad_28[0x10]; public:
    void* get_RopeStatesIn();
    static _Script_CoreUObject::Class* static_class();
    bool BlueprintConditional0(_Script_RsGameTechRT::RsCameraInputs& Inputs, _Script_RsGameTechRT::RsCameraOutputs& Outputs);
}; // Size: 0x38
#pragma pack(pop)
}
