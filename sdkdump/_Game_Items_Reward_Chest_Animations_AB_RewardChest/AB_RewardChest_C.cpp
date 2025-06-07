#include "..\FUObjectArray.hpp"
#include "AB_RewardChest_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
void* _Game_Items_Reward_Chest_Animations_AB_RewardChest::AB_RewardChest_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void* _Game_Items_Reward_Chest_Animations_AB_RewardChest::AB_RewardChest_C::get_AnimGraphNode_Root_E5398EEE41D0D69701941C8930883054() {
    return (void*)((uintptr_t)this + 0x3b8);
}
void* _Game_Items_Reward_Chest_Animations_AB_RewardChest::AB_RewardChest_C::get_AnimGraphNode_Slot_001AC736456B7A86D5B75E9666D3EA64() {
    return (void*)((uintptr_t)this + 0x400);
}
void* _Game_Items_Reward_Chest_Animations_AB_RewardChest::AB_RewardChest_C::get_AnimGraphNode_SequencePlayer_505F68EE49A29CF2358BBB89C3624B08() {
    return (void*)((uintptr_t)this + 0x470);
}
void* _Game_Items_Reward_Chest_Animations_AB_RewardChest::AB_RewardChest_C::get_AnimGraphNode_BlendListByBool_D11CB144445103689E33F8ACFD964EFF() {
    return (void*)((uintptr_t)this + 0x518);
}
_Script_CoreUObject::Class* _Game_Items_Reward_Chest_Animations_AB_RewardChest::AB_RewardChest_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/Items/Reward_Chest/Animations/AB_RewardChest.AB_RewardChest_C");
    return result;
}
void* _Game_Items_Reward_Chest_Animations_AB_RewardChest::AB_RewardChest_C::get_AnimGraphNode_SequencePlayer_30838F264C172ABAAD9185B3B0D960E1() {
    return (void*)((uintptr_t)this + 0x5e8);
}
void* _Game_Items_Reward_Chest_Animations_AB_RewardChest::AB_RewardChest_C::get_AnimGraphNode_SequencePlayer_B9AA6CA24C686502D3DEF8861B01F7A9() {
    return (void*)((uintptr_t)this + 0x690);
}
void* _Game_Items_Reward_Chest_Animations_AB_RewardChest::AB_RewardChest_C::get_AnimGraphNode_BlendListByBool_8DE963984C6BF81329D8A39CC76B856D() {
    return (void*)((uintptr_t)this + 0x738);
}
void _Game_Items_Reward_Chest_Animations_AB_RewardChest::AB_RewardChest_C::ExecuteUbergraph_AB_RewardChest(int32_t EntryPoint) {
    return;
}
bool _Game_Items_Reward_Chest_Animations_AB_RewardChest::AB_RewardChest_C::get_IsOpen() {
    return (*(uint8_t*)((uintptr_t)this + 0x808 + 0)) & 1 != 0;
}
bool _Game_Items_Reward_Chest_Animations_AB_RewardChest::AB_RewardChest_C::get_isGold() {
    return (*(uint8_t*)((uintptr_t)this + 0x809 + 0)) & 1 != 0;
}
void _Game_Items_Reward_Chest_Animations_AB_RewardChest::AB_RewardChest_C::set_IsOpen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x808 + 0);
    *(uint8_t*)((uintptr_t)this + 0x808 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Items_Reward_Chest_Animations_AB_RewardChest::AB_RewardChest_C::set_isGold(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x809 + 0);
    *(uint8_t*)((uintptr_t)this + 0x809 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
