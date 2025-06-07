#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwAttackState.hpp"
namespace _Script_RsTechRT {
struct rsAnimInstance;
}
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Air {
#pragma pack(push, 1)
struct BP_Hero_AttackDescription_Air_C : public _Script_SwGame::SwAttackState {
    private: char pad_258[0x20]; public:
    void* get_UberGraphFrame();
    _Script_RsTechRT::rsAnimInstance*& get_Anim_Instance();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero();
    _Script_Engine::AnimMontage*& get_CurrentActiveMontage();
    static _Script_CoreUObject::Class* static_class();
    void OnBeginAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void OnEndAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void Nav_State_Changed(void* NewState, void* PrevState);
    void ExecuteUbergraph_BP_Hero_AttackDescription_Air(int32_t EntryPoint);
}; // Size: 0x278
#pragma pack(pop)
}
