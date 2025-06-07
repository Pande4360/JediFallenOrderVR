#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "PrimitiveComponent.hpp"
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleSystemComponent : public PrimitiveComponent {
    private: char pad_b30[0x250]; public:
    _Script_Engine::ParticleSystem*& get_Template();
    void* get_EmitterMaterials();
    void* get_SkelMeshComponents();
    bool get_bResetOnDetach();
    void set_bResetOnDetach(bool value);
    bool get_bUpdateOnDedicatedServer();
    void set_bUpdateOnDedicatedServer(bool value);
    bool get_bAllowRecycling();
    void set_bAllowRecycling(bool value);
    bool get_bAutoManageAttachment();
    void set_bAutoManageAttachment(bool value);
    bool get_bWarmingUp();
    void set_bWarmingUp(bool value);
    bool get_bOverrideLODMethod();
    void set_bOverrideLODMethod(bool value);
    bool get_bSkipUpdateDynamicDataDuringTick();
    void set_bSkipUpdateDynamicDataDuringTick(bool value);
    void* get_LODMethod();
    void* get_RequiredSignificance();
    void* get_InstanceParameters();
    void* get_OnParticleSpawn();
    void* get_OnParticleBurst();
    void* get_OnParticleDeath();
    void* get_OnParticleCollide();
    void* get_OldPosition();
    void* get_PartSysVelocity();
    float& get_WarmupTime();
    float& get_WarmupTickRate();
    float& get_SecondsBeforeInactive();
    float& get_MaxTimeBeforeForceUpdateTransform();
    void* get_ReplayClips();
    float& get_CustomTimeDilation();
    void* get_AutoAttachParent();
    void* get_AutoAttachSocketName();
    void* get_AutoAttachLocationRule();
    void* get_AutoAttachRotationRule();
    void* get_AutoAttachScaleRule();
    void* get_OnSystemFinished();
    static _Script_CoreUObject::Class* static_class();
    void SetVectorParameter(void* ParameterName, _Script_CoreUObject::Vector Param);
    void SetTrailSourceData(void* InFirstSocketName, void* InSecondSocketName, void* InWidthMode, float InWidth);
    void SetTemplate(_Script_Engine::ParticleSystem* NewTemplate);
    void SetMaterialParameter(void* ParameterName, _Script_Engine::MaterialInterface* Param);
    void SetFloatParameter(void* ParameterName, float Param);
    void SetEmitterEnable(void* EmitterName, bool bNewEnableState);
    void SetColorParameter(void* ParameterName, _Script_CoreUObject::LinearColor Param);
    void SetBeamTargetTangent(int32_t EmitterIndex, _Script_CoreUObject::Vector NewTangentPoint, int32_t TargetIndex);
    void SetBeamTargetStrength(int32_t EmitterIndex, float NewTargetStrength, int32_t TargetIndex);
    void SetBeamTargetPoint(int32_t EmitterIndex, _Script_CoreUObject::Vector NewTargetPoint, int32_t TargetIndex);
    void SetBeamSourceTangent(int32_t EmitterIndex, _Script_CoreUObject::Vector NewTangentPoint, int32_t SourceIndex);
    void SetBeamSourceStrength(int32_t EmitterIndex, float NewSourceStrength, int32_t SourceIndex);
    void SetBeamSourcePoint(int32_t EmitterIndex, _Script_CoreUObject::Vector NewSourcePoint, int32_t SourceIndex);
    void SetBeamEndPoint(int32_t EmitterIndex, _Script_CoreUObject::Vector NewEndPoint);
    void SetAutoAttachParams(_Script_Engine::SceneComponent* Parent, void* SocketName, void* LocationType);
    void SetAutoAttachmentParameters(_Script_Engine::SceneComponent* Parent, void* SocketName, void* LocationRule, void* RotationRule, void* ScaleRule);
    void SetAllEmittersEnable(bool bNewEnableState);
    void SetActorParameter(void* ParameterName, _Script_Engine::Actor* Param);
    void ReleaseToPool();
    int32_t GetNumActiveParticles();
    _Script_Engine::MaterialInterface* GetNamedMaterial(void* InName);
    bool GetBeamTargetTangent(int32_t EmitterIndex, int32_t TargetIndex, _Script_CoreUObject::Vector& OutTangentPoint);
    bool GetBeamTargetStrength(int32_t EmitterIndex, int32_t TargetIndex, float& OutTargetStrength);
    bool GetBeamTargetPoint(int32_t EmitterIndex, int32_t TargetIndex, _Script_CoreUObject::Vector& OutTargetPoint);
    bool GetBeamSourceTangent(int32_t EmitterIndex, int32_t SourceIndex, _Script_CoreUObject::Vector& OutTangentPoint);
    bool GetBeamSourceStrength(int32_t EmitterIndex, int32_t SourceIndex, float& OutSourceStrength);
    bool GetBeamSourcePoint(int32_t EmitterIndex, int32_t SourceIndex, _Script_CoreUObject::Vector& OutSourcePoint);
    bool GetBeamEndPoint(int32_t EmitterIndex, _Script_CoreUObject::Vector& OutEndPoint);
    void GenerateParticleEvent(void* InEventName, float InEmitterTime, _Script_CoreUObject::Vector InLocation, _Script_CoreUObject::Vector InDirection, _Script_CoreUObject::Vector InVelocity);
    void EndTrails();
    _Script_Engine::MaterialInstanceDynamic* CreateNamedDynamicMaterialInstance(void* InName, _Script_Engine::MaterialInterface* SourceMaterial);
    void BeginTrails(void* InFirstSocketName, void* InSecondSocketName, void* InWidthMode, float InWidth);
}; // Size: 0xd80
#pragma pack(pop)
}
