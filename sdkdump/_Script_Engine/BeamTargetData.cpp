#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BeamTargetData.hpp"
void* _Script_Engine::BeamTargetData::get_TargetName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::BeamTargetData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BeamTargetData");
    return result;
}
float& _Script_Engine::BeamTargetData::get_TargetPercentage() {
    return *(float*)((uintptr_t)this + 0x8);
}
