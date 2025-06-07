#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwAttackState.hpp"
namespace _Script_Engine {
struct AnimSequence;
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
struct RsCharacter;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Headbutt_Description {
#pragma pack(push, 1)
struct BoganoFodder_Headbutt_Description_C : public _Script_SwGame::SwAttackState {
    private: char pad_258[0x20]; public:
    void* get_UberGraphFrame();
    _Script_Engine::AnimSequence*& get_AnimAsset();
    float& get_Anim_Start_Time();
    float& get_BlendIn();
    float& get_BlendOut();
    static _Script_CoreUObject::Class* static_class();
    void OnDealtAnyDamage0(_Script_RsGameTechRT::RsCharacter* TheAttacker, float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* DamageCauser);
    void OnConnectedButDealtNoDamage0(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* OtherActor);
    void OnAttackDefended0(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsCharacter* TheDefender, void* DefenseType, _Script_Engine::HitResult& HitSweep);
    void ExecuteUbergraph_BoganoFodder_Headbutt_Description(int32_t EntryPoint);
}; // Size: 0x278
#pragma pack(pop)
}
