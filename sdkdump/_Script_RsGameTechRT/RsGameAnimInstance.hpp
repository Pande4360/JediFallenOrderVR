#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsTechRT\rsAnimInstance.hpp"
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsIKModifier;
}
namespace _Script_RsGameTechRT {
struct RsAnimMarkupData;
}
namespace _Script_RsGameTechRT {
struct RsIKOverride;
}
namespace _Script_RsGameTechRT {
struct RsIKOverrideModifier;
}
namespace _Script_RsGameTechRT {
struct RsIKDisableIKModifier;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsGameAnimInstance : public _Script_RsTechRT::rsAnimInstance {
    private: char pad_7a0[0x970]; public:
    bool get_bHasLookAtTarget();
    void set_bHasLookAtTarget(bool value);
    float& get_LookAtYaw();
    float& get_LookAtPitch();
    float& get_TargetAimYaw();
    float& get_TargetAimPitch();
    void* get_CheapIkHipBoneName();
    float& get_CheapIkHipsBlendSpeed();
    bool get_bCanEverDoCheapIk();
    void set_bCanEverDoCheapIk(bool value);
    float& get_CheapIkTraceDistance();
    float& get_CheapIkComponentOffset();
    void* get_CurrentCombatState();
    bool get_bIsInWater();
    void set_bIsInWater(bool value);
    _Script_Engine::DataTable*& get_AnimationMarkupTable();
    void* get_IkState();
    static _Script_CoreUObject::Class* static_class();
    void SetOverrideIkOffsetForNextTopologyActivation(_Script_CoreUObject::Vector& Offset);
    int32_t RemoveIKModifier(_Script_RsGameTechRT::RsIKModifier* Modifier);
    bool GetSlotAnimMarkupInfoByAnimName(void* AnimName, _Script_RsGameTechRT::RsAnimMarkupData& AnimInfo);
    bool GetSlotAnimMarkupInfo(void* SlotName, bool bIsForTransition, void*& AnimName, _Script_RsGameTechRT::RsAnimMarkupData& AnimInfo);
    void ClearOverrideIkOffsetForNextTopologyActivation();
    _Script_RsGameTechRT::RsIKOverrideModifier* AddIkOverrideForDuration(_Script_RsGameTechRT::RsIKOverride& IkOverride, float Duration);
    _Script_RsGameTechRT::RsIKOverrideModifier* AddIkOverride(_Script_RsGameTechRT::RsIKOverride& IkOverride);
    int32_t AddIKModifier(_Script_RsGameTechRT::RsIKModifier* Modifier);
    _Script_RsGameTechRT::RsIKDisableIKModifier* AddDisableIkModifier(void*& BonesToDisable);
}; // Size: 0x1110
#pragma pack(pop)
}
