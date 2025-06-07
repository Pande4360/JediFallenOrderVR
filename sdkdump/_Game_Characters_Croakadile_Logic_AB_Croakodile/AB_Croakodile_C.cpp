#include "..\FUObjectArray.hpp"
#include "AB_Croakodile_C.hpp"
#include "..\_Game_Characters_Croakadile_Logic_BP_Croakodile\BP_Croakodile_C.hpp"
#include "..\_Game_Characters__Shared_Logic_BP_BaseAI\BP_BaseAI_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_RsGameTechRT\RsAIAnimInstance.hpp"
void* _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_AnimGraphNode_StateResult_38EB4D1F4C6131C17FA1D2BE2AE6C2B7() {
    return (void*)((uintptr_t)this + 0xb650);
}
void* _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x11f0);
}
void* _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_AnimGraphNode_SaveCachedPose_C9F887D84EC8E538F6FBCBB6903F25BF() {
    return (void*)((uintptr_t)this + 0x11f8);
}
void* _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_AnimGraphNode_UseCachedPose_006728AC4A1171EE7B19EE87370483B7() {
    return (void*)((uintptr_t)this + 0x1310);
}
void* _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_AnimGraphNode_Slot_15183F914B9ED08B92E0689E96D96DB1() {
    return (void*)((uintptr_t)this + 0x1358);
}
void* _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_AnimGraphNode_Slot_4DE79F504F9CC547CA7F0DBFD06EB214() {
    return (void*)((uintptr_t)this + 0x13c8);
}
void* _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_AnimGraphNode_Slot_BCF3F51A466FBA184F6532920F449875() {
    return (void*)((uintptr_t)this + 0x1438);
}
void* _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_RsAnimMatcherGraphNode_E3BDC20D4D1B810A005C9FAC6A6AE888() {
    return (void*)((uintptr_t)this + 0x14a8);
}
void* _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_AnimGraphNode_StateMachine_1634696C4AD69D9FB7C32E8FCCF38F6C() {
    return (void*)((uintptr_t)this + 0xb698);
}
void* _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_AnimGraphNode_Root_192954914C18CEEAB79F418B2072B749() {
    return (void*)((uintptr_t)this + 0xb778);
}
void* _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_AnimGraphNode_RotationOffsetBlendSpace_705BB97D43D1F4225C4F159C8E7DF8AD() {
    return (void*)((uintptr_t)this + 0xb7c0);
}
bool _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_InAlert() {
    return (*(uint8_t*)((uintptr_t)this + 0xc270 + 0)) & 1 != 0;
}
void* _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_AnimGraphNode_SaveCachedPose_C8A123CC4BAD9E25F94D36916EF3C22A() {
    return (void*)((uintptr_t)this + 0xb9a8);
}
void* _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_AnimGraphNode_UseCachedPose_48AF212A45493A80AE858897476957B9() {
    return (void*)((uintptr_t)this + 0xbac0);
}
void _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::set_HasTongue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc272 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc272 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_AnimGraphNode_UseCachedPose_EE5516334C102B66BC40C9AA0C1CC3F9() {
    return (void*)((uintptr_t)this + 0xbb08);
}
void* _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_AnimGraphNode_BlendListByBool_D2CBA98043801059E263CBA9B003666E() {
    return (void*)((uintptr_t)this + 0xbb50);
}
void* _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_AnimGraphNode_BlendListByBool_9AC4F54A411BFAF88C4631AFF5B5AF0D() {
    return (void*)((uintptr_t)this + 0xbc20);
}
void* _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_AnimGraphNode_RotationOffsetBlendSpace_44144A914F3541EE19968F8E2D58FEF4() {
    return (void*)((uintptr_t)this + 0xbcf0);
}
void* _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_AnimGraphNode_SaveCachedPose_9456E65A42A35F6EF7CBF2866AC96171() {
    return (void*)((uintptr_t)this + 0xbed8);
}
void* _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_AnimGraphNode_UseCachedPose_22F4A60348B8AB691947118D8A45CEE8() {
    return (void*)((uintptr_t)this + 0xbff0);
}
void* _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_AnimGraphNode_UseCachedPose_82B1B2C44B49D62F03584FB4B8DAD3B5() {
    return (void*)((uintptr_t)this + 0xc038);
}
void* _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_AnimGraphNode_RotationOffsetBlendSpace_1436723845E8CED39A79778D2DB6C58A() {
    return (void*)((uintptr_t)this + 0xc080);
}
_Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C*& _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_BP_BaseAI_Ref() {
    return *(_Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C**)((uintptr_t)this + 0xc268);
}
void _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::set_InAlert(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc270 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc270 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_InForcePull() {
    return (*(uint8_t*)((uintptr_t)this + 0xc271 + 0)) & 1 != 0;
}
void _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::set_InForcePull(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc271 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc271 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_HasTongue() {
    return (*(uint8_t*)((uintptr_t)this + 0xc272 + 0)) & 1 != 0;
}
_Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C*& _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_BP_Croakodile_Ref() {
    return *(_Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C**)((uintptr_t)this + 0xc278);
}
_Script_Engine::SceneComponent*& _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_Tracking_Target() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0xc288);
}
float& _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_Yaw() {
    return *(float*)((uintptr_t)this + 0xc280);
}
bool _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::get_Eye_Tracking_Active() {
    return (*(uint8_t*)((uintptr_t)this + 0xc290 + 0)) & 1 != 0;
}
void _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::set_Eye_Tracking_Active(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc290 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc290 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/Characters/Croakadile/Logic/AB_Croakodile.AB_Croakodile_C");
    return result;
}
void _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Croakodile_RsAnimMatcherGraphNode_E3BDC20D4D1B810A005C9FAC6A6AE888() {
    return;
}
void _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::BlueprintUpdateAnimation(float DeltaTimeX) {
    return;
}
void _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::BlueprintInitializeAnimation() {
    return;
}
void _Game_Characters_Croakadile_Logic_AB_Croakodile::AB_Croakodile_C::ExecuteUbergraph_AB_Croakodile(int32_t EntryPoint) {
    return;
}
