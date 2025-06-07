#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AudioComponent.hpp"
#include "InterpTrackInst.hpp"
#include "InterpTrackInstSound.hpp"
_Script_Engine::AudioComponent*& _Script_Engine::InterpTrackInstSound::get_PlayAudioComp() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x30);
}
float& _Script_Engine::InterpTrackInstSound::get_LastUpdatePosition() {
    return *(float*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackInstSound::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackInstSound");
    return result;
}
