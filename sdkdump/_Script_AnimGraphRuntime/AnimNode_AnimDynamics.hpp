#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_SkeletalControlBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_AnimDynamics : public AnimNode_SkeletalControlBase {
    private: char pad_f0[0x2b0]; public:
    void* get_SimulationSpace();
    void* get_RelativeSpaceBone();
    bool get_bChain();
    void set_bChain(bool value);
    void* get_BoundBone();
    void* get_ChainEnd();
    void* get_BoxExtents();
    void* get_LocalJointOffset();
    float& get_GravityScale();
    void* get_GravityOverride();
    bool get_bUseGravityOverride();
    void set_bUseGravityOverride(bool value);
    bool get_bLinearSpring();
    void set_bLinearSpring(bool value);
    bool get_bAngularSpring();
    void set_bAngularSpring(bool value);
    float& get_LinearSpringConstant();
    float& get_AngularSpringConstant();
    bool get_bEnableWind();
    void set_bEnableWind(bool value);
    bool get_bWindWasEnabled();
    void set_bWindWasEnabled(bool value);
    float& get_WindScale();
    void* get_ComponentLinearAccScale();
    void* get_ComponentLinearVelScale();
    void* get_ComponentAppliedLinearAccClamp();
    bool get_bOverrideLinearDamping();
    void set_bOverrideLinearDamping(bool value);
    float& get_LinearDampingOverride();
    bool get_bOverrideAngularDamping();
    void set_bOverrideAngularDamping(bool value);
    float& get_AngularDampingOverride();
    bool get_bOverrideAngularBias();
    void set_bOverrideAngularBias(bool value);
    float& get_AngularBiasOverride();
    bool get_bDoUpdate();
    void set_bDoUpdate(bool value);
    bool get_bDoEval();
    void set_bDoEval(bool value);
    int32_t& get_NumSolverIterationsPreUpdate();
    int32_t& get_NumSolverIterationsPostUpdate();
    void* get_ConstraintSetup();
    bool get_bUsePlanarLimit();
    void set_bUsePlanarLimit(bool value);
    void* get_PlanarLimits();
    bool get_bUseSphericalLimits();
    void set_bUseSphericalLimits(bool value);
    void* get_SphericalLimits();
    void* get_CollisionType();
    float& get_SphereCollisionRadius();
    void* get_ExternalForce();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3a0
#pragma pack(pop)
}
