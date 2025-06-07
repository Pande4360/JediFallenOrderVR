#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SpotLight.hpp"
namespace _Script_Engine {
struct StaticMeshActor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Models_TechArt_Lighting_SpotlightWithTarget_BP {
#pragma pack(push, 1)
struct SpotlightWithTarget_BP_C : public _Script_Engine::SpotLight {
    private: char pad_380[0x120]; public:
    float& get_Target_Point_Spawn_Distance();
    bool get_UseTargetPoint_();
    void set_UseTargetPoint_(bool value);
    void* get_TargetPointMode();
    bool get_LockTargetPointToLight_();
    void set_LockTargetPointToLight_(bool value);
    _Script_Engine::StaticMeshActor*& get_LookAtActor();
    bool get_UseLookAtActor_();
    void set_UseLookAtActor_(bool value);
    void* get_TargetPoint();
    void* get_PreviousActorTransform();
    void* get_PreviousTargetPoint();
    void* get_DebugLineColor();
    float& get_Target_Point_Size();
    void* get_PreviousSpotlightTransform();
    bool get_PreviousUseTargetPoint();
    void set_PreviousUseTargetPoint(bool value);
    void* get_temp_TargetPoint();
    void* get_NewVar_0();
    static _Script_CoreUObject::Class* static_class();
    void NewFunction_0();
    void InitializeTransforms();
    void SetTargetTransformEqualToPrevious();
    void UserConstructionScript();
}; // Size: 0x4a0
#pragma pack(pop)
}
