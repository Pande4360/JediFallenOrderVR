#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_AkAudio {
struct AkComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Game_Audio_FunctionLibrary_Lib_Audio {
#pragma pack(push, 1)
struct Lib_Audio_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void StarWars_HealthFeedback_In_Clash(bool IsInClashSequeunce, _Script_CoreUObject::Object* __WorldContext);
    void StarWars_Music_Planet_Event_Swap(_Script_AkAudio::AkAudioEvent* StartPlanetMusic, _Script_AkAudio::AkAudioEvent* StopPlanetMusic, _Script_CoreUObject::Object* __WorldContext);
    void StarWars_Music_Event_Systemic(_Script_AkAudio::AkAudioEvent* Ak_Event, bool StartMusicWhenEnteringCombat_, bool StopMusicWhenCombatEnds_, bool RestartCombatMusicAfterLosingAggro_, float RestartCombatMusicCooldownTimer, _Script_CoreUObject::Object* __WorldContext, _Script_AkAudio::AkAudioEvent*& Return_Ak_Event);
    int32_t StarWars_AKComponent_Post_Event(_Script_AkAudio::AkComponent* AkComponent, _Script_AkAudio::AkAudioEvent* AkEvent, void* in_EventName, _Script_CoreUObject::Object* __WorldContext);
    void StarWars_Component_Post_Event(_Script_AkAudio::AkAudioEvent* AkEvent, _Script_Engine::SceneComponent* AttachToComponent, bool Occlusion_Enabled, _Script_CoreUObject::Object* __WorldContext, _Script_AkAudio::AkComponent*& AkComponent);
    void StarWars_AkComponent_RTPC_Velocity(_Script_AkAudio::AkComponent* AkComponent, float VectorLengthMax, float Delta_Time, _Script_CoreUObject::Vector Get_Previous_Location, int32_t InterpolationTimeMs, _Script_CoreUObject::Object* __WorldContext, _Script_CoreUObject::Vector& Set_Previous_Location, float& VectorLength);
    void StarWars_Music_Event_Scripted(_Script_AkAudio::AkAudioEvent* AkEvent, _Script_CoreUObject::Object* __WorldContext, _Script_AkAudio::AkAudioEvent*& Return_AkEvent);
    void StarWars_Location_Post_Event(_Script_AkAudio::AkAudioEvent* AkEvent, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Orientation, _Script_Engine::Actor* World_Context, bool OcclusionEnabled, _Script_CoreUObject::Object* __WorldContext);
    int32_t StarWars_Actor_Post_Event(_Script_AkAudio::AkAudioEvent* AkEvent, _Script_Engine::Actor* Actor, bool bOcclusionEnabled, _Script_CoreUObject::Object* __WorldContext);
}; // Size: 0x28
#pragma pack(pop)
}
