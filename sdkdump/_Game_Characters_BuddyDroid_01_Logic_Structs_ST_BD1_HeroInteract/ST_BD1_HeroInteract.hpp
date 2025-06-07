#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_HeroInteract {
#pragma pack(push, 1)
struct ST_BD1_HeroInteract {
    private: char pad_0[0x18]; public:
    _Script_Engine::AnimSequenceBase*& get_HeroAnimation_32_A18876A84B2D9B276D7A539C01F84934();
    _Script_Engine::AnimSequenceBase*& get_BD1Animation_33_56860E70419121CABA2847B02E12B0BC();
    void* get_RelationshipStatus_28_6A17972747240BC0CA77A9B0F64FEA40();
    int32_t& get_Weight_29_70941F6D4835D10FD44ACC9EAF87D08F();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
