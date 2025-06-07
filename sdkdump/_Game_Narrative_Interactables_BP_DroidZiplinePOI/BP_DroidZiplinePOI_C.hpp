#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_AI_BP_POI\BP_POI_C.hpp"
namespace _Script_RsGameTechRT {
struct RsBoxDistanceTriggerComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Narrative_Interactables_BP_DroidZiplinePOI {
#pragma pack(push, 1)
struct BP_DroidZiplinePOI_C : public _Game_WorldInteracts_AI_BP_POI::BP_POI_C {
    private: char pad_5a8[0x10]; public:
    void* get_UberGraphFrame0();
    _Script_RsGameTechRT::RsBoxDistanceTriggerComponent*& get_RsBoxDistanceTrigger();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void BndEvt__RsBoxDistanceTrigger_K2Node_ComponentBoundEvent_0_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor);
    void ExecuteUbergraph_BP_DroidZiplinePOI(int32_t EntryPoint);
}; // Size: 0x5b8
#pragma pack(pop)
}
