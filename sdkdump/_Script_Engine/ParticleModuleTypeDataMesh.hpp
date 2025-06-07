#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleTypeDataBase.hpp"
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleTypeDataMesh : public ParticleModuleTypeDataBase {
    private: char pad_30[0x90]; public:
    _Script_Engine::StaticMesh*& get_Mesh();
    bool get_bUseStaticMeshLODs();
    void set_bUseStaticMeshLODs(bool value);
    float& get_LODSizeScale();
    bool get_CastShadows();
    void set_CastShadows(bool value);
    bool get_DoCollisions();
    void set_DoCollisions(bool value);
    void* get_MeshAlignment();
    bool get_bOverrideMaterial();
    void set_bOverrideMaterial(bool value);
    bool get_bOverrideDefaultMotionBlurSettings();
    void set_bOverrideDefaultMotionBlurSettings(bool value);
    bool get_bEnableMotionBlur();
    void set_bEnableMotionBlur(bool value);
    float& get_Pitch();
    float& get_Roll();
    float& get_Yaw();
    void* get_RollPitchYawRange();
    void* get_AxisLockOption();
    bool get_bCameraFacing();
    void set_bCameraFacing(bool value);
    void* get_CameraFacingUpAxisOption();
    void* get_CameraFacingOption();
    bool get_bApplyParticleRotationAsSpin();
    void set_bApplyParticleRotationAsSpin(bool value);
    bool get_bFaceCameraDirectionRatherThanPosition();
    void set_bFaceCameraDirectionRatherThanPosition(bool value);
    bool get_bCollisionsConsiderPartilceSize();
    void set_bCollisionsConsiderPartilceSize(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
