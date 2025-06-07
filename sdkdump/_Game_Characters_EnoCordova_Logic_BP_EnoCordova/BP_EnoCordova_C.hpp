#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Narrative_Hub_Chumps_BP_ChumpBase\BP_ChumpBase_C.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_EnoCordova_Logic_BP_EnoCordova {
#pragma pack(push, 1)
struct BP_EnoCordova_C : public _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C {
    private: char pad_2bc8[0x8]; public:
    _Script_Engine::SkeletalMeshComponent*& get_face();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
}; // Size: 0x2bd0
#pragma pack(pop)
}
