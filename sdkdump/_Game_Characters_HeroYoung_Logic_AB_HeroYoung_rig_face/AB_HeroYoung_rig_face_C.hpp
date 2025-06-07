#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_HeroYoung_Logic_AB_HeroYoung_rig_face {
#pragma pack(push, 1)
struct AB_HeroYoung_rig_face_C : public _Script_Engine::AnimInstance {
    private: char pad_3b0[0x1080]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root_A37FEE0C44D92B9FE4994B85F0BBBA74();
    void* get_RsLayeredBlendGraphNode_5A4014414147BDEC127BF0989FDC0CB2();
    void* get_AnimGraphNode_Slot_8B84D9F045EDDA5A46884DBD1056803C();
    void* get_AnimGraphNode_CopyPoseFromMesh_8CD142AB4FA537AA542F05BEF30AD8AE();
    void* get_AnimGraphNode_RigidBody_DCB0BF774E19EEDFDC648CB394362179();
    void* get_AnimGraphNode_LocalToComponentSpace_20F5093A42B19995785CEE93EF31BFC3();
    void* get_AnimGraphNode_ComponentToLocalSpace_410C8B294E0F964A1E0664A200432EAB();
    static _Script_CoreUObject::Class* static_class();
    void ExecuteUbergraph_AB_HeroYoung_rig_face(int32_t EntryPoint);
}; // Size: 0x1430
#pragma pack(pop)
}
