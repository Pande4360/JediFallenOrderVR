#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackFloatBase.hpp"
#include "InterpTrackFloatParticleParam.hpp"
void* _Script_Engine::InterpTrackFloatParticleParam::get_ParamName() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackFloatParticleParam::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackFloatParticleParam");
    return result;
}
