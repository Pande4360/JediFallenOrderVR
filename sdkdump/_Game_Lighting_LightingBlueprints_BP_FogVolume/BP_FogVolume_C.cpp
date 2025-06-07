#include "..\FUObjectArray.hpp"
#include "BP_FogVolume_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
void _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::set_Noise(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x378 + 0);
    *(uint8_t*)((uintptr_t)this + 0x378 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x370);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::get_Mid() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x3c8);
}
bool _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::get_Noise() {
    return (*(uint8_t*)((uintptr_t)this + 0x378 + 0)) & 1 != 0;
}
float& _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::get_Density() {
    return *(float*)((uintptr_t)this + 0x37c);
}
void* _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::get_Albedo() {
    return (void*)((uintptr_t)this + 0x380);
}
void* _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::get_EmissiveColor() {
    return (void*)((uintptr_t)this + 0x390);
}
void _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::ExecuteUbergraph_BP_FogVolume(int32_t EntryPoint) {
    return;
}
float& _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::get_EmissiveIntensity() {
    return *(float*)((uintptr_t)this + 0x3a0);
}
float& _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::get_FalloffDistance() {
    return *(float*)((uintptr_t)this + 0x3a4);
}
float& _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::get_HeightFalloffExponent() {
    return *(float*)((uintptr_t)this + 0x3a8);
}
float& _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::get_Camera_Fade_Start_Distance() {
    return *(float*)((uintptr_t)this + 0x3ac);
}
float& _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::get_Camera_Fade_Blend_Distance() {
    return *(float*)((uintptr_t)this + 0x3b0);
}
float& _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::get_Camera_Fade_Blend_Exponent() {
    return *(float*)((uintptr_t)this + 0x3b4);
}
float& _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::get_Camera_Fade_Minimum_Fog() {
    return *(float*)((uintptr_t)this + 0x3b8);
}
float& _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::get_NoiseAmount() {
    return *(float*)((uintptr_t)this + 0x3bc);
}
float& _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::get_NoiseSpeed() {
    return *(float*)((uintptr_t)this + 0x3c0);
}
float& _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::get_NoiseScale() {
    return *(float*)((uintptr_t)this + 0x3c4);
}
float& _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::get_WindScale() {
    return *(float*)((uintptr_t)this + 0x3d0);
}
_Script_CoreUObject::Class* _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Lighting/LightingBlueprints/BP_FogVolume.BP_FogVolume_C");
    return result;
}
void _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::SetParams_Noise() {
    return;
}
void _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::SetParams_Common() {
    return;
}
void _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::UserConstructionScript() {
    return;
}
void _Game_Lighting_LightingBlueprints_BP_FogVolume::BP_FogVolume_C::ReceiveBeginPlay() {
    return;
}
