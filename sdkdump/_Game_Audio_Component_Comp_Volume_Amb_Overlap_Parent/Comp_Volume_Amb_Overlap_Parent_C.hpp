#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Audio_Component_Comp_SW_Amb_Overlap\Comp_SW_Amb_Overlap_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Audio_Component_Comp_Volume_Amb_Overlap_Parent {
#pragma pack(push, 1)
struct Comp_Volume_Amb_Overlap_Parent_C : public _Game_Audio_Component_Comp_SW_Amb_Overlap::Comp_SW_Amb_Overlap_C {
    private: char pad_320[0x8]; public:
    void* get_UberGraphFrame0();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay0();
    void TriggerBeginOverlap(_Script_Engine::Actor* Other_Actor);
    void Trigger_End_Overlap(_Script_Engine::Actor* Other_Actor);
    void Begin();
    void End();
    void ExecuteUbergraph_Comp_Volume_Amb_Overlap_Parent(int32_t EntryPoint);
}; // Size: 0x328
#pragma pack(pop)
}
