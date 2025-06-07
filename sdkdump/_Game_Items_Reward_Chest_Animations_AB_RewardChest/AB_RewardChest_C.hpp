#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Items_Reward_Chest_Animations_AB_RewardChest {
#pragma pack(push, 1)
struct AB_RewardChest_C : public _Script_Engine::AnimInstance {
    private: char pad_3b0[0x460]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root_E5398EEE41D0D69701941C8930883054();
    void* get_AnimGraphNode_Slot_001AC736456B7A86D5B75E9666D3EA64();
    void* get_AnimGraphNode_SequencePlayer_505F68EE49A29CF2358BBB89C3624B08();
    void* get_AnimGraphNode_BlendListByBool_D11CB144445103689E33F8ACFD964EFF();
    void* get_AnimGraphNode_SequencePlayer_30838F264C172ABAAD9185B3B0D960E1();
    void* get_AnimGraphNode_SequencePlayer_B9AA6CA24C686502D3DEF8861B01F7A9();
    void* get_AnimGraphNode_BlendListByBool_8DE963984C6BF81329D8A39CC76B856D();
    bool get_IsOpen();
    void set_IsOpen(bool value);
    bool get_isGold();
    void set_isGold(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ExecuteUbergraph_AB_RewardChest(int32_t EntryPoint);
}; // Size: 0x810
#pragma pack(pop)
}
