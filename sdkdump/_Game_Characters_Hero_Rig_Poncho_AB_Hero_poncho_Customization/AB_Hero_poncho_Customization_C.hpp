#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsTechRT\rsAnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho_Customization {
#pragma pack(push, 1)
struct AB_Hero_poncho_Customization_C : public _Script_RsTechRT::rsAnimInstance {
    private: char pad_7a0[0x338]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root_59A9175747C0936BC688EC941F817DD0();
    void* get_AnimGraphNode_CopyPoseFromMesh_ACFC014A43FC9826EE4138BD8A6BF974();
    void* get_AnimGraphNode_Slot_B0C58988499B931C93EE99B1B3500AD2();
    void* get_AnimGraphNode_SequencePlayer_8A5875D34821D8DBABBDB9911BDAD301();
    void* get_RsLayeredBlendGraphNode_1ED22CE84525A8D4B6B6158AAEB931E9();
    bool get_isLedge();
    void set_isLedge(bool value);
    bool get_isClimb();
    void set_isClimb(bool value);
    bool get_isAir();
    void set_isAir(bool value);
    bool get_isSteepSlope();
    void set_isSteepSlope(bool value);
    bool get_IsCocooned();
    void set_IsCocooned(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ExecuteUbergraph_AB_Hero_poncho_Customization(int32_t EntryPoint);
}; // Size: 0xad8
#pragma pack(pop)
}
