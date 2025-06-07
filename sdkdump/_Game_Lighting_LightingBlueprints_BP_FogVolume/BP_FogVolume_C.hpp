#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Lighting_LightingBlueprints_BP_FogVolume {
#pragma pack(push, 1)
struct BP_FogVolume_C : public _Script_Engine::StaticMeshActor {
    private: char pad_370[0x68]; public:
    void* get_UberGraphFrame();
    bool get_Noise();
    void set_Noise(bool value);
    float& get_Density();
    void* get_Albedo();
    void* get_EmissiveColor();
    float& get_EmissiveIntensity();
    float& get_FalloffDistance();
    float& get_HeightFalloffExponent();
    float& get_Camera_Fade_Start_Distance();
    float& get_Camera_Fade_Blend_Distance();
    float& get_Camera_Fade_Blend_Exponent();
    float& get_Camera_Fade_Minimum_Fog();
    float& get_NoiseAmount();
    float& get_NoiseSpeed();
    float& get_NoiseScale();
    _Script_Engine::MaterialInstanceDynamic*& get_Mid();
    float& get_WindScale();
    static _Script_CoreUObject::Class* static_class();
    void SetParams_Noise();
    void SetParams_Common();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_FogVolume(int32_t EntryPoint);
}; // Size: 0x3d8
#pragma pack(pop)
}
