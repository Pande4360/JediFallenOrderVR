#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_Navigation_Rope_BP_BaseRope\BP_BaseRope_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_Navigation_Rope_BP_ClimbRope {
#pragma pack(push, 1)
struct BP_ClimbRope_C : public _Game_WorldInteracts_Navigation_Rope_BP_BaseRope::BP_BaseRope_C {
    private: char pad_458[0x10]; public:
    void* get_UberGraphFrame0();
    bool get_AnchorRopeEndpoint();
    void set_AnchorRopeEndpoint(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void ReceiveTick0(float DeltaSeconds);
    void ExecuteUbergraph_BP_ClimbRope(int32_t EntryPoint);
}; // Size: 0x468
#pragma pack(pop)
}
