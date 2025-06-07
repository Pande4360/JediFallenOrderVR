#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ForceFeedbackAttenuation.hpp"
_Script_CoreUObject::Class* _Script_Engine::ForceFeedbackAttenuation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ForceFeedbackAttenuation");
    return result;
}
void* _Script_Engine::ForceFeedbackAttenuation::get_Attenuation() {
    return (void*)((uintptr_t)this + 0x28);
}
