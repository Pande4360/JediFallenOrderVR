#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_EnoCordova_Rig_AB_PostProcess_EnoCordova {
#pragma pack(push, 1)
struct AB_PostProcess_EnoCordova_C : public _Script_Engine::AnimInstance {
    private: char pad_3b0[0xeb0]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root_1FC0602A4715824698AB23A52D0BEBA2();
    void* get_AnimGraphNode_SubInput_4BA9A23F4AC7B0D0E43EFC9787C1BDCD();
    void* get_AnimGraphNode_LocalToComponentSpace_2ED3164C46C060B549795BA639664533();
    void* get_AnimGraphNode_ComponentToLocalSpace_35FD5DB646C0B3224F0E2A98205B7B12();
    void* get_AnimGraphNode_RigidBody_E8ED6B754B6CD09DD7D36ABB51FA91A6();
    static _Script_CoreUObject::Class* static_class();
    void ExecuteUbergraph_AB_PostProcess_EnoCordova(int32_t EntryPoint);
}; // Size: 0x1260
#pragma pack(pop)
}
