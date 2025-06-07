#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwSimpleDestructibleActor.hpp"
namespace _Script_AkAudio {
struct AkBankLoadComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Models_Bogano_Breakable_BOG_StiltCuttable_DM_BOG_StiltCuttable_3_5M_01 {
#pragma pack(push, 1)
struct DM_BOG_StiltCuttable_3_5M_01_C : public _Script_SwGame::SwSimpleDestructibleActor {
    private: char pad_750[0x60]; public:
    void* get_UberGraphFrame();
    _Script_AkAudio::AkBankLoadComponent*& get_AkBankLoad();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::SkeletalMeshComponent*& get_Stilt();
    _Script_Engine::SceneComponent*& get_Scene();
    float& get_Timeline_0_Erosion_DD1702CA4C2499C6451A25A2404A1AC5();
    void* get_Timeline_0__Direction_DD1702CA4C2499C6451A25A2404A1AC5();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    _Script_Engine::MaterialInstanceDynamic*& get_Opacity_Mask_0();
    _Script_Engine::MaterialInstanceDynamic*& get_Opacity_Mask_1();
    _Script_Engine::MaterialInstanceDynamic*& get_Opacity_Mask_2();
    int32_t& get_element_index_0();
    int32_t& get_element_index_1();
    int32_t& get_element_index_2();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnLastPhaseDestructed0();
    void ExecuteUbergraph_DM_BOG_StiltCuttable_3_5M_01(int32_t EntryPoint);
}; // Size: 0x7b0
#pragma pack(pop)
}
