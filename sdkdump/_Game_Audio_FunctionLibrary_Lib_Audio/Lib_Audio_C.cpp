#include "..\FUObjectArray.hpp"
#include "Lib_Audio_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_AkAudio\AkComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void _Game_Audio_FunctionLibrary_Lib_Audio::Lib_Audio_C::StarWars_Music_Planet_Event_Swap(_Script_AkAudio::AkAudioEvent* StartPlanetMusic, _Script_AkAudio::AkAudioEvent* StopPlanetMusic, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Audio_FunctionLibrary_Lib_Audio::Lib_Audio_C::StarWars_Music_Event_Systemic(_Script_AkAudio::AkAudioEvent* Ak_Event, bool StartMusicWhenEnteringCombat_, bool StopMusicWhenCombatEnds_, bool RestartCombatMusicAfterLosingAggro_, float RestartCombatMusicCooldownTimer, _Script_CoreUObject::Object* __WorldContext, _Script_AkAudio::AkAudioEvent*& Return_Ak_Event) {
    return;
}
_Script_CoreUObject::Class* _Game_Audio_FunctionLibrary_Lib_Audio::Lib_Audio_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Audio/FunctionLibrary/Lib_Audio.Lib_Audio_C");
    return result;
}
void _Game_Audio_FunctionLibrary_Lib_Audio::Lib_Audio_C::StarWars_HealthFeedback_In_Clash(bool IsInClashSequeunce, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
int32_t _Game_Audio_FunctionLibrary_Lib_Audio::Lib_Audio_C::StarWars_AKComponent_Post_Event(_Script_AkAudio::AkComponent* AkComponent, _Script_AkAudio::AkAudioEvent* AkEvent, void* in_EventName, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Audio_FunctionLibrary_Lib_Audio::Lib_Audio_C::StarWars_Component_Post_Event(_Script_AkAudio::AkAudioEvent* AkEvent, _Script_Engine::SceneComponent* AttachToComponent, bool Occlusion_Enabled, _Script_CoreUObject::Object* __WorldContext, _Script_AkAudio::AkComponent*& AkComponent) {
    return;
}
void _Game_Audio_FunctionLibrary_Lib_Audio::Lib_Audio_C::StarWars_AkComponent_RTPC_Velocity(_Script_AkAudio::AkComponent* AkComponent, float VectorLengthMax, float Delta_Time, _Script_CoreUObject::Vector Get_Previous_Location, int32_t InterpolationTimeMs, _Script_CoreUObject::Object* __WorldContext, _Script_CoreUObject::Vector& Set_Previous_Location, float& VectorLength) {
    return;
}
void _Game_Audio_FunctionLibrary_Lib_Audio::Lib_Audio_C::StarWars_Music_Event_Scripted(_Script_AkAudio::AkAudioEvent* AkEvent, _Script_CoreUObject::Object* __WorldContext, _Script_AkAudio::AkAudioEvent*& Return_AkEvent) {
    return;
}
void _Game_Audio_FunctionLibrary_Lib_Audio::Lib_Audio_C::StarWars_Location_Post_Event(_Script_AkAudio::AkAudioEvent* AkEvent, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Orientation, _Script_Engine::Actor* World_Context, bool OcclusionEnabled, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
int32_t _Game_Audio_FunctionLibrary_Lib_Audio::Lib_Audio_C::StarWars_Actor_Post_Event(_Script_AkAudio::AkAudioEvent* AkEvent, _Script_Engine::Actor* Actor, bool bOcclusionEnabled, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
