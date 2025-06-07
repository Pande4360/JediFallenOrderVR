#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimSequence.hpp"
#include "BlendSampleData.hpp"
_Script_CoreUObject::Class* _Script_Engine::BlendSampleData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BlendSampleData");
    return result;
}
float& _Script_Engine::BlendSampleData::get_TotalWeight() {
    return *(float*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Engine::BlendSampleData::get_SampleDataIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_Engine::AnimSequence*& _Script_Engine::BlendSampleData::get_Animation() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x8);
}
float& _Script_Engine::BlendSampleData::get_SamplePlayRate() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Engine::BlendSampleData::get_Time() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::BlendSampleData::get_PreviousTime() {
    return *(float*)((uintptr_t)this + 0x18);
}
