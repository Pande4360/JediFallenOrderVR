#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundNode.hpp"
#include "SoundNodeDistanceCrossFade.hpp"
_Script_CoreUObject::Class* _Script_Engine::SoundNodeDistanceCrossFade::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeDistanceCrossFade");
    return result;
}
void* _Script_Engine::SoundNodeDistanceCrossFade::get_CrossFadeInput() {
    return (void*)((uintptr_t)this + 0x38);
}
