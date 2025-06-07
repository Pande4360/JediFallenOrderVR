#include "..\FUObjectArray.hpp"
#include "..\_Game_WorldInteracts_Navigation_Rope_BP_BaseRope\BP_BaseRope_C.hpp"
#include "BP_ClimbRope_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_WorldInteracts_Navigation_Rope_BP_ClimbRope::BP_ClimbRope_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x458);
}
bool _Game_WorldInteracts_Navigation_Rope_BP_ClimbRope::BP_ClimbRope_C::get_AnchorRopeEndpoint() {
    return (*(uint8_t*)((uintptr_t)this + 0x460 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Navigation_Rope_BP_ClimbRope::BP_ClimbRope_C::set_AnchorRopeEndpoint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x460 + 0);
    *(uint8_t*)((uintptr_t)this + 0x460 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_Navigation_Rope_BP_ClimbRope::BP_ClimbRope_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
_Script_CoreUObject::Class* _Game_WorldInteracts_Navigation_Rope_BP_ClimbRope::BP_ClimbRope_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/Navigation/Rope/BP_ClimbRope.BP_ClimbRope_C");
    return result;
}
void _Game_WorldInteracts_Navigation_Rope_BP_ClimbRope::BP_ClimbRope_C::UserConstructionScript0() {
    return;
}
void _Game_WorldInteracts_Navigation_Rope_BP_ClimbRope::BP_ClimbRope_C::ReceiveBeginPlay0() {
    return;
}
void _Game_WorldInteracts_Navigation_Rope_BP_ClimbRope::BP_ClimbRope_C::ExecuteUbergraph_BP_ClimbRope(int32_t EntryPoint) {
    return;
}
