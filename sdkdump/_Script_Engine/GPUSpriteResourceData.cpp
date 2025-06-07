#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GPUSpriteResourceData.hpp"
float& _Script_Engine::GPUSpriteResourceData::get_PerParticleVectorFieldBias() {
    return *(float*)((uintptr_t)this + 0x110);
}
void* _Script_Engine::GPUSpriteResourceData::get_QuantizedColorSamples() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::GPUSpriteResourceData::get_SimulationAttrCurveScale() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::GPUSpriteResourceData::get_MiscScale() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::GPUSpriteResourceData::get_ScreenAlignment() {
    return (void*)((uintptr_t)this + 0x144);
}
void* _Script_Engine::GPUSpriteResourceData::get_QuantizedMiscSamples() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::GPUSpriteResourceData::get_QuantizedSimulationAttrSamples() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::GPUSpriteResourceData::get_ColorScale() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::GPUSpriteResourceData::get_ColorBias() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::GPUSpriteResourceData::get_OrbitPhaseRange() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_Engine::GPUSpriteResourceData::get_MiscBias() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::GPUSpriteResourceData::get_SimulationAttrCurveBias() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Engine::GPUSpriteResourceData::get_SubImageSize() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::GPUSpriteResourceData::get_SizeBySpeed() {
    return (void*)((uintptr_t)this + 0xa0);
}
float& _Script_Engine::GPUSpriteResourceData::get_MaxFacingCameraBlendDistance() {
    return *(float*)((uintptr_t)this + 0x158);
}
void* _Script_Engine::GPUSpriteResourceData::get_ConstantAcceleration() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_Engine::GPUSpriteResourceData::get_OrbitOffsetBase() {
    return (void*)((uintptr_t)this + 0xbc);
}
void* _Script_Engine::GPUSpriteResourceData::get_OrbitOffsetRange() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_Engine::GPUSpriteResourceData::get_OrbitFrequencyBase() {
    return (void*)((uintptr_t)this + 0xd4);
}
void* _Script_Engine::GPUSpriteResourceData::get_OrbitFrequencyRange() {
    return (void*)((uintptr_t)this + 0xe0);
}
float& _Script_Engine::GPUSpriteResourceData::get_CollisionRadiusBias() {
    return *(float*)((uintptr_t)this + 0x128);
}
void* _Script_Engine::GPUSpriteResourceData::get_OrbitPhaseBase() {
    return (void*)((uintptr_t)this + 0xec);
}
float& _Script_Engine::GPUSpriteResourceData::get_GlobalVectorFieldScale() {
    return *(float*)((uintptr_t)this + 0x104);
}
float& _Script_Engine::GPUSpriteResourceData::get_GlobalVectorFieldTightness() {
    return *(float*)((uintptr_t)this + 0x108);
}
float& _Script_Engine::GPUSpriteResourceData::get_PerParticleVectorFieldScale() {
    return *(float*)((uintptr_t)this + 0x10c);
}
float& _Script_Engine::GPUSpriteResourceData::get_DragCoefficientScale() {
    return *(float*)((uintptr_t)this + 0x114);
}
float& _Script_Engine::GPUSpriteResourceData::get_DragCoefficientBias() {
    return *(float*)((uintptr_t)this + 0x118);
}
float& _Script_Engine::GPUSpriteResourceData::get_ResilienceScale() {
    return *(float*)((uintptr_t)this + 0x11c);
}
float& _Script_Engine::GPUSpriteResourceData::get_ResilienceBias() {
    return *(float*)((uintptr_t)this + 0x120);
}
float& _Script_Engine::GPUSpriteResourceData::get_CollisionRadiusScale() {
    return *(float*)((uintptr_t)this + 0x124);
}
float& _Script_Engine::GPUSpriteResourceData::get_CollisionTimeBias() {
    return *(float*)((uintptr_t)this + 0x12c);
}
float& _Script_Engine::GPUSpriteResourceData::get_OneMinusFriction() {
    return *(float*)((uintptr_t)this + 0x138);
}
float& _Script_Engine::GPUSpriteResourceData::get_CollisionRandomSpread() {
    return *(float*)((uintptr_t)this + 0x130);
}
float& _Script_Engine::GPUSpriteResourceData::get_CollisionRandomDistribution() {
    return *(float*)((uintptr_t)this + 0x134);
}
float& _Script_Engine::GPUSpriteResourceData::get_RotationRateScale() {
    return *(float*)((uintptr_t)this + 0x13c);
}
float& _Script_Engine::GPUSpriteResourceData::get_CameraMotionBlurAmount() {
    return *(float*)((uintptr_t)this + 0x140);
}
void* _Script_Engine::GPUSpriteResourceData::get_LockAxisFlag() {
    return (void*)((uintptr_t)this + 0x145);
}
void* _Script_Engine::GPUSpriteResourceData::get_PivotOffset() {
    return (void*)((uintptr_t)this + 0x148);
}
bool _Script_Engine::GPUSpriteResourceData::get_bRemoveHMDRoll() {
    return (*(uint8_t*)((uintptr_t)this + 0x150 + 0)) & 1 != 0;
}
void _Script_Engine::GPUSpriteResourceData::set_bRemoveHMDRoll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x150 + 0);
    *(uint8_t*)((uintptr_t)this + 0x150 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::GPUSpriteResourceData::get_MinFacingCameraBlendDistance() {
    return *(float*)((uintptr_t)this + 0x154);
}
float& _Script_Engine::GPUSpriteResourceData::get_ParticleFieldSize() {
    return *(float*)((uintptr_t)this + 0x15c);
}
_Script_CoreUObject::Class* _Script_Engine::GPUSpriteResourceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.GPUSpriteResourceData");
    return result;
}
