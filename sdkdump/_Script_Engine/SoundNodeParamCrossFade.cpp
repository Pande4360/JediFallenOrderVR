#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundNodeDistanceCrossFade.hpp"
#include "SoundNodeParamCrossFade.hpp"
void* _Script_Engine::SoundNodeParamCrossFade::get_ParamName() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Engine::SoundNodeParamCrossFade::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeParamCrossFade");
    return result;
}
