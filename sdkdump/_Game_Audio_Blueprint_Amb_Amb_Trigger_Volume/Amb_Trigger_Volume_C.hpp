#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AkAudio\AkAmbientSound.hpp"
#include "..\_Script_InputCore\Key.hpp"
namespace _Game_Audio_Component_Comp_SW_Amb_Overlap {
struct Comp_SW_Amb_Overlap_C;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Script_Engine {
struct TextRenderComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct Volume;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Audio_Blueprint_Amb_Amb_Trigger_Volume {
#pragma pack(push, 1)
struct Amb_Trigger_Volume_C : public _Script_AkAudio::AkAmbientSound {
    private: char pad_3a0[0x40]; public:
    void* get_UberGraphFrame();
    _Game_Audio_Component_Comp_SW_Amb_Overlap::Comp_SW_Amb_Overlap_C*& get_Comp_SW_Amb_Overlap();
    _Script_Engine::ArrowComponent*& get_Arrow();
    _Script_Engine::TextRenderComponent*& get_Audio_Trigger_Volume();
    _Script_Engine::StaticMeshComponent*& get_Audio_Trigger_Volume_Mesh();
    _Script_AkAudio::AkAudioEvent*& get_StopEvent();
    _Script_Engine::Volume*& get_Volume();
    bool get_IsDoOnce();
    void set_IsDoOnce(bool value);
    float& get_OcclusionInterpolationRate();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void OnClicked_Event_0(_Script_Engine::Actor* TouchedActor, _Script_InputCore::Key ButtonPressed);
    void BndEvt__Comp_SW_Amb_Overlap_K2Node_ComponentBoundEvent_2_RsOnOverlapHeroDelegate__DelegateSignature();
    void BndEvt__Comp_SW_Amb_Overlap_K2Node_ComponentBoundEvent_3_RsOnOverlapHeroDelegate__DelegateSignature();
    void ExecuteUbergraph_Amb_Trigger_Volume(int32_t EntryPoint);
}; // Size: 0x3e0
#pragma pack(pop)
}
