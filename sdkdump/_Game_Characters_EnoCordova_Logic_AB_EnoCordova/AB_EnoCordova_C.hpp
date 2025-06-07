#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_EnoCordova_Logic_AB_EnoCordova {
#pragma pack(push, 1)
struct AB_EnoCordova_C : public _Script_Engine::AnimInstance {
    private: char pad_3b0[0x168]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root_50FBE2A64153027EC1CF30A459DF3F7A();
    void* get_AnimGraphNode_Slot_8C3DA4E14726F8300113ECA376DC8C12();
    void* get_AnimGraphNode_SequencePlayer_3C498D604A67C0832994E18B26B62B2F();
    static _Script_CoreUObject::Class* static_class();
    void ExecuteUbergraph_AB_EnoCordova(int32_t EntryPoint);
}; // Size: 0x518
#pragma pack(pop)
}
