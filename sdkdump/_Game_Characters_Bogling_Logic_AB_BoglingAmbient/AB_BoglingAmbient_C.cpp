#include "..\FUObjectArray.hpp"
#include "AB_BoglingAmbient_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_Root_6B56C9AD490F77BA7E5CF183D3AF686F() {
    return (void*)((uintptr_t)this + 0x3b8);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_StateMachine_602C331D4D4F98ED101554B250F5FC15() {
    return (void*)((uintptr_t)this + 0xe80);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_TransitionResult_CDA89EF84CBDC9B8E9AB28990E784D26() {
    return (void*)((uintptr_t)this + 0x4d8);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_StateResult_AA9CD2434047B895C9CA8D8F6A5EC634() {
    return (void*)((uintptr_t)this + 0xd48);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_TransitionResult_C27A544F47537F43298C4880DC1FAB45() {
    return (void*)((uintptr_t)this + 0x400);
}
void _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::set_Popper(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf68 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_TransitionResult_FE48007D4B9E959159235B8C6B0CBF50() {
    return (void*)((uintptr_t)this + 0x448);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_TransitionResult_A63A7EC549F361E541A7E6940FDEB90A() {
    return (void*)((uintptr_t)this + 0x490);
}
void _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::set_popDown(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf69 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf69 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_TransitionResult_BEB465B64F0773A5077A118C5D9AF50F() {
    return (void*)((uintptr_t)this + 0x520);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_TransitionResult_6E10CFBC453FB479953EADBCF7ED72E5() {
    return (void*)((uintptr_t)this + 0x568);
}
void _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::RerollRandoms() {
    return;
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_TransitionResult_04B1748E4A64AD1C7B7E709326024E05() {
    return (void*)((uintptr_t)this + 0x5b0);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_TransitionResult_46FB59474BEF614BFD21F08BB5107391() {
    return (void*)((uintptr_t)this + 0x5f8);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_TransitionResult_249602984E008DD1D7F49694E5A1AEF1() {
    return (void*)((uintptr_t)this + 0x640);
}
void _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BoglingAmbient_AnimGraphNode_TransitionResult_CDA89EF84CBDC9B8E9AB28990E784D26() {
    return;
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_TransitionResult_AD1AE5544285392C0260C39213FAD8AC() {
    return (void*)((uintptr_t)this + 0x688);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_StateResult_69BBF0F3419AED08A78621B2FEC251D1() {
    return (void*)((uintptr_t)this + 0xb68);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_TransitionResult_176639DA4CBC1279ADC8029780D85C11() {
    return (void*)((uintptr_t)this + 0x6d0);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_TransitionResult_FA130C2C43C162F4631633BBC9C28B0C() {
    return (void*)((uintptr_t)this + 0x718);
}
bool _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_Popper() {
    return (*(uint8_t*)((uintptr_t)this + 0xf68 + 0)) & 1 != 0;
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_TransitionResult_6A4F6D3F4AA3F64C54B1AE9FFC1B9DB4() {
    return (void*)((uintptr_t)this + 0x760);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_SequencePlayer_A0F0B6024B5D0D51E32A369369BE6805() {
    return (void*)((uintptr_t)this + 0xac0);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_TransitionResult_46FBFE08453853DFAE864680355D3DD7() {
    return (void*)((uintptr_t)this + 0x7a8);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_SequencePlayer_D7BD1E66419322FDDD655383F772F8FA() {
    return (void*)((uintptr_t)this + 0x7f0);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_StateResult_47F4E1D9447FD3A0DBD1389843E4C584() {
    return (void*)((uintptr_t)this + 0x898);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_SequencePlayer_74A6857F4222A25C46C661BC04D9C441() {
    return (void*)((uintptr_t)this + 0x8e0);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_StateResult_71651643473CB46A84AAC8B48F954E0D() {
    return (void*)((uintptr_t)this + 0x988);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_SequencePlayer_8D26B45E4EEB3955CB8A69A02D991B6E() {
    return (void*)((uintptr_t)this + 0x9d0);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_StateResult_3A715B4743810A617E5FB393FAB0B654() {
    return (void*)((uintptr_t)this + 0xa78);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_SequencePlayer_B9F6A11849942CFBC109B6B509936FD2() {
    return (void*)((uintptr_t)this + 0xbb0);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_StateResult_8FF87FDA4DD9E950B8E1A7B8E36BA812() {
    return (void*)((uintptr_t)this + 0xc58);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_SequencePlayer_19F8DFE149A98B9F506D6284892DFAB2() {
    return (void*)((uintptr_t)this + 0xca0);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_SequencePlayer_8BEBFAEC4034FBD1A6551ABA44DF73DC() {
    return (void*)((uintptr_t)this + 0xd90);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_AnimGraphNode_StateResult_5BDD52934FECE6251E1046A2D2E7A023() {
    return (void*)((uintptr_t)this + 0xe38);
}
void* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_Direction() {
    return (void*)((uintptr_t)this + 0xf60);
}
float& _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_Playrate() {
    return *(float*)((uintptr_t)this + 0xf64);
}
bool _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::get_popDown() {
    return (*(uint8_t*)((uintptr_t)this + 0xf69 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/Characters/Bogling/Logic/AB_BoglingAmbient.AB_BoglingAmbient_C");
    return result;
}
void _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BoglingAmbient_AnimGraphNode_TransitionResult_AD1AE5544285392C0260C39213FAD8AC() {
    return;
}
void _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BoglingAmbient_AnimGraphNode_TransitionResult_6A4F6D3F4AA3F64C54B1AE9FFC1B9DB4() {
    return;
}
void _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BoglingAmbient_AnimGraphNode_TransitionResult_46FBFE08453853DFAE864680355D3DD7() {
    return;
}
void _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BoglingAmbient_AnimGraphNode_TransitionResult_FE48007D4B9E959159235B8C6B0CBF50() {
    return;
}
void _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BoglingAmbient_AnimGraphNode_TransitionResult_6E10CFBC453FB479953EADBCF7ED72E5() {
    return;
}
void _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BoglingAmbient_AnimGraphNode_TransitionResult_46FB59474BEF614BFD21F08BB5107391() {
    return;
}
void _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BoglingAmbient_AnimGraphNode_TransitionResult_04B1748E4A64AD1C7B7E709326024E05() {
    return;
}
void _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::BlueprintBeginPlay0() {
    return;
}
void _Game_Characters_Bogling_Logic_AB_BoglingAmbient::AB_BoglingAmbient_C::ExecuteUbergraph_AB_BoglingAmbient(int32_t EntryPoint) {
    return;
}
