#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwAttackState.hpp"
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsDamageParams;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_RsGameTechRT {
struct RsCharacterAnimationData;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2 {
#pragma pack(push, 1)
struct BoganoFodder_Burrow_Description_V2_C : public _Script_SwGame::SwAttackState {
    private: char pad_258[0x58]; public:
    void* get_UberGraphFrame();
    _Script_RsGameTechRT::RsCharacter*& get_BogFodder_Ref();
    float& get_RealWaitTime();
    float& get_WaitTime_Min();
    float& get_WaitTime_Max();
    float& get_HeightDiffMax();
    _Script_Engine::AnimMontage*& get_BurrowMont();
    void* get_WaitTimer();
    void* get_BurrowExit();
    void* get_StartLoc();
    float& get_Z_Offset();
    void* get_BurrowParamName();
    static _Script_CoreUObject::Class* static_class();
    void OverrideAnimationData(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsCharacterAnimationData& CurrentAnimationData, _Script_RsGameTechRT::RsCharacterAnimationData& NewAnimationData);
    void FindBurrowExit(_Script_CoreUObject::Vector& ExitLoc);
    void OnBeginAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void OnDealtAnyDamage0(_Script_RsGameTechRT::RsCharacter* TheAttacker, float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* DamageCauser);
    void OnConnectedButDealtNoDamage0(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* OtherActor);
    void Start_Wait_Timer();
    void Wait_Time_Over();
    void OnEndAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void OnAttackDefended0(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsCharacter* TheDefender, void* DefenseType, _Script_Engine::HitResult& HitSweep);
    void Pop_Custom_Motion_Parms();
    void CombatNotify_StartWait();
    void CombatNotify_CheckMotionParm();
    void CombatNotify_DisablePullOut();
    void ExecuteUbergraph_BoganoFodder_Burrow_Description_V2(int32_t EntryPoint);
}; // Size: 0x2b0
#pragma pack(pop)
}
