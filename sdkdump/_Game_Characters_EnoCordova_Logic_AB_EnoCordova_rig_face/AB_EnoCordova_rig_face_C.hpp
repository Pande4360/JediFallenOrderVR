#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_EnoCordova_Logic_AB_EnoCordova_rig_face {
#pragma pack(push, 1)
struct AB_EnoCordova_rig_face_C : public _Script_Engine::AnimInstance {
    private: char pad_3b0[0x288]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root_4700531F44C304EF7655769BB7C1C69E();
    void* get_AnimGraphNode_CopyPoseFromMesh_F368754440C83DA93E36FA87906CBFBA();
    void* get_AnimGraphNode_Slot_A92E5F6E4C9D9DD955992E893B66CD28();
    void* get_RsLayeredBlendGraphNode_0F64C7514308F71189CE3ABF7F771217();
    static _Script_CoreUObject::Class* static_class();
    void ExecuteUbergraph_AB_EnoCordova_rig_face(int32_t EntryPoint);
}; // Size: 0x638
#pragma pack(pop)
}
