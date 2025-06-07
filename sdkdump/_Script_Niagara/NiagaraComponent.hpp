#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
namespace _Script_Niagara {
struct NiagaraSystem;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct LinearColor;
}
namespace _Script_CoreUObject {
struct Vector4;
}
namespace _Script_CoreUObject {
struct Quat;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraComponent : public _Script_Engine::PrimitiveComponent {
    private: char pad_b30[0x170]; public:
    _Script_Niagara::NiagaraSystem*& get_Asset();
    void* get_OverrideParameters();
    bool get_bForceSolo();
    void set_bForceSolo(bool value);
    bool get_bAutoDestroy();
    void set_bAutoDestroy(bool value);
    bool get_bRenderingEnabled();
    void set_bRenderingEnabled(bool value);
    bool get_bAutoManageAttachment();
    void set_bAutoManageAttachment(bool value);
    void* get_AutoAttachParent();
    void* get_AutoAttachSocketName();
    void* get_AutoAttachLocationRule();
    void* get_AutoAttachRotationRule();
    void* get_AutoAttachScaleRule();
    static _Script_CoreUObject::Class* static_class();
    void SetSeekDelta(float InSeekDelta);
    void SetRenderingEnabled(bool bInRenderingEnabled);
    void SetPaused(bool bInPaused);
    void SetNiagaraVariableVec4(void* InVariableName, _Script_CoreUObject::Vector4& InValue);
    void SetNiagaraVariableVec3(void* InVariableName, _Script_CoreUObject::Vector InValue);
    void SetNiagaraVariableVec2(void* InVariableName, _Script_CoreUObject::Vector2D InValue);
    void SetNiagaraVariableQuat(void* InVariableName, _Script_CoreUObject::Quat& InValue);
    void SetNiagaraVariableLinearColor(void* InVariableName, _Script_CoreUObject::LinearColor& InValue);
    void SetNiagaraVariableInt(void* InVariableName, int32_t InValue);
    void SetNiagaraVariableFloat(void* InVariableName, float InValue);
    void SetNiagaraVariableBool(void* InVariableName, bool InValue);
    void SetNiagaraVariableActor(void* InVariableName, _Script_Engine::Actor* Actor);
    void SetMaxSimTime(float InMaxTime);
    void SetForceSolo(bool bInForceSolo);
    void SetDesiredAge(float InDesiredAge);
    void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
    void SetAutoDestroy(bool bInAutoDestroy);
    void SetAutoAttachmentParameters(_Script_Engine::SceneComponent* Parent, void* SocketName, void* LocationRule, void* RotationRule, void* ScaleRule);
    void SetAsset(_Script_Niagara::NiagaraSystem* InAsset);
    void SetAgeUpdateMode(void* InAgeUpdateMode);
    void SeekToDesiredAge(float InDesiredAge);
    void ResetSystem();
    void ReinitializeSystem();
    bool IsPaused();
    float GetSeekDelta();
    void* GetNiagaraParticleValueVec3_DebugOnly(void* InEmitterName, void* InValueName);
    void* GetNiagaraParticleValues_DebugOnly(void* InEmitterName, void* InValueName);
    void* GetNiagaraParticlePositions_DebugOnly(void* InEmitterName);
    float GetMaxSimTime();
    bool GetForceSolo();
    float GetDesiredAge();
    _Script_Niagara::NiagaraSystem* GetAsset();
    void* GetAgeUpdateMode();
    void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
    void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds);
}; // Size: 0xca0
#pragma pack(pop)
}
