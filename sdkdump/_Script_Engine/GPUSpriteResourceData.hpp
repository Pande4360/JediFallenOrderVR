#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct GPUSpriteResourceData {
    private: char pad_0[0x160]; public:
    void* get_QuantizedColorSamples();
    void* get_QuantizedMiscSamples();
    void* get_QuantizedSimulationAttrSamples();
    void* get_ColorScale();
    void* get_ColorBias();
    void* get_MiscScale();
    void* get_MiscBias();
    void* get_SimulationAttrCurveScale();
    void* get_SimulationAttrCurveBias();
    void* get_SubImageSize();
    void* get_SizeBySpeed();
    void* get_ConstantAcceleration();
    void* get_OrbitOffsetBase();
    void* get_OrbitOffsetRange();
    void* get_OrbitFrequencyBase();
    void* get_OrbitFrequencyRange();
    void* get_OrbitPhaseBase();
    void* get_OrbitPhaseRange();
    float& get_GlobalVectorFieldScale();
    float& get_GlobalVectorFieldTightness();
    float& get_PerParticleVectorFieldScale();
    float& get_PerParticleVectorFieldBias();
    float& get_DragCoefficientScale();
    float& get_DragCoefficientBias();
    float& get_ResilienceScale();
    float& get_ResilienceBias();
    float& get_CollisionRadiusScale();
    float& get_CollisionRadiusBias();
    float& get_CollisionTimeBias();
    float& get_CollisionRandomSpread();
    float& get_CollisionRandomDistribution();
    float& get_OneMinusFriction();
    float& get_RotationRateScale();
    float& get_CameraMotionBlurAmount();
    void* get_ScreenAlignment();
    void* get_LockAxisFlag();
    void* get_PivotOffset();
    bool get_bRemoveHMDRoll();
    void set_bRemoveHMDRoll(bool value);
    float& get_MinFacingCameraBlendDistance();
    float& get_MaxFacingCameraBlendDistance();
    float& get_ParticleFieldSize();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x160
#pragma pack(pop)
}
