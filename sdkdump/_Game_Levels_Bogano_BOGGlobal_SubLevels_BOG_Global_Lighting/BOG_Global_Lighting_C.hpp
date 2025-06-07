#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_Engine {
struct SkyLight;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_Bogano_BOGGlobal_SubLevels_BOG_Global_Lighting {
#pragma pack(push, 1)
struct BOG_Global_Lighting_C : public _Script_Engine::LevelScriptActor {
    private: char pad_368[0x28]; public:
    void* get_UberGraphFrame();
    float& get_Timeline_0_progress_B0D10BBC4FBF973244777FB200C8A73C();
    void* get_Timeline_0__Direction_B0D10BBC4FBF973244777FB200C8A73C();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    float& get_SunIntensity();
    float& get_SkylightIntensity();
    _Script_Engine::SkyLight*& get_None_ExecuteUbergraph_BOG_Global_Lighting_RefProperty();
    static _Script_CoreUObject::Class* static_class();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void RE_Bog_EnterDarkZone();
    void RE_Bog_ExitDarkZone();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BOG_Global_Lighting(int32_t EntryPoint);
}; // Size: 0x390
#pragma pack(pop)
}
