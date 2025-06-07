#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SectionEvaluationData.hpp"
int32_t& _Script_MovieScene::SectionEvaluationData::get_ImplIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::SectionEvaluationData::get_ForcedTime() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_MovieScene::SectionEvaluationData::get_Flags() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_MovieScene::SectionEvaluationData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.SectionEvaluationData");
    return result;
}
