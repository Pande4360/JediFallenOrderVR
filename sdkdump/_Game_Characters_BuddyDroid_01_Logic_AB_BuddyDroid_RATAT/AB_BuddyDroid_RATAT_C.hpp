#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsTechRT\rsAnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_BuddyDroid_01_Logic_AB_BuddyDroid_RATAT {
#pragma pack(push, 1)
struct AB_BuddyDroid_RATAT_C : public _Script_RsTechRT::rsAnimInstance {
    private: char pad_7a0[0xb88]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root_6E30ACC14F897F41CC4B8883C63E5EE8();
    void* get_AnimGraphNode_TransitionResult_EC6EB6D8400CB9EDAEB24996A21B6D32();
    void* get_AnimGraphNode_TransitionResult_941F7FA447C1C041457D9FA785E75B3E();
    void* get_AnimGraphNode_TransitionResult_0815BD5E4576E5A76256C2B652160231();
    void* get_AnimGraphNode_TransitionResult_DDBE568F41A2466D5DC38A8E40A524A5();
    void* get_AnimGraphNode_TransitionResult_43477263447A764680147D8640C99DF2();
    void* get_AnimGraphNode_TransitionResult_F72E65B64808F672A48E2BBA315B49E2();
    void* get_AnimGraphNode_TransitionResult_EBF54B1A4C5E5EE2D5D9DFA7E08F4BB6();
    void* get_AnimGraphNode_TransitionResult_10B00CDC468E4EC237A66DB877EFBAFE();
    void* get_AnimGraphNode_TransitionResult_791AF6594EF072F9CC26D590368ECE2F();
    void* get_AnimGraphNode_TransitionResult_C358D1FC4FDAC7563E69CEA40D5B725E();
    void* get_AnimGraphNode_SequencePlayer_B63E6AE04FBD0BB1513B3C92C81D48C1();
    void* get_AnimGraphNode_StateResult_367828FB4E4AB714C65700A072047A35();
    void* get_AnimGraphNode_SequencePlayer_17EC54544F158B916384E9A65A36B414();
    void* get_AnimGraphNode_StateResult_9C757FAF4DC3198C7F62599742508D71();
    void* get_AnimGraphNode_SequencePlayer_7FC658BF46FA762204611198FC31FB97();
    void* get_AnimGraphNode_StateResult_226D93CD4CD422BDED332BBBFB1626D7();
    void* get_AnimGraphNode_SequencePlayer_AB9D69D044D26D600AF7AE8946343F38();
    void* get_AnimGraphNode_StateResult_6714340B421FED3F9873B38CA932E055();
    void* get_AnimGraphNode_SequencePlayer_FF96736947E1EA89B9DD689A108FC4C3();
    void* get_AnimGraphNode_StateResult_A78D93C44266460651945E90E3DF90F3();
    void* get_AnimGraphNode_SequencePlayer_59BD46A54488C3493D5528A669835143();
    void* get_AnimGraphNode_StateResult_678D965B414ED4E1A854F6B64E7E4084();
    void* get_AnimGraphNode_SequencePlayer_6AD4BD70433F00552742739EA3E26B8E();
    void* get_AnimGraphNode_StateResult_F8BA46784EE3FDDE6BC8E1AC8477C5C6();
    void* get_AnimGraphNode_SequencePlayer_1B38F33D47733CD434443DA6B1F11FE0();
    void* get_AnimGraphNode_StateResult_2B2D953441AE4A36B67C73AEEDB033D2();
    void* get_AnimGraphNode_StateMachine_A1525BAD4C45180B19FB1181EF8265D7();
    bool get_cannon();
    void set_cannon(bool value);
    bool get_hitFront();
    void set_hitFront(bool value);
    int32_t& get_DamageLevel();
    static _Script_CoreUObject::Class* static_class();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BuddyDroid_RATAT_AnimGraphNode_TransitionResult_F72E65B64808F672A48E2BBA315B49E2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BuddyDroid_RATAT_AnimGraphNode_TransitionResult_C358D1FC4FDAC7563E69CEA40D5B725E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BuddyDroid_RATAT_AnimGraphNode_TransitionResult_43477263447A764680147D8640C99DF2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BuddyDroid_RATAT_AnimGraphNode_TransitionResult_0815BD5E4576E5A76256C2B652160231();
    void Shoot_Event(bool Blasters, bool cannon);
    void Hit_Event(float Damage);
    void AnimNotify_playOnce();
    void ExecuteUbergraph_AB_BuddyDroid_RATAT(int32_t EntryPoint);
}; // Size: 0x1328
#pragma pack(pop)
}
