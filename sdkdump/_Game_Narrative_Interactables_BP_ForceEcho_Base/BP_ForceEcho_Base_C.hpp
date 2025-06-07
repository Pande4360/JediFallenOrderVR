#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated\Zone_Interact_Animated_C.hpp"
namespace _Script_Engine {
struct DecalComponent;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapCollectableComponent;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Game_GlobalData_Economy_BPC_RewardComponent {
struct BPC_RewardComponent_C;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Game_UI_Debug_UI_MessageText {
struct UI_MessageText_C;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Color;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsConversation;
}
namespace _Game_Narrative_Interactables_BP_ForceEcho_Base {
#pragma pack(push, 1)
struct BP_ForceEcho_Base_C : public _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C {
    private: char pad_4a8[0x140]; public:
    void* get_UberGraphFrame();
    _Script_Engine::PointLightComponent*& get_Force_Echo_Light_01();
    _Script_Engine::DecalComponent*& get_Ground_Decal();
    _Script_RsGameTechRT::RsWorldMapCollectableComponent*& get_RsWorldMapCollectable();
    _Script_Engine::ChildActorComponent*& get_NarrativeLabelComponent();
    _Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C*& get_BPC_RewardComponent();
    _Script_Engine::StaticMeshComponent*& get_Echo_Environment_Mesh();
    _Script_Engine::ParticleSystemComponent*& get_VFX_Void();
    void* get_Orient__Direction_26A605A64B9D9A1DD93163B2B4230DC7();
    _Script_Engine::TimelineComponent*& get_Orient();
    float& get_FadeFX_Fade_88A2BF604706767D4A5D8A981CCD90E6();
    void* get_FadeFX__Direction_88A2BF604706767D4A5D8A981CCD90E6();
    _Script_Engine::TimelineComponent*& get_FadeFX();
    float& get_Timeline_0_NewTrack_0_4D8784EC490BE73AD51C1AB6DCE972E7();
    void* get_Timeline_0__Direction_4D8784EC490BE73AD51C1AB6DCE972E7();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    _Script_Engine::StaticMesh*& get_Echo_Static_Mesh();
    _Game_UI_Debug_UI_MessageText::UI_MessageText_C*& get_Echo_DataBank_Widget();
    void* get_Dialogue_and_Gameplay_Tag_Override();
    _Script_Engine::ParticleSystem*& get_Echo_VFX_Particle_Override();
    void* get_Temp_text_color();
    _Script_Engine::StaticMesh*& get_Echo_Hologram_Pose_Mesh_Override();
    _Script_Engine::ParticleSystem*& get_P_ConsumeEcho_VFX();
    void* get_Temp_Explanation_text_post_echo();
    _Script_AkAudio::AkAudioEvent*& get_Audio_ambient_start();
    _Script_AkAudio::AkAudioEvent*& get_Audio_ambient_stop();
    void* get_LVL_EchoDone();
    _Script_Engine::ChildActorComponent*& get_NewVar_0_0();
    void* get_NarrativeLabel();
    void* get_NarrativeLabelOffset();
    bool get_NarrativeLabelHiddenInGame();
    void set_NarrativeLabelHiddenInGame(bool value);
    void* get_NarrativeLabelColor();
    void* get_EchoUnlockableTag();
    _Script_Engine::MaterialInstanceDynamic*& get_DynmaicMaterialInstance();
    void* get_Hero_Interact_Echo_Animation();
    float& get_Light_Intensity();
    static _Script_CoreUObject::Class* static_class();
    void GetNarrativeLabel(void*& Label);
    void GetNarrativeLabelOffset(_Script_CoreUObject::Vector& Offset);
    void GetNarrativeLabelColor(_Script_CoreUObject::Color& Result);
    void GetNarrativeLabelHiddenInGame(bool& Hidden);
    void ShouldAllowInteract__OverrideMe(bool& Result);
    void UserConstructionScript0();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void FadeFX__FinishedFunc();
    void FadeFX__UpdateFunc();
    void Orient__FinishedFunc();
    void Orient__UpdateFunc();
    void ScriptedAnimStart(_Script_Engine::Actor* ScriptingActor);
    void ScriptedAnimEnd();
    void ReceiveBeginPlay0();
    void Echo_ConversationFinished(_Script_RsGameTechRT::RsConversation* Conversation);
    void ReceiveActorBeginOverlap(_Script_Engine::Actor* OtherActor);
    void ReceiveActorEndOverlap(_Script_Engine::Actor* OtherActor);
    void LVL_HideEcho();
    void LVL_ShowEcho();
    void ScriptedAnimBinding();
    void ScriptedAnimStop();
    void ScriptedAnimNotify(void* NotifyName);
    void ToggleNarrativeLabel();
    void ForceEcho_AnimStarted();
    void OrientToEcho();
    void VO_FailSafe();
    void ExecuteUbergraph_BP_ForceEcho_Base(int32_t EntryPoint);
    void LVL_EchoDone__DelegateSignature();
}; // Size: 0x5e8
#pragma pack(pop)
}
