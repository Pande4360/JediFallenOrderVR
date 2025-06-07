#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsCameraManagerDefinition : public _Script_Engine::DataAsset {
    private: char pad_30[0x2f8]; public:
    float& get_DefaultFOV();
    void* get_CameraBoneName();
    void* get_GroundBoneOrSocketName();
    void* get_CameraBoneForwardAxis();
    void* get_CameraBoneDownAxis();
    bool get_bOffsetBoneAttachmentByCylinderHalfHeight();
    void set_bOffsetBoneAttachmentByCylinderHalfHeight(bool value);
    float& get_NavSurfaceZOffset();
    void* get_TransitionCurve();
    bool get_bComputeAccurateAnchorRelativeTransitions();
    void set_bComputeAccurateAnchorRelativeTransitions(bool value);
    void* get_InputRampYaw();
    void* get_AccelerationRampYaw();
    float& get_YawRampUpTime();
    float& get_YawRampUpFraction();
    float& get_YawRampDownTime();
    float& get_YawRampDownFraction();
    void* get_InputRampPitch();
    void* get_AccelerationRampPitch();
    float& get_PitchRampUpTime();
    float& get_PitchRampUpFraction();
    float& get_PitchRampDownTime();
    float& get_PitchRampDownFraction();
    void* get_DefaultModeName();
    void* get_CameraActorModeName();
    void* get_SplineCameraModeName();
    void* get_DefaultModeSets();
    void* get_AnimatedCameraSockets();
    float& get_AnimatedCameraBaseFOV();
    bool get_bEnableCollisionSphere();
    void set_bEnableCollisionSphere(bool value);
    float& get_CollisionSphereTraceSize();
    float& get_CollisionSphereTraceDistance();
    float& get_CollisionSphereCushionRatio();
    bool get_bDoCameraObstructionCheck();
    void set_bDoCameraObstructionCheck(bool value);
    float& get_CameraObstructionCheckSize();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x328
#pragma pack(pop)
}
