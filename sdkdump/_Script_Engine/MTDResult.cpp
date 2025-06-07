#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MTDResult.hpp"
float& _Script_Engine::MTDResult::get_Distance() {
    return *(float*)((uintptr_t)this + 0xc);
}
void* _Script_Engine::MTDResult::get_Direction() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::MTDResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MTDResult");
    return result;
}
