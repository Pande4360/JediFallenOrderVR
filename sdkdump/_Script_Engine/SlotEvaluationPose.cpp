#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SlotEvaluationPose.hpp"
void* _Script_Engine::SlotEvaluationPose::get_AdditiveType() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::SlotEvaluationPose::get_Weight() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::SlotEvaluationPose::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SlotEvaluationPose");
    return result;
}
