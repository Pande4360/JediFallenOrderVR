#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_AkAudio {
struct AkBankLoadComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_AkAudio {
struct AkComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Game_Characters_Bogling_Logic_AB_Bogling {
struct AB_Bogling_C;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_Bogano_BP_Bogling {
#pragma pack(push, 1)
struct BP_Bogling_C : public _Script_Engine::Actor {
    private: char pad_360[0x88]; public:
    void* get_UberGraphFrame();
    _Script_Engine::ParticleSystemComponent*& get_P_BoglingPopDustThick();
    _Script_AkAudio::AkComponent*& get_Ak();
    _Script_AkAudio::AkBankLoadComponent*& get_AkBankLoad();
    _Script_Engine::SkeletalMeshComponent*& get_Bogling_rig();
    _Script_Engine::StaticMeshComponent*& get_StaticMesh();
    _Script_Engine::SceneComponent*& get_Transform();
    _Script_Engine::PointLightComponent*& get_PointLight1();
    _Script_Engine::PointLightComponent*& get_PointLight();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    float& get_TL_PopUp_progress_6AAAF51D4E601361650657A975BF091E();
    void* get_TL_PopUp__Direction_6AAAF51D4E601361650657A975BF091E();
    _Script_Engine::TimelineComponent*& get_TL_PopUp();
    bool get_startDown();
    void set_startDown(bool value);
    float& get_timelineProgress();
    float& get_popDepth();
    _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C*& get_REF_AB_Bogling();
    _Script_Engine::MaterialInstanceDynamic*& get_HairMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_FurMaterial();
    static _Script_CoreUObject::Class* static_class();
    void RandomizeAnimRateAndScale();
    void UserConstructionScript0();
    void TL_PopUp__FinishedFunc();
    void TL_PopUp__UpdateFunc();
    void ReceiveBeginPlay0();
    void LVL_PopUp(float Seconds);
    void LVL_PopDown(float Seconds);
    void Set_New_Time();
    void ExecuteUbergraph_BP_Bogling(int32_t EntryPoint);
}; // Size: 0x3e8
#pragma pack(pop)
}
