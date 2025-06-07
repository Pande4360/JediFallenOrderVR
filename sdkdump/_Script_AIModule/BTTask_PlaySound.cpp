#include "..\FUObjectArray.hpp"
#include "BTTaskNode.hpp"
#include "BTTask_PlaySound.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundCue.hpp"
_Script_Engine::SoundCue*& _Script_AIModule::BTTask_PlaySound::get_SoundToPlay() {
    return *(_Script_Engine::SoundCue**)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_AIModule::BTTask_PlaySound::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTTask_PlaySound");
    return result;
}
