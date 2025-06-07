#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Characters_BoganoFodder_Logic_BP_BoganoFodder\BP_BoganoFodder_C.hpp"
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_RsGameTechRT {
struct RsAIController;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_RsGameTechRT {
struct RsAISpawner;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder_Shell {
#pragma pack(push, 1)
struct BP_BoganoFodder_Shell_C : public _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C {
    private: char pad_2d78[0x20]; public:
    void* get_UberGraphFrame();
    float& get_CamoStart_start_BECA529F4A052EF6B5193B89A2B8CF0B();
    void* get_CamoStart__Direction_BECA529F4A052EF6B5193B89A2B8CF0B();
    _Script_Engine::TimelineComponent*& get_CamoStart();
    _Script_Engine::MaterialInstanceDynamic*& get_camo_mat();
    static _Script_CoreUObject::Class* static_class();
    void SetCamoState(bool NewCamoState);
    void UserConstructionScript();
    void CamoStart__FinishedFunc();
    void CamoStart__UpdateFunc();
    void ReceiveBeginPlay();
    void ExitCamo();
    void EnterCamo();
    void OnAIAwarenessChanged(_Script_RsGameTechRT::RsAIController* AIController, void* PreviousAwarenessState, void* NewAwarenessState);
    void OnNotifyAISpawned(_Script_RsGameTechRT::RsAISpawner* Spawner);
    void Set_up_Camo_Material();
    void ExecuteUbergraph_BP_BoganoFodder_Shell(int32_t EntryPoint);
}; // Size: 0x2d98
#pragma pack(pop)
}
