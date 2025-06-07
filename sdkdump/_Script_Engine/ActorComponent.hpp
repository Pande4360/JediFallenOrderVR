#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct AssetUserData;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ActorComponent : public _Script_CoreUObject::Object {
    private: char pad_28[0x148]; public:
    void* get_PrimaryComponentTick();
    void* get_ComponentTags();
    float& get_DistanceForReducingTickRate();
    float& get_DistanceReducedTickInterval();
    void* get_DistanceReducedTickIntervalModifiers();
    float& get_DistanceForDisablingTick();
    void* get_AssetUserData();
    bool get_bReplicates();
    void set_bReplicates(bool value);
    bool get_bNetAddressable();
    void set_bNetAddressable(bool value);
    bool get_bAutoActivate();
    void set_bAutoActivate(bool value);
    bool get_bIsActive();
    void set_bIsActive(bool value);
    bool get_bEditableWhenInherited();
    void set_bEditableWhenInherited(bool value);
    bool get_bCanEverAffectNavigation();
    void set_bCanEverAffectNavigation(bool value);
    bool get_bForceOwnerSaveGameSerialized();
    void set_bForceOwnerSaveGameSerialized(bool value);
    bool get_bIsEditorOnly();
    void set_bIsEditorOnly(bool value);
    void* get_CreationMethod();
    void* get_UCSModifiedProperties();
    void* get_CustomSceneName();
    bool get_bForceCustomScene();
    void set_bForceCustomScene(bool value);
    void* get_OnComponentActivated();
    void* get_OnComponentDeactivated();
    static _Script_CoreUObject::Class* static_class();
    void ToggleActive();
    bool ShouldInheritOwnersCustomTimeDilation();
    void SetTickGroup(void* NewTickGroup);
    void SetTickableWhenPaused(bool bTickableWhenPaused);
    void SetShouldInheritOwnersCustomTimeDilation(bool Value);
    void SetIsReplicated(bool ShouldReplicate);
    void SetCustomSceneName(void* Name, bool bForce);
    void SetComponentTickInterval(float TickInterval);
    void SetComponentTickEnabled(bool bEnabled);
    void SetAutoActivate(bool bNewAutoActivate);
    void SetActive(bool bNewActive, bool bReset);
    void RemoveTickPrerequisiteComponent(_Script_Engine::ActorComponent* PrerequisiteComponent);
    void RemoveTickPrerequisiteActor(_Script_Engine::Actor* PrerequisiteActor);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(void* EndPlayReason);
    void ReceiveBeginPlay();
    void OnRep_IsActive();
    void K2_DestroyComponent(_Script_CoreUObject::Object* Object);
    bool IsComponentTickEnabled();
    bool IsBeingDestroyed();
    bool IsActive();
    _Script_Engine::Actor* GetOwner();
    float GetComponentTickInterval();
    _Script_Engine::AssetUserData* GetAssetUserDataOfClass(void* InUserDataClass);
    void Deactivate();
    bool ComponentHasTag(void* Tag);
    void AddTickPrerequisiteComponent(_Script_Engine::ActorComponent* PrerequisiteComponent);
    void AddTickPrerequisiteActor(_Script_Engine::Actor* PrerequisiteActor);
    void Activate(bool bReset);
}; // Size: 0x170
#pragma pack(pop)
}
