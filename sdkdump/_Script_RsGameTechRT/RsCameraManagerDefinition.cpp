#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsCameraManagerDefinition.hpp"
float& _Script_RsGameTechRT::RsCameraManagerDefinition::get_CollisionSphereTraceDistance() {
    return *(float*)((uintptr_t)this + 0x314);
}
void _Script_RsGameTechRT::RsCameraManagerDefinition::set_bOffsetBoneAttachmentByCylinderHalfHeight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsCameraManagerDefinition::get_DefaultFOV() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsCameraManagerDefinition::get_CameraBoneName() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_RsGameTechRT::RsCameraManagerDefinition::get_GroundBoneOrSocketName() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_RsGameTechRT::RsCameraManagerDefinition::get_NavSurfaceZOffset() {
    return *(float*)((uintptr_t)this + 0x4c);
}
void* _Script_RsGameTechRT::RsCameraManagerDefinition::get_CameraBoneForwardAxis() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_RsGameTechRT::RsCameraManagerDefinition::get_CameraBoneDownAxis() {
    return (void*)((uintptr_t)this + 0x49);
}
bool _Script_RsGameTechRT::RsCameraManagerDefinition::get_bOffsetBoneAttachmentByCylinderHalfHeight() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsCameraManagerDefinition::get_TransitionCurve() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_RsGameTechRT::RsCameraManagerDefinition::get_bComputeAccurateAnchorRelativeTransitions() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsCameraManagerDefinition::set_bComputeAccurateAnchorRelativeTransitions(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsCameraManagerDefinition::get_InputRampYaw() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_RsGameTechRT::RsCameraManagerDefinition::get_AccelerationRampYaw() {
    return (void*)((uintptr_t)this + 0x148);
}
float& _Script_RsGameTechRT::RsCameraManagerDefinition::get_YawRampUpTime() {
    return *(float*)((uintptr_t)this + 0x1c0);
}
float& _Script_RsGameTechRT::RsCameraManagerDefinition::get_YawRampUpFraction() {
    return *(float*)((uintptr_t)this + 0x1c4);
}
float& _Script_RsGameTechRT::RsCameraManagerDefinition::get_YawRampDownTime() {
    return *(float*)((uintptr_t)this + 0x1c8);
}
float& _Script_RsGameTechRT::RsCameraManagerDefinition::get_YawRampDownFraction() {
    return *(float*)((uintptr_t)this + 0x1cc);
}
void* _Script_RsGameTechRT::RsCameraManagerDefinition::get_InputRampPitch() {
    return (void*)((uintptr_t)this + 0x1d0);
}
void* _Script_RsGameTechRT::RsCameraManagerDefinition::get_AccelerationRampPitch() {
    return (void*)((uintptr_t)this + 0x248);
}
float& _Script_RsGameTechRT::RsCameraManagerDefinition::get_PitchRampUpTime() {
    return *(float*)((uintptr_t)this + 0x2c0);
}
void* _Script_RsGameTechRT::RsCameraManagerDefinition::get_AnimatedCameraSockets() {
    return (void*)((uintptr_t)this + 0x2f8);
}
float& _Script_RsGameTechRT::RsCameraManagerDefinition::get_PitchRampUpFraction() {
    return *(float*)((uintptr_t)this + 0x2c4);
}
void _Script_RsGameTechRT::RsCameraManagerDefinition::set_bDoCameraObstructionCheck(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31c + 0);
    *(uint8_t*)((uintptr_t)this + 0x31c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsCameraManagerDefinition::get_PitchRampDownTime() {
    return *(float*)((uintptr_t)this + 0x2c8);
}
float& _Script_RsGameTechRT::RsCameraManagerDefinition::get_PitchRampDownFraction() {
    return *(float*)((uintptr_t)this + 0x2cc);
}
void* _Script_RsGameTechRT::RsCameraManagerDefinition::get_DefaultModeName() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void* _Script_RsGameTechRT::RsCameraManagerDefinition::get_CameraActorModeName() {
    return (void*)((uintptr_t)this + 0x2d8);
}
void* _Script_RsGameTechRT::RsCameraManagerDefinition::get_SplineCameraModeName() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Script_RsGameTechRT::RsCameraManagerDefinition::get_DefaultModeSets() {
    return (void*)((uintptr_t)this + 0x2e8);
}
float& _Script_RsGameTechRT::RsCameraManagerDefinition::get_AnimatedCameraBaseFOV() {
    return *(float*)((uintptr_t)this + 0x308);
}
bool _Script_RsGameTechRT::RsCameraManagerDefinition::get_bEnableCollisionSphere() {
    return (*(uint8_t*)((uintptr_t)this + 0x30c + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsCameraManagerDefinition::set_bEnableCollisionSphere(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30c + 0);
    *(uint8_t*)((uintptr_t)this + 0x30c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsCameraManagerDefinition::get_CollisionSphereTraceSize() {
    return *(float*)((uintptr_t)this + 0x310);
}
float& _Script_RsGameTechRT::RsCameraManagerDefinition::get_CollisionSphereCushionRatio() {
    return *(float*)((uintptr_t)this + 0x318);
}
bool _Script_RsGameTechRT::RsCameraManagerDefinition::get_bDoCameraObstructionCheck() {
    return (*(uint8_t*)((uintptr_t)this + 0x31c + 0)) & 1 != 0;
}
float& _Script_RsGameTechRT::RsCameraManagerDefinition::get_CameraObstructionCheckSize() {
    return *(float*)((uintptr_t)this + 0x320);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCameraManagerDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsCameraManagerDefinition");
    return result;
}
