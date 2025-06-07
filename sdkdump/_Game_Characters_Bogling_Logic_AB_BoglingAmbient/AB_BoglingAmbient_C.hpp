#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Bogling_Logic_AB_BoglingAmbient {
#pragma pack(push, 1)
struct AB_BoglingAmbient_C : public _Script_Engine::AnimInstance {
    private: char pad_3b0[0xbc0]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root_6B56C9AD490F77BA7E5CF183D3AF686F();
    void* get_AnimGraphNode_TransitionResult_C27A544F47537F43298C4880DC1FAB45();
    void* get_AnimGraphNode_TransitionResult_FE48007D4B9E959159235B8C6B0CBF50();
    void* get_AnimGraphNode_TransitionResult_A63A7EC549F361E541A7E6940FDEB90A();
    void* get_AnimGraphNode_TransitionResult_CDA89EF84CBDC9B8E9AB28990E784D26();
    void* get_AnimGraphNode_TransitionResult_BEB465B64F0773A5077A118C5D9AF50F();
    void* get_AnimGraphNode_TransitionResult_6E10CFBC453FB479953EADBCF7ED72E5();
    void* get_AnimGraphNode_TransitionResult_04B1748E4A64AD1C7B7E709326024E05();
    void* get_AnimGraphNode_TransitionResult_46FB59474BEF614BFD21F08BB5107391();
    void* get_AnimGraphNode_TransitionResult_249602984E008DD1D7F49694E5A1AEF1();
    void* get_AnimGraphNode_TransitionResult_AD1AE5544285392C0260C39213FAD8AC();
    void* get_AnimGraphNode_TransitionResult_176639DA4CBC1279ADC8029780D85C11();
    void* get_AnimGraphNode_TransitionResult_FA130C2C43C162F4631633BBC9C28B0C();
    void* get_AnimGraphNode_TransitionResult_6A4F6D3F4AA3F64C54B1AE9FFC1B9DB4();
    void* get_AnimGraphNode_TransitionResult_46FBFE08453853DFAE864680355D3DD7();
    void* get_AnimGraphNode_SequencePlayer_D7BD1E66419322FDDD655383F772F8FA();
    void* get_AnimGraphNode_StateResult_47F4E1D9447FD3A0DBD1389843E4C584();
    void* get_AnimGraphNode_SequencePlayer_74A6857F4222A25C46C661BC04D9C441();
    void* get_AnimGraphNode_StateResult_71651643473CB46A84AAC8B48F954E0D();
    void* get_AnimGraphNode_SequencePlayer_8D26B45E4EEB3955CB8A69A02D991B6E();
    void* get_AnimGraphNode_StateResult_3A715B4743810A617E5FB393FAB0B654();
    void* get_AnimGraphNode_SequencePlayer_A0F0B6024B5D0D51E32A369369BE6805();
    void* get_AnimGraphNode_StateResult_69BBF0F3419AED08A78621B2FEC251D1();
    void* get_AnimGraphNode_SequencePlayer_B9F6A11849942CFBC109B6B509936FD2();
    void* get_AnimGraphNode_StateResult_8FF87FDA4DD9E950B8E1A7B8E36BA812();
    void* get_AnimGraphNode_SequencePlayer_19F8DFE149A98B9F506D6284892DFAB2();
    void* get_AnimGraphNode_StateResult_AA9CD2434047B895C9CA8D8F6A5EC634();
    void* get_AnimGraphNode_SequencePlayer_8BEBFAEC4034FBD1A6551ABA44DF73DC();
    void* get_AnimGraphNode_StateResult_5BDD52934FECE6251E1046A2D2E7A023();
    void* get_AnimGraphNode_StateMachine_602C331D4D4F98ED101554B250F5FC15();
    void* get_Direction();
    float& get_Playrate();
    bool get_Popper();
    void set_Popper(bool value);
    bool get_popDown();
    void set_popDown(bool value);
    static _Script_CoreUObject::Class* static_class();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BoglingAmbient_AnimGraphNode_TransitionResult_AD1AE5544285392C0260C39213FAD8AC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BoglingAmbient_AnimGraphNode_TransitionResult_6A4F6D3F4AA3F64C54B1AE9FFC1B9DB4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BoglingAmbient_AnimGraphNode_TransitionResult_CDA89EF84CBDC9B8E9AB28990E784D26();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BoglingAmbient_AnimGraphNode_TransitionResult_46FBFE08453853DFAE864680355D3DD7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BoglingAmbient_AnimGraphNode_TransitionResult_FE48007D4B9E959159235B8C6B0CBF50();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BoglingAmbient_AnimGraphNode_TransitionResult_6E10CFBC453FB479953EADBCF7ED72E5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BoglingAmbient_AnimGraphNode_TransitionResult_46FB59474BEF614BFD21F08BB5107391();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BoglingAmbient_AnimGraphNode_TransitionResult_04B1748E4A64AD1C7B7E709326024E05();
    void BlueprintBeginPlay0();
    void RerollRandoms();
    void ExecuteUbergraph_AB_BoglingAmbient(int32_t EntryPoint);
}; // Size: 0xf70
#pragma pack(pop)
}
