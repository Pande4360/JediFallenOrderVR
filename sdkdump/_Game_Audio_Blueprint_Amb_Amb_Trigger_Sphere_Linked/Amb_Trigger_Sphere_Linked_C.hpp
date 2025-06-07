#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AkAudio\AkAmbientSound.hpp"
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
struct SphereComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Audio_Blueprint_Amb_Amb_Trigger_Sphere_Linked {
#pragma pack(push, 1)
struct Amb_Trigger_Sphere_Linked_C : public _Script_AkAudio::AkAmbientSound {
    private: char pad_3a0[0x40]; public:
    void* get_UberGraphFrame();
    _Game_Audio_Component_Comp_SW_Amb_Overlap::Comp_SW_Amb_Overlap_C*& get_Comp_SW_Amb_Overlap();
    _Script_Engine::ArrowComponent*& get_Arrow();
    _Script_Engine::StaticMeshComponent*& get_StaticMesh();
    _Script_Engine::TextRenderComponent*& get_TextRender();
    _Script_Engine::SphereComponent*& get_Sphere();
    _Script_AkAudio::AkAudioEvent*& get_StopEvent();
    float& get_OcclusionInterpolationRate();
    bool get_IsDoOnce();
    void set_IsDoOnce(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void BndEvt__Comp_SW_Amb_Overlap_K2Node_ComponentBoundEvent_0_RsOnOverlapHeroDelegate__DelegateSignature();
    void BndEvt__Comp_SW_Amb_Overlap_K2Node_ComponentBoundEvent_1_RsOnOverlapHeroDelegate__DelegateSignature();
    void ExecuteUbergraph_Amb_Trigger_Sphere_Linked(int32_t EntryPoint);
}; // Size: 0x3e0
#pragma pack(pop)
}
