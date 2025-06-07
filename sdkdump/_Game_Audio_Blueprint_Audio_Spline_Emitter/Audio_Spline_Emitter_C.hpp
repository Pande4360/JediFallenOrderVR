#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Game_Audio_Component_Comp_SW_Amb_Overlap {
struct Comp_SW_Amb_Overlap_C;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_AkAudio {
struct AkComponent;
}
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Audio_Blueprint_Audio_Spline_Emitter {
#pragma pack(push, 1)
struct Audio_Spline_Emitter_C : public _Script_Engine::Actor {
    private: char pad_360[0x60]; public:
    void* get_UberGraphFrame();
    _Game_Audio_Component_Comp_SW_Amb_Overlap::Comp_SW_Amb_Overlap_C*& get_Comp_SW_Amb_Overlap();
    _Script_AkAudio::AkComponent*& get_Ak();
    _Script_Engine::SplineComponent*& get_Spline();
    _Script_Engine::SceneComponent*& get_Scene();
    _Script_AkAudio::AkAudioEvent*& get_Start_Sound();
    bool get_Audio_Debug_Sphere_And_Distance_Enabled();
    void set_Audio_Debug_Sphere_And_Distance_Enabled(bool value);
    _Script_Engine::StaticMesh*& get_Mesh();
    float& get_Occlusion_Interpolation_Rate();
    void* get_Location();
    int32_t& get_CinematicCounter();
    bool get_IsInCinematic();
    void set_IsInCinematic(bool value);
    float& get_InterpSpeed();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void BndEvt__Comp_SW_Amb_Overlap_K2Node_ComponentBoundEvent_0_RsOnOverlapHeroDelegate__DelegateSignature();
    void BndEvt__Comp_SW_Amb_Overlap_K2Node_ComponentBoundEvent_1_RsOnOverlapHeroDelegate__DelegateSignature();
    void CustomEvent_0();
    void LVL_CinematicEnded_Event_0();
    void OnOverlapHeroBegin_Event_0();
    void OnOverlapHeroEnd_Event_0();
    void ReceiveTick0(float DeltaSeconds);
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_Audio_Spline_Emitter(int32_t EntryPoint);
}; // Size: 0x3c0
#pragma pack(pop)
}
