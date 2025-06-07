#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_Navigation_Rope_BP_BaseRope\BP_BaseRope_C.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
namespace _Script_AkAudio {
struct AkBankLoadComponent;
}
namespace _Script_RsGameTechRT {
struct RsRopeAttachmentComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsRopeComponent;
}
namespace _Script_SwGame {
struct SwRopeAttachmentComponent;
}
namespace _Game_WorldInteracts_Navigation_Rope_BP_ShortcutRopeClass {
#pragma pack(push, 1)
struct BP_ShortcutRopeClass_C : public _Game_WorldInteracts_Navigation_Rope_BP_BaseRope::BP_BaseRope_C {
    private: char pad_458[0x58]; public:
    void* get_UberGraphFrame0();
    _Script_AkAudio::AkBankLoadComponent*& get_AkBankLoad();
    float& get_ZipUpLength();
    float& get_ZipDownLength();
    float& get_ZipSpeed();
    float& get_ZipDelay();
    void* get_TopDetachDestinationA();
    void* get_TopDetachDestinationB();
    float& get_DetachHorizontalSpeed();
    bool get_AirSteerDuringDetach();
    void set_AirSteerDuringDetach(bool value);
    float& get_targetLength();
    bool get_ReachedTarget();
    void set_ReachedTarget(bool value);
    bool get_StartedZip();
    void set_StartedZip(bool value);
    float& get_ZipDelayTimer();
    float& get_AttractionForce();
    float& get_TurnSpeed();
    bool get_GoingUp();
    void set_GoingUp(bool value);
    static _Script_CoreUObject::Class* static_class();
    void TurnTowardsDestination();
    void GetDetachDestination(_Script_CoreUObject::Vector& HeroOrigin, _Script_CoreUObject::Vector& Destination);
    void ShouldDetach(bool& ShouldDetach);
    void DetachToLocation(float HorizontalSpeed, float& AirTime);
    void GetDistanceAndDirection(_Script_CoreUObject::Vector from, _Script_CoreUObject::Vector to, float& Distance, _Script_CoreUObject::Vector& Direction);
    void HasReachedTarget_(bool& HasReachedTarget_);
    void Update(float Dt);
    void GetAbsoluteZipDownLength(float& ZipDownLength);
    void GetAbsoluteZipUpLength(float& ZipUpLength);
    void IsZippingUp_(bool& IsZippingUp_);
    void UserConstructionScript0();
    void BndEvt__RopeComponent_K2Node_ComponentBoundEvent_0_OnRopeAttached__DelegateSignature0(_Script_RsGameTechRT::RsRopeComponent* Rope, _Script_RsGameTechRT::RsRopeAttachmentComponent* RopeAttachment);
    void ReceiveTick0(float DeltaSeconds);
    void OnStateChanged(_Script_SwGame::SwRopeAttachmentComponent* RopeAttachment, void* OldState, void* NewState);
    void BndEvt__RopeComponent_K2Node_ComponentBoundEvent_0_OnRopeDetached__DelegateSignature(_Script_RsGameTechRT::RsRopeComponent* Rope, _Script_RsGameTechRT::RsRopeAttachmentComponent* RopeAttachment);
    void DetachToDestination();
    void ExecuteUbergraph_BP_ShortcutRopeClass(int32_t EntryPoint);
}; // Size: 0x4b0
#pragma pack(pop)
}
