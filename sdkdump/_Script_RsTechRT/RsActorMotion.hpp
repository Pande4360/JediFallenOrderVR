#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\CharacterMovementComponent.hpp"
#include "RsTopology.hpp"
namespace _Script_RsTechRT {
struct RsActorTweaksBook;
}
namespace _Script_RsTechRT {
struct RsGeoLocator;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Script_RsTechRT {
struct RsTweaks;
}
namespace _Script_RsTechRT {
struct RsInfluence;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsActorMotion : public _Script_Engine::CharacterMovementComponent {
    private: char pad_7e0[0x256d0]; public:
    _Script_RsTechRT::RsActorTweaksBook*& get_Tweaks();
    void* get_TweakFile();
    void* get_CollisionTweakFile();
    bool get_GenerateCollisionFromTweaks();
    void set_GenerateCollisionFromTweaks(bool value);
    bool get_GenerateCollisionFromComponents();
    void set_GenerateCollisionFromComponents(bool value);
    void* get_DefaultCollisionSet();
    void* get_UpTarget();
    void* get_AppliedAcceleration();
    bool get_FreezeCenterOfGravity();
    void set_FreezeCenterOfGravity(bool value);
    float& get_RelativeAngleToIntentDirection();
    float& get_InputDirectionZ();
    void* get_OnMotionParmChangedEvent();
    static _Script_CoreUObject::Class* static_class();
    bool UpdateConstrainedOrientation(int32_t constraintID, _Script_RsTechRT::RsGeoLocator& Orientation, float OrientationStrength);
    bool UpdateConstrainedBoneLocation(int32_t constraintID, void* BoneName, _Script_RsTechRT::RsGeoLocator& Location, _Script_CoreUObject::Vector2D linearRange, _Script_CoreUObject::Vector axisOrPlaneNormal, _Script_CoreUObject::Vector BoneOffset, float Springiness, float SpringDamping);
    void Unfreeze();
    void SetVisualDamping(float motionDampFactor, float motionDampOffSpeed, float orientationDampFactor, float orientationDampOffSpeed);
    void SetUseGravityOverride(bool shouldOverride);
    void SetRsVelocity(_Script_CoreUObject::Vector NewVelocity);
    void SetRsAngularVelocity(_Script_CoreUObject::Vector NewVelocity);
    void SetRootMotionDropOffCheckEnabled(bool Enabled, bool shouldOverride);
    bool SetMotionTweaks(_Script_RsTechRT::RsTweaks* MotionTweaks);
    bool SetMotionParm(void* parmName);
    void SetMaintainedVelocityTarget(_Script_CoreUObject::Vector VelocityTarget, void* velocityBase, bool inHorizontalPlane);
    void SetIsOverridingRootMotionDropOffCheck(bool shouldOverride);
    void SetGravityOverride(_Script_CoreUObject::Vector Gravity, bool shouldOverride);
    bool SetCollisionFromTweaks(void* tweakName, bool replaceOldTweaks);
    bool SetCollisionFromComponents(void* SetName, bool replaceOldComponentCollision);
    bool SetCollisionFromAll(void* SetName, bool replaceOldCollision);
    void SetAimDirectionMode(void* Mode);
    void ResetVisualDamping();
    bool ReleaseConstraint(int32_t constraintID);
    bool PushMotionTweaks(_Script_RsTechRT::RsTweaks* MotionTweaks, float TweenTime, void*& InstanceName);
    bool PushMotionParm(void* parmName, float TweenTime, void* InstanceName);
    void PushInfluence(_Script_RsTechRT::RsInfluence& influence, bool isImpulse, bool overrideExisting);
    bool PopMotionTweaks(_Script_RsTechRT::RsTweaks* MotionTweaks, float TweenTime, void*& InstanceName);
    bool PopMotionParm(void* parmName, float TweenTime, void* InstanceName);
    void NotifyRootAttachmentChanged(bool bIsAttached);
    bool IsMotionParmActive(void* parmName);
    bool GetUseGravityOverride();
    _Script_RsTechRT::RsTweaks* GetTweaks(void* tweaksName);
    _Script_CoreUObject::Vector GetRsVelocity();
    float GetMotionSample(void* motionSample);
    _Script_CoreUObject::Vector GetMaxVelocityInPadDirection();
    _Script_CoreUObject::Vector GetMaxVelocityInDirection(_Script_CoreUObject::Vector& Direction);
    float GetLean();
    void GetKineticWorldLocation(_Script_CoreUObject::Transform& WorldLocation);
    bool GetIsRootMotionDropOffCheckEnabled();
    bool GetIsOverridingRootMotionDropOffCheck();
    _Script_CoreUObject::Vector GetGravityOverride();
    _Script_CoreUObject::Vector GetGravity();
    _Script_RsTechRT::RsTopology GetExtrapolatedTopology(float lookAhead);
    void* GetCurrentCollisionTweaks();
    float GetControllerInflexion();
    _Script_CoreUObject::Vector GetAngularVelocity(float Dt);
    void* GetAimDirectionMode();
    void Freeze();
    bool EnableClampToTopology(bool enable);
    bool DisableClampToTopology();
    void DebugToggleCheatFlying();
    bool DebugGetResolvedMotionParm(void*& resolvedMotionParm);
    bool DebugGetMotionParmStack(void*& motionParmStack);
    int32_t ConstrainOrientation(_Script_RsTechRT::RsGeoLocator& Orientation, float OrientationStrength);
    int32_t ConstrainBoneToLocation(void* BoneName, _Script_RsTechRT::RsGeoLocator& Location, void* positionType, void* orientationType, _Script_CoreUObject::Vector2D linearRange, _Script_CoreUObject::Vector axisOrPlaneNormal, _Script_CoreUObject::Vector BoneOffset, float Springiness, float SpringDamping);
    void ClearPendingInfluence(void* DeferredInfluence, bool overrideExisting);
    void ClearMaintainedVelocity();
    void ClearCollisionFromTweaks();
    void ApplyRsVelocityImpulse(_Script_CoreUObject::Vector Impulse);
}; // Size: 0x25eb0
#pragma pack(pop)
}
