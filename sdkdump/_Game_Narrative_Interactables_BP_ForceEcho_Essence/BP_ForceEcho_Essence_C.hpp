#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Narrative_Interactables_BP_ForceEcho_Base\BP_ForceEcho_Base_C.hpp"
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Narrative_Interactables_BP_ForceEcho_Essence {
#pragma pack(push, 1)
struct BP_ForceEcho_Essence_C : public _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C {
    private: char pad_5e8[0x18]; public:
    void* get_UberGraphFrame0();
    _Script_Engine::ChildActorComponent*& get_ForceEssence();
    void* get_EssenceType();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ScriptedAnimBinding0();
    void ExecuteUbergraph_BP_ForceEcho_Essence(int32_t EntryPoint);
}; // Size: 0x600
#pragma pack(pop)
}
