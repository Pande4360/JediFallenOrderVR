#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Function.hpp"
#include "EventGraphFastCallPair.hpp"
_Script_CoreUObject::Class* _Script_Engine::EventGraphFastCallPair::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.EventGraphFastCallPair");
    return result;
}
_Script_CoreUObject::Function*& _Script_Engine::EventGraphFastCallPair::get_FunctionToPatch() {
    return *(_Script_CoreUObject::Function**)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::EventGraphFastCallPair::get_EventGraphCallOffset() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
