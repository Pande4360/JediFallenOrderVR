#include "..\FUObjectArray.hpp"
#include "BPFX_BirdLaunch_C.hpp"
#include "..\_Script_AkAudio\AkBankLoadComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
_Script_Engine::BoxComponent*& _Game_Effects_Particles_Birds_BPFX_BirdLaunch::BPFX_BirdLaunch_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x370);
}
void* _Game_Effects_Particles_Birds_BPFX_BirdLaunch::BPFX_BirdLaunch_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_AkAudio::AkBankLoadComponent*& _Game_Effects_Particles_Birds_BPFX_BirdLaunch::BPFX_BirdLaunch_C::get_AkBankLoad() {
    return *(_Script_AkAudio::AkBankLoadComponent**)((uintptr_t)this + 0x368);
}
_Script_CoreUObject::Class* _Game_Effects_Particles_Birds_BPFX_BirdLaunch::BPFX_BirdLaunch_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Effects/Particles/Birds/BPFX_BirdLaunch.BPFX_BirdLaunch_C");
    return result;
}
void* _Game_Effects_Particles_Birds_BPFX_BirdLaunch::BPFX_BirdLaunch_C::get_LaunchLocation() {
    return (void*)((uintptr_t)this + 0x380);
}
_Script_Engine::SceneComponent*& _Game_Effects_Particles_Birds_BPFX_BirdLaunch::BPFX_BirdLaunch_C::get_Scene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x378);
}
void* _Game_Effects_Particles_Birds_BPFX_BirdLaunch::BPFX_BirdLaunch_C::get_BirdScale() {
    return (void*)((uintptr_t)this + 0x38c);
}
void _Game_Effects_Particles_Birds_BPFX_BirdLaunch::BPFX_BirdLaunch_C::UserConstructionScript0() {
    return;
}
void _Game_Effects_Particles_Birds_BPFX_BirdLaunch::BPFX_BirdLaunch_C::ReceiveActorBeginOverlap0(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Effects_Particles_Birds_BPFX_BirdLaunch::BPFX_BirdLaunch_C::ExecuteUbergraph_BPFX_BirdLaunch(int32_t EntryPoint) {
    return;
}
