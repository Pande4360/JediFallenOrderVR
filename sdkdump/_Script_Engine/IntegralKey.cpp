#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "IntegralKey.hpp"
_Script_CoreUObject::Class* _Script_Engine::IntegralKey::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.IntegralKey");
    return result;
}
float& _Script_Engine::IntegralKey::get_Time() {
    return *(float*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::IntegralKey::get_Value() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
