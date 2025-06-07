#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LatentActionInfo.hpp"
int32_t& _Script_Engine::LatentActionInfo::get_Linkage() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::LatentActionInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LatentActionInfo");
    return result;
}
int32_t& _Script_Engine::LatentActionInfo::get_UUID() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::LatentActionInfo::get_ExecutionFunction() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Object*& _Script_Engine::LatentActionInfo::get_CallbackTarget() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x10);
}
