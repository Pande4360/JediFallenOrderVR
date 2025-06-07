#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "RsFocusInputs.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsFocusInputs::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsFocusInputs");
    return result;
}
_Script_Engine::Actor*& _Script_RsGameTechRT::RsFocusInputs::get_FocusActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsFocusInputs::get_FocusSocket() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_RsGameTechRT::RsFocusInputs::get_BehaviorName() {
    return (void*)((uintptr_t)this + 0x10);
}
