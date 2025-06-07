#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_SwGame {
struct SwProjectile;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_SwGame {
struct CombatAttackTableRow;
}
namespace _Script_RsGameTechRT {
struct RsAIGameStateManager;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager {
#pragma pack(push, 1)
struct Comp_Audio_Hero_Combat_State_Manager_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x68]; public:
    void* get_UberGraphFrame();
    void* get_State_Combat_Group();
    bool get_Turn_On_Auto_Start_Combat_Music();
    void set_Turn_On_Auto_Start_Combat_Music(bool value);
    bool get_Turn_On_Auto_End_Combat_Music();
    void set_Turn_On_Auto_End_Combat_Music(bool value);
    bool get_KeepMusCombatSystemActive_();
    void set_KeepMusCombatSystemActive_(bool value);
    _Script_AkAudio::AkAudioEvent*& get_Ak_Event_Zone_Switch();
    bool get_CombatStateActive();
    void set_CombatStateActive(bool value);
    void* get_State_Combat_Start();
    void* get_State_Combat_End();
    void* get_Mus_World_State_Group();
    void* get_Mus_World_State();
    float& get_CombatPreventTimer();
    bool get_IsTimerActive();
    void set_IsTimerActive(bool value);
    void* get_Combat_Prevent_Timer();
    bool get_PreventTimerRetrigger();
    void set_PreventTimerRetrigger(bool value);
    void* get_Mix_Num_Alive_Combatants();
    static _Script_CoreUObject::Class* static_class();
    void ProjectileReflection(_Script_SwGame::SwProjectile* BaseProjectile, bool& HeroDefended, bool& Reflected);
    void getSwordTrace(_Script_Engine::Actor*& Target);
    void GetCurrentCombatSequence(_Script_SwGame::CombatAttackTableRow& CombatSequence);
    void GetCurrentCombatMontage(_Script_Engine::AnimMontage*& CombatMontage);
    void SetCurrentCombatSequence(void* SequenceName, _Script_Engine::DataTable* SequenceTable);
    void SetCurrentCombatMontage(_Script_Engine::AnimMontage* Montage);
    void RefillForceMeter();
    void PlayHealingMontageOutro();
    void Music_Set_World_State(void* WorldStateMusic);
    void ClearZTarget();
    void KilledBountyHunter(_Script_Engine::Actor* KilledCharacter);
    void ReceiveBeginPlay0();
    void OnStateBegin(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState);
    void ManuallyStartCombatTrack();
    void ManuallyEndCombatTrack();
    void ExecuteCombatSequence(_Script_RsGameTechRT::RsCharacter* Actor, void* SequenceName, _Script_Engine::DataTable* SequenceTable);
    void OnTranquilityAchievedEvent_Event_0(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager);
    void clearSwordTrace();
    void EnemiesDefeated(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager);
    void Retrigger();
    void TimerComplete();
    void ParryStart(_Script_Engine::Actor* AI);
    void OnCombatantDiedEvent_Event_0(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, _Script_Engine::Actor* DeadCombatant);
    void CheckEnemies();
    void ExecuteUbergraph_Comp_Audio_Hero_Combat_State_Manager(int32_t EntryPoint);
}; // Size: 0x1d8
#pragma pack(pop)
}
