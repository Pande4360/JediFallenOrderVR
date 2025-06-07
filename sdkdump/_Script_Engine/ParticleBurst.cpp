#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleBurst.hpp"
_Script_CoreUObject::Class* _Script_Engine::ParticleBurst::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ParticleBurst");
    return result;
}
int32_t& _Script_Engine::ParticleBurst::get_Count() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::ParticleBurst::get_CountLow() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::ParticleBurst::get_Time() {
    return *(float*)((uintptr_t)this + 0x8);
}
