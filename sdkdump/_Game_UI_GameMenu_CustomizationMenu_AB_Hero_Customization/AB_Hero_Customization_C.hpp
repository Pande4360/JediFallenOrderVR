#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsPlayerAnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_CustomizationMenu_AB_Hero_Customization {
#pragma pack(push, 1)
struct AB_Hero_Customization_C : public _Script_RsGameTechRT::RsPlayerAnimInstance {
    private: char pad_11c0[0x11c8]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_ModifyBone_8777D34D4963A7FE42A1AEB5F8826FC2();
    void* get_AnimGraphNode_ModifyBone_32C298534C9C7098AD568DA10DFCDA48();
    void* get_AnimGraphNode_ModifyBone_7574B6574C0AE82737C2CAA58F330CAD();
    void* get_AnimGraphNode_ModifyBone_77470F26458F21B54B2F67874DD53EB5();
    void* get_AnimGraphNode_ModifyBone_157B94D24919789CACD5ADB0B228B7B6();
    void* get_AnimGraphNode_ModifyBone_098638FD4951D256E1BB849541429596();
    void* get_AnimGraphNode_ModifyBone_E79D3F3C4D8A00944B3E7CAF9441B958();
    void* get_AnimGraphNode_ModifyBone_FD204A124E71FC2C763DAB9BB8DB32F0();
    void* get_AnimGraphNode_ModifyBone_DDBA3BD24D173F12BF9205A809DD8FBF();
    void* get_AnimGraphNode_ModifyBone_553DC5EE41E81BE9403B3BA4AE40663E();
    void* get_AnimGraphNode_ModifyBone_C21624C1463A5A43B2442695CEF65A26();
    void* get_AnimGraphNode_ModifyBone_BEF6029543A58A92E2271D928B6F7AB1();
    void* get_AnimGraphNode_Root_1216FD9949DF12D8DF76E69876153B64();
    void* get_AnimGraphNode_ComponentToLocalSpace_E02936564621ACAC29FCB8B5C07507F8();
    void* get_AnimGraphNode_SequencePlayer_E523759D42537ED2E96AB1A0777BEBA0();
    void* get_AnimGraphNode_LocalToComponentSpace_055CFDFC4D6E7394A429C88DDEB86725();
    void* get_AnimGraphNode_Slot_FAD0FF26465B8CAA30E7D3A7B1887410();
    void* get_AnimGraphNode_ModifyBone_A41FBA9E471571D0254DC6B335C85BC3();
    float& get_vestJiggle();
    static _Script_CoreUObject::Class* static_class();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_Customization_AnimGraphNode_ModifyBone_DDBA3BD24D173F12BF9205A809DD8FBF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_Customization_AnimGraphNode_ModifyBone_FD204A124E71FC2C763DAB9BB8DB32F0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_Customization_AnimGraphNode_ModifyBone_E79D3F3C4D8A00944B3E7CAF9441B958();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_Customization_AnimGraphNode_ModifyBone_098638FD4951D256E1BB849541429596();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_Customization_AnimGraphNode_ModifyBone_157B94D24919789CACD5ADB0B228B7B6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_Customization_AnimGraphNode_ModifyBone_553DC5EE41E81BE9403B3BA4AE40663E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_Customization_AnimGraphNode_ModifyBone_77470F26458F21B54B2F67874DD53EB5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_Customization_AnimGraphNode_ModifyBone_7574B6574C0AE82737C2CAA58F330CAD();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_Customization_AnimGraphNode_ModifyBone_C21624C1463A5A43B2442695CEF65A26();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_Customization_AnimGraphNode_ModifyBone_A41FBA9E471571D0254DC6B335C85BC3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_Customization_AnimGraphNode_ModifyBone_BEF6029543A58A92E2271D928B6F7AB1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_Customization_AnimGraphNode_ModifyBone_32C298534C9C7098AD568DA10DFCDA48();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_Customization_AnimGraphNode_ModifyBone_8777D34D4963A7FE42A1AEB5F8826FC2();
    void ExecuteUbergraph_AB_Hero_Customization(int32_t EntryPoint);
}; // Size: 0x2388
#pragma pack(pop)
}
