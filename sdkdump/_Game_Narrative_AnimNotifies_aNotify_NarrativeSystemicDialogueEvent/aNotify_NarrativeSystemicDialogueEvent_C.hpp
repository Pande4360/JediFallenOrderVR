#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotify.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Game_Narrative_AnimNotifies_aNotify_NarrativeSystemicDialogueEvent {
#pragma pack(push, 1)
struct aNotify_NarrativeSystemicDialogueEvent_C : public _Script_Engine::AnimNotify {
    private: char pad_38[0x30]; public:
    void* get_SystemicEventContext();
    void* get_CustomContent();
    bool get_DoAffirmOnSuccess();
    void set_DoAffirmOnSuccess(bool value);
    static _Script_CoreUObject::Class* static_class();
    bool Received_Notify0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation);
}; // Size: 0x68
#pragma pack(pop)
}
