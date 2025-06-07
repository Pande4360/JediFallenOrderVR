#include "..\FUObjectArray.hpp"
#include "AB_Bogling_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAIAnimInstance.hpp"
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x11f0);
}
void _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bogling_AnimGraphNode_TransitionResult_F67E7C274E66375908D65FA5148AF9BE() {
    return;
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_Root_51D77BFC47EB7F7EFB7BBEAE64950145() {
    return (void*)((uintptr_t)this + 0x11f8);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_TransitionResult_014A9FCB4712360EDAEC79AB80F64EC5() {
    return (void*)((uintptr_t)this + 0x1318);
}
void _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::set_IsUp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20c9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20c9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_TransitionResult_BD4D2DF34FE0515D6BA9A98C0734B5B6() {
    return (void*)((uintptr_t)this + 0x1288);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_StateResult_B98656144D6E7D6865467E941543D8F2() {
    return (void*)((uintptr_t)this + 0x19d8);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_TransitionResult_0812596944F01F323A7433B80792560B() {
    return (void*)((uintptr_t)this + 0x1240);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_TransitionResult_48E0971047270C9FCC0EB0AEDC567F1E() {
    return (void*)((uintptr_t)this + 0x12d0);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_TransitionResult_FE901DEE4CCCEA1F3A223D99CA14F2F1() {
    return (void*)((uintptr_t)this + 0x1360);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_SequencePlayer_22B411F74EF4DA6FD58E55B5DBB7DDD5() {
    return (void*)((uintptr_t)this + 0x1af8);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_RandomPlayer_A91EAD0545A32C15B54DCA9642896B0C() {
    return (void*)((uintptr_t)this + 0x13a8);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_StateResult_AFB800804E5E66D3D67D2EAF32957AF4() {
    return (void*)((uintptr_t)this + 0x1438);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_RandomPlayer_D3212F5940AD92CA3D3101B9136DCD66() {
    return (void*)((uintptr_t)this + 0x1a20);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_SequencePlayer_4C8A0D484037CBB985A1D98E13724D63() {
    return (void*)((uintptr_t)this + 0x1480);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_StateResult_91DC2BB7480AF7AE4F07C3A535B689D4() {
    return (void*)((uintptr_t)this + 0x1528);
}
_Script_CoreUObject::Class* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/Characters/Bogling/Logic/AB_Bogling.AB_Bogling_C");
    return result;
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_SequencePlayer_0E755211416A21C22B34AA869BD8D591() {
    return (void*)((uintptr_t)this + 0x1570);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_StateResult_B611E597450F022895A29A8E7BA113AA() {
    return (void*)((uintptr_t)this + 0x1618);
}
void _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bogling_AnimGraphNode_TransitionResult_48E0971047270C9FCC0EB0AEDC567F1E() {
    return;
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_StateMachine_A4F831BB4FC8C9B442E6FA87D66FC4A1() {
    return (void*)((uintptr_t)this + 0x1660);
}
void _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bogling_AnimGraphNode_TransitionResult_014A9FCB4712360EDAEC79AB80F64EC5() {
    return;
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_BlendListByBool_FDCB6C6045F96A65342181A6EAC0B40A() {
    return (void*)((uintptr_t)this + 0x1740);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_StateResult_926C50D04D0A749B042A2EAE1B687F99() {
    return (void*)((uintptr_t)this + 0x1ab0);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_TransitionResult_9B6DE56D46115F80C665F88CEE0385FB() {
    return (void*)((uintptr_t)this + 0x1810);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_TransitionResult_F67E7C274E66375908D65FA5148AF9BE() {
    return (void*)((uintptr_t)this + 0x1858);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_TransitionResult_3AF2A4F7446421D39BABF691586CDF92() {
    return (void*)((uintptr_t)this + 0x18a0);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_TransitionResult_95408D004682CBC16F5E0AAEAFF853A8() {
    return (void*)((uintptr_t)this + 0x18e8);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_SequencePlayer_A73152544EEDC6F88EE8FD92B646897E() {
    return (void*)((uintptr_t)this + 0x1930);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_StateResult_0AD0D31843BFC5170F3F8C9A1BCAFAE0() {
    return (void*)((uintptr_t)this + 0x1ba0);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_SequencePlayer_6116B8F54E4037172F1E93AEE6F0290B() {
    return (void*)((uintptr_t)this + 0x1be8);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_StateResult_049EB9EF420D826C5B26BC880A9386A0() {
    return (void*)((uintptr_t)this + 0x1c90);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_StateMachine_FA89C5AD4268D2F80105CA9FD8386EEE() {
    return (void*)((uintptr_t)this + 0x1cd8);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_SaveCachedPose_4775541E4F711F48DE24008FB2F4F69F() {
    return (void*)((uintptr_t)this + 0x1db8);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_UseCachedPose_8448F2374E45820EBA8A1D9AFD679BEA() {
    return (void*)((uintptr_t)this + 0x1ed0);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_UseCachedPose_A536DA51413A1790311F148A634B34CA() {
    return (void*)((uintptr_t)this + 0x1f18);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_TwoWayBlend_7F91844144BAF4620F21938CD9681E87() {
    return (void*)((uintptr_t)this + 0x1f60);
}
void* _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_AnimGraphNode_Slot_58B28AF34D28157299A86BA9682C1249() {
    return (void*)((uintptr_t)this + 0x2058);
}
bool _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_InBoglingHole() {
    return (*(uint8_t*)((uintptr_t)this + 0x20c8 + 0)) & 1 != 0;
}
void _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::set_InBoglingHole(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::get_IsUp() {
    return (*(uint8_t*)((uintptr_t)this + 0x20c9 + 0)) & 1 != 0;
}
void _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bogling_AnimGraphNode_TransitionResult_3AF2A4F7446421D39BABF691586CDF92() {
    return;
}
void _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bogling_AnimGraphNode_TransitionResult_0812596944F01F323A7433B80792560B() {
    return;
}
void _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bogling_AnimGraphNode_TransitionResult_BD4D2DF34FE0515D6BA9A98C0734B5B6() {
    return;
}
void _Game_Characters_Bogling_Logic_AB_Bogling::AB_Bogling_C::ExecuteUbergraph_AB_Bogling(int32_t EntryPoint) {
    return;
}
