#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "SwQuicksandActiveEffect.hpp"
_Script_Engine::Actor*& _Script_SwGame::SwQuicksandActiveEffect::get_actorInQuicksand() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x10);
}
_Script_Engine::ParticleSystemComponent*& _Script_SwGame::SwQuicksandActiveEffect::get_FXComponent() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x18);
}
_Script_Engine::ChildActorComponent*& _Script_SwGame::SwQuicksandActiveEffect::get_ComponentForChildActorForSurfaceDeformation() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_SwGame::SwQuicksandActiveEffect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwQuicksandActiveEffect");
    return result;
}
